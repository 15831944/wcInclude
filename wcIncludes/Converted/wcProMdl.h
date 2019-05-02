/*--------------  C L A S S  wcProMdl  --------

   A Wrapper Class for ProE object: ProMdl
   Created By: Michael Lucatz
   Date:       31/03/2006 23:25:25
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProMdl.h>

class wcProMdl: public wcProObject
{
public:
	wcProMdl(void);
	~wcProMdl(void);
public:

//      Initializes the ProMdl handle.
ProError MdlInit (ProName name,ProMdlType type,ProMdl *p_mdl_handle);

//     Renames the specified model.
ProError MdlRename (ProMdl handle,ProName new_name);

//    Copies the specified model to the new one.
ProError MdlCopy (ProMdl handle,ProName new_name,ProMdl *p_new_handle);

//     Stores the specified model to disk.
ProError MdlSave (ProMdl handle);

//    Makes a backup of an object in memory to a disk in aspecified directory.  This function is equivalent to the
ProError MdlBackup (ProMdl handle,ProMdldata* model_info);

//    Retrieves the specified model and initializes the handle.
ProError MdlRetrieve (ProFamilyName name,ProMdlType type,ProMdl *p_handle);

//    Retrieves the specified model and initializes the handle.
ProError MdlLoad (ProPath full_path,ProMdlType type,ProBoolean ask_user_about_reps,ProMdl *p_handle);

//  Retrieves the models specified in the names list andinitializes their handles.
ProError MdlMultipleRetrieve ( ProName* names, ProBoolean ui_flag);

//   Erases the specified model from memory.
ProError MdlErase (ProMdl handle);

//  Erases a model and all the models that it uses, exceptthose also used by other models in session. For example, it
ProError MdlEraseAll(ProMdl model);

//   Deletes the specified model from memory and disk.
ProError MdlDelete (ProMdl handle);

//   Copies the disk file for a specified object to another named file.
ProError MdlfileCopy ( ProMdlType mdl_type,ProName from_name,ProName to_name );

//   Displays the specified model in the current view.
ProError MdlDisplay ( ProMdl model );

//     Retrieves the name of the specified model.
ProError MdlNameGet (ProMdl handle,ProName name);

//   Retrieves information about the file from which the specified model was retrieved.
ProError MdlDataGet (ProMdl handle,ProMdldata *p_data);

//   Initializes the p_handle with the current Pro/ENGINEERobject.
ProError MdlCurrentGet (ProMdl *p_handle);

//   Verifies whether the specified model has been modified since thelast save.
ProError MdlModificationVerify (ProMdl handle,ProBoolean *p_modified);

//   Retrieves the version stamp of the specified model.
ProError MdlVerstampGet (ProMdl model,ProWVerstamp *p_stamp);

//  Returns the type of model (such asPRO_PART or PRO_ASSEMBLY).
ProError MdlTypeGet ( ProMdl model,ProMdlType* p_type );

//  Returns the subtype of a model
ProError MdlSubtypeGet( ProMdl model,ProMdlsubtype *subtype);

//  Returns the identifier of the model.
ProError MdlIdGet ( ProMdl model,int* p_id );

//  Finds all the first-level objects declared for thespecified object.  For example, if layout A is declared
ProError MdlDeclaredList (ProMdl model,ProModel **p_declared_list,int* p_count);

//  Finds the first-level dependencies for an object inthe Pro/ENGINEER workspace.
ProError MdlDependenciesList (ProMdl model,ProModel **p_dependencies_list,int* p_count );

//      Finds the window with the specified model as thetop-level object.
ProError MdlWindowGet ( ProMdl mdl,int* window_id );

//  Retrieves the list of objects of the specified type inthe Pro/ENGINEER workspace.
ProError SessionMdlList (ProMdlType model_type,ProMdl **p_model_array,int *p_count);

//  Converts a ProMdl to a ProModelitem.
ProError MdlToModelitem ( ProMdl mdl,ProModelitem* p_model_item );

//      Refreshes the display of the model tree.
ProError TreetoolRefresh (ProMdl model);

//     Visits all gtols stored in the specified model.
ProError MdlGtolVisit( ProMdl model,ProGtolVisitAction visit_action,ProGtolFilterAction filter_action,ProAppData data );

};
