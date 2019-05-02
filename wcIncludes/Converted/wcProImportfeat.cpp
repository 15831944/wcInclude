#include "wcProImportfeat.h"

wcProImportfeat::wcProImportfeat(void)
{
}

wcProImportfeat::~wcProImportfeat(void)
{
}

ProError wcProImportfeat::ImportfeatCreate( ProSolid p_solid,ProIntfDataSource *data_source,ProCsys p_csys,ProImportfeatAttr *p_attributes,ProFeature *p_feat_handle )
{
	return ProImportfeatCreate( p_solid,data_source,p_csys,p_attributes,p_feat_handle );
}

ProError wcProImportfeat::ImportfeatDataGet( ProFeature *p_feat_handle,ProImportfeatData *p_import_feat_data )
{
	return ProImportfeatDataGet( p_feat_handle,p_import_feat_data );
}

ProError wcProImportfeat::ImportfeatRedefine( ProFeature *p_feat_handle,ProImportfeatRedefSource *p_source )
{
	return ProImportfeatRedefine( p_feat_handle,p_source );
}

ProError wcProImportfeat::ImportfeatRedefSourceInit( ProImportfeatRedefOper operation,void *p_source,ProImportfeatRedefSource *p_redef_data_source )
{
	return ProImportfeatRedefSourceInit( operation,p_source,p_redef_data_source );
}

ProError wcProImportfeat::ImportfeatIdArrayCreate ( ProFeature *p_feat_handle,ProImportfeatIdMap **pp_id_map_arr )
{
	return ProImportfeatIdArrayCreate ( p_feat_handle,pp_id_map_arr );
}

ProError wcProImportfeat::ImportfeatIdArrayMapCount ( ProImportfeatIdMap *p_id_map_arr,int *n_maps )
{
	return ProImportfeatIdArrayMapCount ( p_id_map_arr,n_maps );
}

ProError wcProImportfeat::ImportfeatIdArrayMapGet( ProImportfeatIdMap *p_id_map_arr,int index,ProImportfeatIdMap *p_id_map )
{
	return ProImportfeatIdArrayMapGet( p_id_map_arr,index,p_id_map );
}

ProError wcProImportfeat::ImportfeatIdArrayFree ( ProImportfeatIdMap *p_id_map_arr )
{
	return ProImportfeatIdArrayFree ( p_id_map_arr );
}

ProError wcProImportfeat::ImportfeatItemIdToUserId ( ProFeature *p_feat_handle,int item_id,ProType item_type,int **user_id_pro_array )
{
	return ProImportfeatItemIdToUserId ( p_feat_handle,item_id,item_type,user_id_pro_array );
}

ProError wcProImportfeat::ImportfeatUserIdToItemId ( ProFeature *p_feat_handle,int user_id,ProType item_type,int **item_id_pro_array )
{
	return ProImportfeatUserIdToItemId ( p_feat_handle,user_id,item_type,item_id_pro_array );
}

