/*--------------  C L A S S  wcProUtil  --------

   A Wrapper Class for ProE object: ProUtil
   Created By: Michael Lucatz
   Date:       31/03/2006 23:21:55
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProUtil.h>
#include <ProWstring.h>

class wcProUtil: public wcProObject
{
public:
	wcProUtil(void);
	~wcProUtil(void);
public:

//  Sets the value of the specified configuration file option.
ProError ConfigoptSet (ProName option,ProPath option_value );

//  Retrieves the current value for the specified configuration file option.
ProError ConfigoptGet (ProName option,ProLine option_value );

//   Creates a window and shows the text of the file specified by file_name.
ProError InfoWindowDisplay ( ProPath file_name,ProInfoWindowLocation* location,ProInfoWindowSize* size );

//   Opens an edit window for the specified file using the default text editor.
ProError FileEdit ( ProPath file_name );

//   Retrieves the exec_path information.
ProError ToolkitApplExecPathGet ( ProPath exec_path );

//   Retrieves the text path information.
ProError ToolkitApplTextPathGet ( ProPath text_path );

//   Changes Pro/ENGINEER to another working directory.
ProError DirectoryChange ( ProPath path );

//   Gets the absolute path name of the current working directory for Pro/ENGINEER.
ProError DirectoryCurrentGet ( ProPath path );

//   Determines whether the specified option is available, such asPro/MESH.
ProError OptionOrderedVerify ( ProCharName option,ProBoolean* p_option_exist );

//   Compares the size of wchar_t in the application withthe size of wchar_t in Pro/ENGINEER.
ProError WcharSizeVerify ( int application_size_of_wchar,int* proe_size_of_wchar );

//   Exports a file from Pro/ENGINEER onto the disk. The file formatis the same as the one created by an interactive
ProError OutputFileWrite ( ProMdl model,ProFileName name,ProImportExportFile file_type,ProAppData arg1,ProAppData arg2,ProAppData arg3,ProAppData arg4 );

//   Outputs a standard Pro/ENGINEER plot output file.
ProError PlotfileWrite ( ProMdl model,ProFileName filename,ProPlotOptions* plot_options );

//   Outputs a standard Pro/ENGINEER raster output file.
ProError RasterFileWrite ( int window_id,ProRasterDepth depth,double width,double height,ProDotsPerInch dots_per_inch,ProRasterType type,ProPath output_file );

//  Exports a solid from Pro/ENGINEER, or a Pro/ENGINEER solidfrom disk, into VRML format. This works in the same way as the
ProError ExportVRML ( ProBoolean direct,ProMdl model,ProPath input_file,ProPath output_path );

//   Reads a file into Pro/ENGINEER.  The format must be thesame as if these files were created by Pro/ENGINEER.
ProError InputFileRead ( ProMdl model,ProPath filename,ProImportExportFile file_type,ProAppData arg1,ProAppData arg2,ProAppData arg3,ProAppData arg4 );

//   Appends a comment to the specified trail file.
ProError TrailfileCommentWrite ( ProComment comment );

//   Prompts the standard file browser interface of Pro/ENGINEER.
ProError FileOpen (ProName dialog_label,ProLine filter_string,ProPath *shortcut_path_arr,ProName *shortcut_name_arr,ProPath default_path,ProFileName pre_sel_file_name,ProPath r_selected_file);

//   Prompts the standard file browser interface of Pro/ENGINEER, set up for the purpose of
ProError DirectoryChoose (ProName dialog_label,ProPath *shortcut_path_arr,ProName *shortcut_name_arr,ProPath default_path,ProPath r_selected_path);

//  Copies a file from a Pro/Intralink or Windchill workspace to a disk location.
ProError FileCopyFromWS (ProPath source_file,ProPath target_directory);

//   Exports 6 of the 7 "slice" formats (STL, Render,Inventor, CatiaFacets, Optegra Visualizer, RCS).
ProError IntfSliceFileExport (ProMdl model,ProFileName out_file_name,ProImportExportFile file_type,double quality[2],ProMatrix transf,ProAsmcomppath *comp_path);

//   Lists the files in the specified directory. You can pass specific filters to get files with those extensions only.
ProError FilesList (ProPath directory_path,ProLine filter,ProFileListOpt listing_option,ProPath **p_file_name_array,ProPath **p_subdir_name_array);

//   Parses the specified file name into its components.
ProError FilenameParse (ProPath file_name_w_path,ProPath r_path,ProName r_file_name,ProName r_extension,int *r_version);

//   Builds a path, given its components.
ProError _2dImportCreate(ProImportExportFile format,ProPath filename,ProName name,ProMdlType mtype,ProBoolean import_2d_views,ProBoolean scale_to_fit,ProBoolean fit_left_corner,ProMdl *new_model) ;
/*Purpose: Creates a new 2d Pro/ENGINEER model by importing a 2d geometry file.Input Arguments:format - The type of file to be imported. The followingvalues are supported:<p> PRO_STEP_FILE </br>PRO_IGES_FILE</br>PRO_DXF_FILE</br>PRO_DWG_FILE</br>PRO_MEDUSA_FILE </p>Note: To import the 2d MEDUSA file set the configoption "allow_medusa_draw_import" to yes.filename - The name (absolute path) of the file to be imported.The name of the MEDUSA files must have the formats.objectname.name - The name of the model to be created.mtype - The type of model to create.Must be PRO_MDL_DRAWING,PRO_MDL_LAYOUT,PRO_MDL_DIAGRAM orPRO_MDL_DWGFORM.import_2d_views - Whether to import 2d drawing views.scale_to_fit - If the current model has a different sheet size fromthat specified by the imported file, scale_to_fitshould be TRUE to retain the current sheet size, orFALSE to adopt the new one.fit_left_corner - If the imported file retain its original sheet size,the bottom left corner of the file will be adjustedto the bottom left corner of the current modelfor PRO_B_TRUE,and imported "as is" for PRO_B_FALSE.Output Arguments:new_model - The new model that Pro/ENGINEER created.Return Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_INVALID_FILE - The input file could not be found, or contained unrecoverableerrors.PRO_TK_NO_LICENSE - There is no license for this import option.PRO_TK_CANT_OPEN - Failed to create drawing.*/
ProError _2dImportAppend(ProImportExportFile format,ProPath filename,ProMdl model,ProBoolean scale_to_fit,ProBoolean fit_left_corner) ;
/*Purpose: Imports a 2d geometry file into an existing 2d Pro/ENGINEER model.Input Arguments:format - The type of file to be imported.These values are supported:<p> PRO_STEP_FILE <br>PRO_IGES_FILE<br>PRO_DXF_FILE<br>PRO_DWG_FILE<br>PRO_SET_FILE</p>filename - The name (absolute path) of the file to be imported.model - The model into which to append the data.scale_to_fit - If the current model has a different sheet size fromthat specified by the imported file, scale_to_fitshould be TRUE to retain the current sheet size, orFALSE to adopt the new one .fit_left_corner - If the imported file retain his original sheet size,the bottom left corner of the file will be adjusted tobottom left corner of the current model for PRO_B_TRUE,and imported "as is" for PRO_B_FALSE.Output Arguments:NoneReturn Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_INVALID_FILE - The input file could not be found, or contained unrecoverableerrors.PRO_TK_NO_LICENSE - There is no license for this import option.*/
ProError _2dCadamImportCreate(ProImportCadam format,ProPath filename,ProName name,ProMdlType mtype,ProBoolean scale_to_fit,ProBoolean fit_left_corner,ProMdl *new_model) ;
/*Purpose: Creates a new 2d Pro/ENGINEER model by importing a Cadam geometry file.Input Arguments:format - The type of Cadam file to be imported.These values are supported:<p> PRO_CADAM_FILE <br>PRO_CADAM_DIRECT_FILE<br>PRO_CADAM_CPTR_FILE<br></p>filename - The name (absolute path) of the file to be imported.name - The name of the model to be created.mtype - The type of model to create.Must be of type</p> PRO_MDL_DRAWING<br>PRO_MDL_LAYOUTG<br>PRO_MDL_DIAGRAMG<br>PRO_MDL_DWGFORMG<br></P>scale_to_fit - If the current model has a different sheet size fromthat specified by the imported file, scale_to_fitshould be TRUE to retain the current sheet size, orFALSE to adopt the new one .fit_left_corner - If the imported file retain his original sheet size,the bottom left corner of the file will be adjusted tobottom left corner of the current model for PRO_B_TRUE,and imported "as is" for PRO_B_FALSE.Output Arguments:new_model - The new model that Pro/ENGINEER created.Return Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_INVALID_FILE - The input file could not be found, or contained unrecoverableerrors.PRO_TK_NO_LICENSE - There is no license for this import option.*/
ProError _2dExport(ProImportExportFile format,ProPath filename,ProMdl model) ;
/*Purpose: Exports 2d information to a file.Input Arguments:format - The type of file to be exported.The only value supported is PRO_STEP_FILE.filename - The name and absolute path of the export file to be created.m_type - The 2d model from which the information is to be exported.Output Arguments:NoneReturn Value:PRO_TK_NO_ERROR - Imported file appended successfuly to the current model.PRO_TK_BAD_INPUTS - Illegal model type or import file type.PRO_TK_BAD_CONTEXT - The model was not 2d.PRO_TK_NO_LICENSE - There is no license for this import option.*/
ProError PathCreate(ProPath path,ProName file_name,ProName extension,int version,ProPath r_file_name_w_path);

//  free a string returned by a Pro/TOOLKIT function
ProError StringFree( char* string );

//  free an array of strings returned by a Pro/TOOLKIT function
ProError StringarrayFree( char** str_arr, int ct );

//  free a ProArray of strings returned by a Pro/TOOLKIT function
ProError StringproarrayFree( char** str_arr );

//  free a wide-string returned by a Pro/TOOLKIT function
ProError WstringFree( wchar_t* wstring );

//  free an array of wide-strings returned by a Pro/TOOLKIT function
ProError WstringarrayFree( wchar_t** wstr_arr, int ct );

//  free a ProArray of wide-strings returned by a Pro/TOOLKIT function
ProError WstringproarrayFree( wchar_t** wstr_arr );

//  Exports a part, assembly or drawing to a ProductView format.
ProError ProductviewExport( ProMdl mdl,ProPath export_dir,ProName filename );

//   Returns the Pro/ENGINEER session's customer visible date code, as shown in Pro/ENGINEER Help information.  If it is necessary to
ProError EngineerDisplaydatecodeGet( char** display_datecode );

//===============================================================================
wchar_t* StringToWstring(wchar_t* wstr, char* str);
ProError WstringArrayObjectAdd(ProWstring** p_array, int index, int n_objects, ProWstring* p_objects );
ProError WstringArrayObjectRemove(ProWstring** p_array, int index, int n_objects );
ProError WstringArraySizeSet(ProWstring** p_array, int size);
//ProError WstringArrayToValueArray(ProLine *wstring_array, int n_lines, ProValue **p_value_array);
ProError WstringCompare(wchar_t* wstr_1, wchar_t* wstr_2, int num_chars, int* result);
ProError WstringConcatenate(wchar_t* source, wchar_t* target, int num_chars);
ProError WstringCopy(wchar_t* source, wchar_t* target, int num_chars);
ProError WstringLengthGet(wchar_t* wstr, int* length);
char* WstringToString(char* str, /* (Out) 	The EUC string, terminated by NULL character*/ wchar_t* wstr );
};
