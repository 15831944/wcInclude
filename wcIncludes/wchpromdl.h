/*--------------  C L A S S  wcProMdl  --------

A Wrapper Class for ProE object: ProMdl
Created By: Michael Lucatz
Date:       31/03/2006 23:25:25
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include "ProMdl.h"

class wcProMdl: public wcProObject
{
	public:
	wcProMdl(void)
	{
	}

	~wcProMdl(void)
	{
	}

	ProError MdlInit (ProName name,ProMdlType type,ProMdl *p_mdl_handle)
	{
		return ProMdlInit (name,type,p_mdl_handle);
	}

	ProError MdlRename (ProMdl handle,ProName new_name)
	{
		return ProMdlRename (handle,new_name);
	}

	ProError MdlCopy (ProMdl handle,ProName new_name,ProMdl *p_new_handle)
	{
		return ProMdlCopy (handle,new_name,p_new_handle);
	}

	ProError MdlSave (ProMdl handle)
	{
		return ProMdlSave (handle);
	}

	ProError MdlBackup (ProMdl handle,ProMdldata* model_info)
	{
		return ProMdlBackup (handle,model_info);
	}

	ProError MdlRetrieve (ProFamilyName name,ProMdlType type,ProMdl *p_handle)
	{
		return ProMdlRetrieve (name,type,p_handle);
	}

	ProError MdlLoad (ProPath full_path,ProMdlType type,ProBoolean ask_user_about_reps,ProMdl *p_handle)
	{
		return ProMdlLoad (full_path,type,ask_user_about_reps,p_handle);
	}

	ProError MdlMultipleRetrieve ( ProName* names, ProBoolean ui_flag)
	{
		return ProMdlMultipleRetrieve ( names, ui_flag);
	}

	ProError MdlErase (ProMdl handle)
	{
		return ProMdlErase (handle);
	}

	ProError MdlEraseAll(ProMdl model)
	{
		return ProMdlEraseAll(model);
	}

	ProError MdlDelete (ProMdl handle)
	{
		return ProMdlDelete (handle);
	}

	ProError MdlfileCopy ( ProMdlType mdl_type,ProName from_name,ProName to_name )
	{
		return ProMdlfileCopy ( mdl_type,from_name,to_name );
	}

	ProError MdlDisplay ( ProMdl model )
	{
		return ProMdlDisplay ( model );
	}

	ProError MdlNameGet (ProMdl handle,ProName name)
	{
		return ProMdlNameGet (handle,name);
	}

	ProError MdlDataGet (ProMdl handle,ProMdldata *p_data)
	{
		return ProMdlDataGet (handle,p_data);
	}

	ProError MdlCurrentGet (ProMdl *p_handle)
	{
		return ProMdlCurrentGet (p_handle);
	}

	ProError MdlModificationVerify (ProMdl handle,ProBoolean *p_modified)
	{
		return ProMdlModificationVerify (handle,p_modified);
	}

	ProError MdlVerstampGet (ProMdl model,ProWVerstamp *p_stamp)
	{
		return ProMdlVerstampGet (model,p_stamp);
	}

	ProError MdlTypeGet ( ProMdl model,ProMdlType* p_type )
	{
		return ProMdlTypeGet ( model,p_type );
	}

	ProError MdlSubtypeGet( ProMdl model,ProMdlsubtype *subtype)
	{
		return ProMdlSubtypeGet( model,subtype);
	}

	ProError MdlIdGet ( ProMdl model,int* p_id )
	{
		return ProMdlIdGet ( model,p_id );
	}

	ProError MdlDeclaredList (ProMdl model,ProModel **p_declared_list,int* p_count)
	{
		return ProMdlDeclaredList (model,p_declared_list,p_count);
	}

	ProError MdlDependenciesList (ProMdl model,ProModel **p_dependencies_list,int* p_count )
	{
		return ProMdlDependenciesList (model,p_dependencies_list,p_count );
	}

	ProError MdlWindowGet ( ProMdl mdl,int* window_id )
	{
		return ProMdlWindowGet ( mdl,window_id );
	}

	ProError SessionMdlList (ProMdlType model_type,ProMdl **p_model_array,int *p_count)
	{
		return ProSessionMdlList (model_type,p_model_array,p_count);
	}

	ProError MdlToModelitem ( ProMdl mdl,ProModelitem* p_model_item )
	{
		return ProMdlToModelitem ( mdl,p_model_item );
	}

	ProError TreetoolRefresh (ProMdl model)
	{
		return ProTreetoolRefresh (model);
	}

	ProError MdlGtolVisit( ProMdl model,ProGtolVisitAction visit_action,ProGtolFilterAction filter_action,ProAppData data )
	{
		return ProMdlGtolVisit( model,visit_action,filter_action,data );
	}

};