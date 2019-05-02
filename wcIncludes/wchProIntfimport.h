
/*--------------  C L A S S  wcProIntfimport  --------

   A Wrapper Class for ProE object: ProIntfimport
   Created By: Michael Lucatz
   Date:       09/04/2006 16:31:33
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProIntfimport.h>

class wcProIntfimport: public wcProObject
{
public:
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
};