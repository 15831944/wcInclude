//==============================================================================
//									STRUCT FileSystem
//
// DESCRIPTION:
//			Some useful helper functions to access the file system.
//
//==============================================================================

#include "FileSystem.h"
struct FileSystem 
{
	// Deletes all files in the given directory.
	void static CleanDirectory(wchar_t *DirK)
	{
		SHFILEOPSTRUCTW sOp;
		wchar_t delSpec[MAX_PATH]={0};

		wcscpy(delSpec,DirK);
		wcscat(delSpec,L"\\*.*\0\0");

		ZeroMemory(&sOp,sizeof(SHFILEOPSTRUCTW));
		sOp.wFunc = FO_DELETE;
		sOp.pFrom = delSpec;
		sOp.fFlags =  FOF_NOCONFIRMATION | FOF_NORECURSION | FOF_SILENT;

		int status = SHFileOperationW(&sOp);
	}

	// Creates the new temporary directory.
	// Typically called on first run only.
	bool static Create_productive_dir(wchar_t *DirK)
	{
		int res = SHCreateDirectory(NULL,DirK);
		if (res == ERROR_SUCCESS || res == ERROR_ALREADY_EXISTS || res == ERROR_FILE_EXISTS)
		{
			return true;
		} 
		else
		{
			return false;
		}
	}

	// Returns true if file specified in 'FullPath' exists.
	bool static FileExists(wchar_t *FullPath,/*NOT USED*/ wchar_t *FileName)
	{
		if(PathFileExists (CW2A(FullPath)))return true;
		return false;		
	}

	// Compares last modification times of two files.
	// Returns true if 'NewFile' exists and is newer than 'OldFile' or if 'OldFile' doesn't exist,
	// false otherwise.
	bool static FileIsNewer(wchar_t *NewFile,wchar_t *OldFile)
	{
		FILETIME time_N,time_O;

		if(!GetFileLastWriteTime(NewFile,&time_N)) return false;
		if(!GetFileLastWriteTime(OldFile,&time_O)) return true;
		if(CompareFileTime(&time_N , &time_O) == 1)return true;
		return false;
	}

	bool static Run(wchar_t *AppFile,wchar_t *CommandLineArgs)
	{
		
		STARTUPINFOW si;
		PROCESS_INFORMATION pi;

		ZeroMemory( &si, sizeof(si) );
		si.cb = sizeof(si);
		ZeroMemory( &pi, sizeof(pi) );

		if(!CreateProcessW(																	
			AppFile
			,CommandLineArgs
			,NULL
			,NULL
			,FALSE
			,NORMAL_PRIORITY_CLASS
			,NULL
			,NULL
			,&si
			,&pi
			)){
				MessageBox(NULL,"Cannot Launch External Application!","",MB_ICONEXCLAMATION);
				return FALSE;
			}

			// Wait until child process exits.
			if(WaitForSingleObject( pi.hProcess, INFINITE )== WAIT_FAILED)return false;			

			// Close process and thread handles. 
			CloseHandle( pi.hProcess );
			CloseHandle( pi.hThread );
			return true;
	}

private:
	bool static GetFileLastWriteTime(wchar_t *FileName,OUT LPFILETIME FT)
	{
		HANDLE hFile = CreateFile(CW2A(FileName),GENERIC_READ,FILE_SHARE_READ | FILE_SHARE_WRITE,0,OPEN_EXISTING,0,0);
		if (hFile == INVALID_HANDLE_VALUE)return false;
		BOOL status = GetFileTime(hFile,NULL,NULL,FT);
		CloseHandle(hFile);
		if(status)return true;
		return false;
	}
};