/*--------------  C L A S S  wcProUtil  --------

A Wrapper Class for ProE object: ProUtil
Created By: Michael Lucatz
Date:       31/03/2006 23:21:55
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProUtil.h>
#include <ProWstring.h>

class wcProUtil: public wcProObject
{
public:
	wcProUtil(void)
	{
	}

	~wcProUtil(void)
	{
	}

	ProError ConfigoptSet (ProName option,ProPath option_value )
	{
		return ProConfigoptSet (option,option_value );
	}

	ProError ConfigoptGet (ProName option,ProLine option_value )
	{
		return ProConfigoptGet (option,option_value );
	}

	ProError InfoWindowDisplay ( ProPath file_name,ProInfoWindowLocation* location,ProInfoWindowSize* size )
	{
		return ProInfoWindowDisplay ( file_name,location,size );
	}

	ProError FileEdit ( ProPath file_name )
	{
		return ProFileEdit ( file_name );
	}

	ProError ToolkitApplExecPathGet ( ProPath exec_path )
	{
		return ProToolkitApplExecPathGet ( exec_path );
	}

	ProError ToolkitApplTextPathGet ( ProPath text_path )
	{
		return ProToolkitApplTextPathGet ( text_path );
	}

	ProError DirectoryChange ( ProPath path )
	{
		return ProDirectoryChange ( path );
	}

	ProError DirectoryCurrentGet ( ProPath path )
	{
		return ProDirectoryCurrentGet ( path );
	}

	ProError OptionOrderedVerify ( ProCharName option,ProBoolean* p_option_exist )
	{
		return ProOptionOrderedVerify ( option,p_option_exist );
	}

	ProError WcharSizeVerify ( int application_size_of_wchar,int* proe_size_of_wchar )
	{
		return ProWcharSizeVerify ( application_size_of_wchar,proe_size_of_wchar );
	}

	ProError OutputFileWrite ( ProMdl model,ProFileName name,ProImportExportFile file_type,ProAppData arg1,ProAppData arg2,ProAppData arg3,ProAppData arg4 )
	{
		return ProOutputFileWrite ( model,name,file_type,arg1,arg2,arg3,arg4 );
	}

	ProError PlotfileWrite ( ProMdl model,ProFileName filename,ProPlotOptions* plot_options )
	{
		return ProPlotfileWrite ( model,filename,plot_options );
	}

	ProError RasterFileWrite ( int window_id,ProRasterDepth depth,double width,double height,ProDotsPerInch dots_per_inch,ProRasterType type,ProPath output_file )
	{
		return ProRasterFileWrite ( window_id,depth,width,height,dots_per_inch,type,output_file );
	}

	ProError ExportVRML ( ProBoolean direct,ProMdl model,ProPath input_file,ProPath output_path )
	{
		return ProExportVRML ( direct,model,input_file,output_path );
	}

	ProError InputFileRead ( ProMdl model,ProPath filename,ProImportExportFile file_type,ProAppData arg1,ProAppData arg2,ProAppData arg3,ProAppData arg4 )
	{
		return ProInputFileRead ( model,filename,file_type,arg1,arg2,arg3,arg4 );
	}

	ProError TrailfileCommentWrite ( ProComment comment )
	{
		return ProTrailfileCommentWrite ( comment );
	}

	ProError FileOpen (ProName dialog_label,ProLine filter_string,ProPath *shortcut_path_arr,ProName *shortcut_name_arr,ProPath default_path,ProFileName pre_sel_file_name,ProPath r_selected_file)
	{
		return ProFileOpen (dialog_label,filter_string,shortcut_path_arr,shortcut_name_arr,default_path,pre_sel_file_name,r_selected_file);
	}

	ProError DirectoryChoose (ProName dialog_label,ProPath *shortcut_path_arr,ProName *shortcut_name_arr,ProPath default_path,ProPath r_selected_path)
	{
		return ProDirectoryChoose (dialog_label,shortcut_path_arr,shortcut_name_arr,default_path,r_selected_path);
	}

	ProError FileCopyFromWS (ProPath source_file,ProPath target_directory)
	{
		return ProFileCopyFromWS (source_file,target_directory);
	}

	ProError IntfSliceFileExport (ProMdl model,ProFileName out_file_name,ProImportExportFile file_type,double quality[2],ProMatrix transf,ProAsmcomppath *comp_path)
	{
		return ProIntfSliceFileExport (model,out_file_name,file_type,quality,transf,comp_path);
	}

	ProError FilesList (ProPath directory_path,ProLine filter,ProFileListOpt listing_option,ProPath **p_file_name_array,ProPath **p_subdir_name_array)
	{
		return ProFilesList (directory_path,filter,listing_option,p_file_name_array,p_subdir_name_array);
	}

	ProError FilenameParse (ProPath file_name_w_path,ProPath r_path,ProName r_file_name,ProName r_extension,int *r_version)
	{
		return ProFilenameParse (file_name_w_path,r_path,r_file_name,r_extension,r_version);
	}
	ProError PathCreate(ProPath path,ProName file_name,ProName extension,int version,ProPath r_file_name_w_path)
	{
		return ProPathCreate(path,file_name,extension,version,r_file_name_w_path);
	}
	ProError _2dExport(ProImportExportFile format,ProPath filename,ProMdl model,Pro2dExportdata data) /*Purpose: Exports 2d information to a file.Input Arguments:format - The type of file to be exported.The only value supported is PRO_STEP_FILE.filename - The name and absolute path of the export file to be created.m_type - The 2d model from which the information is to be exported.Output Arguments:NoneReturn Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_BAD_CONTEXT - The model was not 2d.PRO_TK_NO_LICENSE - There is no license for this import option.*/ 
	{
		return Pro2dExport(format,filename,model,data);
	}
	ProError _2dExport(ProImportExportFile format,ProPath filename,ProMdl model) /*Purpose: Exports 2d information to a file.Input Arguments:format - The type of file to be exported.The only value supported is PRO_STEP_FILE.filename - The name and absolute path of the export file to be created.m_type - The 2d model from which the information is to be exported.Output Arguments:NoneReturn Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_BAD_CONTEXT - The model was not 2d.PRO_TK_NO_LICENSE - There is no license for this import option.*/ 
		{
			return Pro2dExport(format,filename,model,NULL);
		}
	//ProError _2dCadamImportCreate(ProImportCadam format,ProPath filename,ProName name,ProMdlType mtype,ProBoolean scale_to_fit,ProBoolean fit_left_corner,ProMdl *new_model) /*Purpose: Creates a new 2d Pro/ENGINEER model by importing a Cadam geometry file.Input Arguments:format - The type of Cadam file to be imported.These values are supported:<p> PRO_CADAM_FILE <br>PRO_CADAM_DIRECT_FILE<br>PRO_CADAM_CPTR_FILE<br></p>filename - The name (absolute path) of the file to be imported.name - The name of the model to be created.mtype - The type of model to create.Must be of type</p> PRO_MDL_DRAWING<br>PRO_MDL_LAYOUTG<br>PRO_MDL_DIAGRAMG<br>PRO_MDL_DWGFORMG<br></P>scale_to_fit - If the current model has a different sheet size fromthat specified by the imported file, scale_to_fitshould be TRUE to retain the current sheet size, orFALSE to adopt the new one .fit_left_corner - If the imported file retain his original sheet size,the bottom left corner of the file will be adjusted tobottom left corner of the current model for PRO_B_TRUE,and imported "as is" for PRO_B_FALSE.Output Arguments:new_model - The new model that Pro/ENGINEER created.Return Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_INVALID_FILE - The input file could not be found, or contained unrecoverableerrors.PRO_TK_NO_LICENSE - There is no license for this import option.*/ 
	//{
	//	return Pro2dCadamImportCreate(format,filename,name,mtype,scale_to_fit,fit_left_corner,new_model);
	//}

	ProError _2dImportAppend(ProImportExportFile format,ProPath filename,ProMdl model,ProBoolean scale_to_fit,ProBoolean fit_left_corner) /*Purpose: Imports a 2d geometry file into an existing 2d Pro/ENGINEER model.Input Arguments:format - The type of file to be imported.These values are supported:<p> PRO_STEP_FILE <br>PRO_IGES_FILE<br>PRO_DXF_FILE<br>PRO_DWG_FILE<br>PRO_SET_FILE</p>filename - The name (absolute path) of the file to be imported.model - The model into which to append the data.scale_to_fit - If the current model has a different sheet size fromthat specified by the imported file, scale_to_fitshould be TRUE to retain the current sheet size, orFALSE to adopt the new one .fit_left_corner - If the imported file retain his original sheet size,the bottom left corner of the file will be adjusted tobottom left corner of the current model for PRO_B_TRUE,and imported "as is" for PRO_B_FALSE.Output Arguments:NoneReturn Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_INVALID_FILE - The input file could not be found, or contained unrecoverableerrors.PRO_TK_NO_LICENSE - There is no license for this import option.*/ 
	{
		return Pro2dImportAppend(format,filename,model,scale_to_fit,fit_left_corner);
	}
	ProError _2dImportCreate(ProImportExportFile format,ProPath filename,ProName name,ProMdlType mtype,ProBoolean import_2d_views,ProBoolean scale_to_fit,ProBoolean fit_left_corner,ProMdl *new_model) /*Purpose: Creates a new 2d Pro/ENGINEER model by importing a 2d geometry file.Input Arguments:format - The type of file to be imported. The followingvalues are supported:<p> PRO_STEP_FILE </br>PRO_IGES_FILE</br>PRO_DXF_FILE</br>PRO_DWG_FILE</br>PRO_MEDUSA_FILE </p>Note: To import the 2d MEDUSA file set the configoption "allow_medusa_draw_import" to yes.filename - The name (absolute path) of the file to be imported.The name of the MEDUSA files must have the formats.objectname.name - The name of the model to be created.mtype - The type of model to create.Must be PRO_MDL_DRAWING,PRO_MDL_LAYOUT,PRO_MDL_DIAGRAM orPRO_MDL_DWGFORM.import_2d_views - Whether to import 2d drawing views.scale_to_fit - If the current model has a different sheet size fromthat specified by the imported file, scale_to_fitshould be TRUE to retain the current sheet size, orFALSE to adopt the new one.fit_left_corner - If the imported file retain its original sheet size,the bottom left corner of the file will be adjustedto the bottom left corner of the current modelfor PRO_B_TRUE,and imported "as is" for PRO_B_FALSE.Output Arguments:new_model - The new model that Pro/ENGINEER created.Return Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_INVALID_FILE - The input file could not be found, or contained unrecoverableerrors.PRO_TK_NO_LICENSE - There is no license for this import option.PRO_TK_CANT_OPEN - Failed to create drawing.*/
	{
		return Pro2dImportCreate(format,filename,name,mtype,import_2d_views,scale_to_fit,fit_left_corner,new_model) ;
	}

	ProError StringFree( char* string )
	{
		return ProStringFree( string );
	}

	ProError StringarrayFree( char** str_arr, int ct )
	{
		return ProStringarrayFree( str_arr, ct );
	}

	ProError StringproarrayFree( char** str_arr )
	{
		return ProStringproarrayFree( str_arr );
	}

	ProError WstringFree( wchar_t* wstring )
	{
		return ProWstringFree( wstring );
	}

	ProError WstringarrayFree( wchar_t** wstr_arr, int ct )
	{
		return ProWstringarrayFree( wstr_arr, ct );
	}

	ProError WstringproarrayFree( wchar_t** wstr_arr )
	{
		return ProWstringproarrayFree( wstr_arr );
	}

	ProError ProductviewExport( ProMdl mdl,ProPath export_dir,ProName filename )
	{
		return ProProductviewExport( mdl,export_dir,filename );
	}

	ProError EngineerDisplaydatecodeGet( char** display_datecode )
	{
		return ProEngineerDisplaydatecodeGet( display_datecode );
	}

	wchar_t* StringToWstring(wchar_t* wstr, char* str)
	{
		return ProStringToWstring(wstr,str);
	}

	ProError WstringArrayObjectAdd(ProWstring** p_array, int index, int n_objects, ProWstring* p_objects )
	{
		return ProWstringArrayObjectAdd(p_array,index,n_objects,p_objects);
	}

	ProError WstringArrayObjectRemove(ProWstring** p_array, int index, int n_objects )
	{
		return ProWstringArrayObjectRemove(p_array,index,n_objects);
	}

	ProError WstringArraySizeSet(ProWstring** p_array, int size)
	{
		return ProWstringArraySizeSet(p_array,  size);
	}
	ProError WstringCompare(wchar_t* wstr_1, wchar_t* wstr_2, int num_chars, int* result)
	{
		return ProWstringCompare(wstr_1, wstr_2, num_chars, result);
	}
	ProError WstringConcatenate(wchar_t* source, wchar_t* target, int num_chars)
	{
		return ProWstringConcatenate(source, target, num_chars);
	}
	ProError WstringCopy(wchar_t* source, wchar_t* target, int num_chars)
	{
		return ProWstringCopy(source, target, num_chars);
	}
	ProError WstringLengthGet(wchar_t* wstr, int* length)
	{
		return ProWstringLengthGet(wstr, length);
	}
	char* WstringToString(char* str, wchar_t* wstr )
	{
		return ProWstringToString(str, wstr);
	}
};