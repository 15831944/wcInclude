/*--------------  C L A S S  wcProIntfimport  --------

   A Wrapper Class for ProE object: ProIntfimport
   Created By: Michael Lucatz
   Date:       09/04/2006 16:31:33
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProIntfimport.h>

class wcProIntfimport: public wcProObject
{
public:
	wcProIntfimport(void);
	~wcProIntfimport(void);
public:

//   Determines the type of model expected to be created by the import operation.
ProError IntfimportSourceTypeGet ( ProPath import_file,ProIntfImportType type,ProMdlType *mdl_type );

//  Set the layer name for the newly imported layer.
ProError LayerfilterdataNameSet ( ProLayerfilterdata data,ProName new_layer_name );

/*
Purpose:  Imports an external file, creating new models or a set of new
models as required.

Input Arguments:
import_file	- Full path to the file to be imported.
<b>Note</b>: When importing CADDS models, ensure that
the path is specified in lower case.
type		- The type of file to be imported. 
create_type	- The type of model to create.  This could be part,
assembly, or drawing (for STEP associative drawings).
new_model_name	- The name of the new top level import model.
filter_func	- Callback to a function that determines how to display
and map layers from the imported model. If this is
NULL, the default layer handling will take place.
application_data - The application data to be passed to the
filter function. Can be NULL.

Output Arguments:
created_model	- Handle to the top level created model. This could be
a part, assembly, or drawing.
Return Values:
PRO_TK_NO_ERROR   - The import was successful.
PRO_TK_BAD_INPUTS - One or more arguments was invalid.
PRO_TK_NO_LICENSE - Missing the required license to perform this import
operation.
PRO_TK_UNSUPPORTED- Pro/ENGINEER does not support import of the indicated file.
*/
ProError IntfimportModelCreate( ProPath  import_file, 
								   ProIntfImportType type, 
								   ProMdlType create_type,
								   ProName  new_model_name, 
								   ProIntfimportLayerFilter filter_func,
								   ProAppData application_data,
								   ProMdl* created_model);
ProError IntfimportModelCreate(ProPath import_file, ProIntfImportType type, ProMdlType create_type, ProName new_model_name,  ProMdl* created_model);
};
