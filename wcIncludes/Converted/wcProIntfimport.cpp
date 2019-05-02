#include "wcProIntfimport.h"

wcProIntfimport::wcProIntfimport(void)
{
}

wcProIntfimport::~wcProIntfimport(void)
{
}

ProError wcProIntfimport::IntfimportSourceTypeGet ( ProPath import_file,ProIntfImportType type,ProMdlType *mdl_type )
{
	return ProIntfimportSourceTypeGet ( import_file,type,mdl_type );
}

ProError wcProIntfimport::LayerfilterdataNameSet ( ProLayerfilterdata data,ProName new_layer_name )
{
	return ProLayerfilterdataNameSet ( data,new_layer_name );
}

ProError wcProIntfimport::IntfimportModelCreate(ProPath import_file, ProIntfImportType type, ProMdlType create_type, ProName new_model_name, ProIntfimportLayerFilter filter_func, ProAppData application_data, ProMdl* created_model)
{
	return  ProIntfimportModelCreate(import_file,type, create_type, new_model_name, filter_func, application_data, created_model);
}

ProError wcProIntfimport::IntfimportModelCreate(ProPath import_file, ProIntfImportType type, ProMdlType create_type, ProName new_model_name,  ProMdl* created_model)
{
	return  ProIntfimportModelCreate(import_file,type, create_type, new_model_name, NULL, NULL, created_model);
}