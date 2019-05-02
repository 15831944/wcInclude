#include "wcProMdl.h"

wcProMdl::wcProMdl(void)
{
}

wcProMdl::~wcProMdl(void)
{
}

ProError wcProMdl::MdlInit (ProName name,ProMdlType type,ProMdl *p_mdl_handle)
{
	return ProMdlInit (name,type,p_mdl_handle);
}

ProError wcProMdl::MdlRename (ProMdl handle,ProName new_name)
{
	return ProMdlRename (handle,new_name);
}

ProError wcProMdl::MdlCopy (ProMdl handle,ProName new_name,ProMdl *p_new_handle)
{
	return ProMdlCopy (handle,new_name,p_new_handle);
}

ProError wcProMdl::MdlSave (ProMdl handle)
{
	return ProMdlSave (handle);
}

ProError wcProMdl::MdlBackup (ProMdl handle,ProMdldata* model_info)
{
	return ProMdlBackup (handle,model_info);
}

ProError wcProMdl::MdlRetrieve (ProFamilyName name,ProMdlType type,ProMdl *p_handle)
{
	return ProMdlRetrieve (name,type,p_handle);
}

ProError wcProMdl::MdlLoad (ProPath full_path,ProMdlType type,ProBoolean ask_user_about_reps,ProMdl *p_handle)
{
	return ProMdlLoad (full_path,type,ask_user_about_reps,p_handle);
}

ProError wcProMdl::MdlMultipleRetrieve ( ProName* names, ProBoolean ui_flag)
{
	return ProMdlMultipleRetrieve ( names, ui_flag);
}

ProError wcProMdl::MdlErase (ProMdl handle)
{
	return ProMdlErase (handle);
}

ProError wcProMdl::MdlEraseAll(ProMdl model)
{
	return ProMdlEraseAll(model);
}

ProError wcProMdl::MdlDelete (ProMdl handle)
{
	return ProMdlDelete (handle);
}

ProError wcProMdl::MdlfileCopy ( ProMdlType mdl_type,ProName from_name,ProName to_name )
{
	return ProMdlfileCopy ( mdl_type,from_name,to_name );
}

ProError wcProMdl::MdlDisplay ( ProMdl model )
{
	return ProMdlDisplay ( model );
}

ProError wcProMdl::MdlNameGet (ProMdl handle,ProName name)
{
	return ProMdlNameGet (handle,name);
}

ProError wcProMdl::MdlDataGet (ProMdl handle,ProMdldata *p_data)
{
	return ProMdlDataGet (handle,p_data);
}

ProError wcProMdl::MdlCurrentGet (ProMdl *p_handle)
{
	return ProMdlCurrentGet (p_handle);
}

ProError wcProMdl::MdlModificationVerify (ProMdl handle,ProBoolean *p_modified)
{
	return ProMdlModificationVerify (handle,p_modified);
}

ProError wcProMdl::MdlVerstampGet (ProMdl model,ProWVerstamp *p_stamp)
{
	return ProMdlVerstampGet (model,p_stamp);
}

ProError wcProMdl::MdlTypeGet ( ProMdl model,ProMdlType* p_type )
{
	return ProMdlTypeGet ( model,p_type );
}

ProError wcProMdl::MdlSubtypeGet( ProMdl model,ProMdlsubtype *subtype)
{
	return ProMdlSubtypeGet( model,subtype);
}

ProError wcProMdl::MdlIdGet ( ProMdl model,int* p_id )
{
	return ProMdlIdGet ( model,p_id );
}

ProError wcProMdl::MdlDeclaredList (ProMdl model,ProModel **p_declared_list,int* p_count)
{
	return ProMdlDeclaredList (model,p_declared_list,p_count);
}

ProError wcProMdl::MdlDependenciesList (ProMdl model,ProModel **p_dependencies_list,int* p_count )
{
	return ProMdlDependenciesList (model,p_dependencies_list,p_count );
}

ProError wcProMdl::MdlWindowGet ( ProMdl mdl,int* window_id )
{
	return ProMdlWindowGet ( mdl,window_id );
}

ProError wcProMdl::SessionMdlList (ProMdlType model_type,ProMdl **p_model_array,int *p_count)
{
	return ProSessionMdlList (model_type,p_model_array,p_count);
}

ProError wcProMdl::MdlToModelitem ( ProMdl mdl,ProModelitem* p_model_item )
{
	return ProMdlToModelitem ( mdl,p_model_item );
}

ProError wcProMdl::TreetoolRefresh (ProMdl model)
{
	return ProTreetoolRefresh (model);
}

ProError wcProMdl::MdlGtolVisit( ProMdl model,ProGtolVisitAction visit_action,ProGtolFilterAction filter_action,ProAppData data )
{
	return ProMdlGtolVisit( model,visit_action,filter_action,data );
}

