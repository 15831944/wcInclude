/*--------------  C L A S S  wcProImportfeat  --------

   A Wrapper Class for ProE object: ProImportfeat
   Created By: Michael Lucatz
   Date:       09/04/2006 12:41:37
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProImportfeat.h>

class wcProImportfeat: public wcProObject
{
public:
	wcProImportfeat(void);
	~wcProImportfeat(void);
public:

//   Creates a new import feature in the solid.
ProError ImportfeatCreate( ProSolid p_solid,ProIntfDataSource *data_source,ProCsys p_csys,ProImportfeatAttr *p_attributes,ProFeature *p_feat_handle );

//   Retrieves the current parameters of the specified import feature.
ProError ImportfeatDataGet( ProFeature *p_feat_handle,ProImportfeatData *p_import_feat_data );

// 	Redefines an existing import feature from the data source.
ProError ImportfeatRedefine( ProFeature *p_feat_handle,ProImportfeatRedefSource *p_source );

// 	Initializes the ProImportfeatRedefSource.
ProError ImportfeatRedefSourceInit( ProImportfeatRedefOper operation,void *p_source,ProImportfeatRedefSource *p_redef_data_source );

// 	Gets an array of maps between the item_id and user_id.
ProError ImportfeatIdArrayCreate ( ProFeature *p_feat_handle,ProImportfeatIdMap **pp_id_map_arr );

//   Determines the number of maps between the item_id and user_id.
ProError ImportfeatIdArrayMapCount ( ProImportfeatIdMap *p_id_map_arr,int *n_maps );

//  Gets the map with the specified index from the array of mapsbetween the item_id and user_id.
ProError ImportfeatIdArrayMapGet( ProImportfeatIdMap *p_id_map_arr,int index,ProImportfeatIdMap *p_id_map );

//      Frees the array of maps between the item_id and user_id.
ProError ImportfeatIdArrayFree ( ProImportfeatIdMap *p_id_map_arr );

//      Converts an item_id to a user_id.
ProError ImportfeatItemIdToUserId ( ProFeature *p_feat_handle,int item_id,ProType item_type,int **user_id_pro_array );

//   Converts a user_id to an item_id.
ProError ImportfeatUserIdToItemId ( ProFeature *p_feat_handle,int user_id,ProType item_type,int **item_id_pro_array );

};
