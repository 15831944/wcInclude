#include "wcProLayer.h"

wcProLayer::wcProLayer(void)
{
}

wcProLayer::~wcProLayer(void)
{
}

ProError wcProLayer::LayerCreate (ProMdl owner,ProName layer_name,ProLayer* layer )
{
	return ProLayerCreate (owner,layer_name,layer );
}

ProError wcProLayer::LayerDelete ( ProLayer* layer )
{
	return ProLayerDelete ( layer );
}

ProError wcProLayer::LayerItemsGet ( ProLayer* layer,ProLayerItem** p_layeritem,int* p_count)
{
	return ProLayerItemsGet ( layer,p_layeritem,p_count);
}

ProError wcProLayer::LayerDisplaystatusGet ( ProLayer* layer,ProLayerDisplay* display_status)
{
	return ProLayerDisplaystatusGet ( layer,display_status);
}

ProError wcProLayer::LayerItemAdd ( ProLayer* layer,ProLayerItem* layer_item )
{
	return ProLayerItemAdd ( layer,layer_item );
}

ProError wcProLayer::LayerItemAddNoUpdate ( ProLayer* layer,ProLayerItem* layer_item )
{
	return ProLayerItemAddNoUpdate ( layer,layer_item );
}

ProError wcProLayer::LayerItemRemove ( ProLayer* layer,ProLayerItem* layer_item )
{
	return ProLayerItemRemove ( layer,layer_item );
}

ProError wcProLayer::LayerItemRemoveNoUpdate ( ProLayer* layer,ProLayerItem* layer_item )
{
	return ProLayerItemRemoveNoUpdate ( layer,layer_item );
}

ProError wcProLayer::LayerDisplaystatusSet (ProLayer* layer,ProLayerDisplay display_status)
{
	return ProLayerDisplaystatusSet (layer,display_status);
}

ProError wcProLayer::MdlLayerVisit ( ProMdl model,ProLayerAction visit_action,ProLayerAction filter_action,ProAppData app_data )
{
	return ProMdlLayerVisit ( model,visit_action,filter_action,app_data );
}

ProError wcProLayer::MdlLayerGet( ProMdl owner,ProName layer_name,ProLayer* layer )
{
	return ProMdlLayerGet( owner,layer_name,layer );
}

ProError wcProLayer::LayerItemInit( ProLayerType type,int id,ProMdl owner,ProLayerItem *item )
{
	return ProLayerItemInit( type,id,owner,item );
}

ProError wcProLayer::DwgLayerItemInit( ProLayerType type,int id,ProAsmcomppath *owner,ProLayerItem *item )
{
	return ProDwgLayerItemInit( type,id,owner,item );
}

ProError wcProLayer::LayerDisplaystatusSave( ProMdl owner )
{
	return ProLayerDisplaystatusSave( owner );
}

ProError wcProLayer::DwgLayerDisplaystatusGet( ProLayer *layer,ProView view,ProLayerDisplay *display_status )
{
	return ProDwgLayerDisplaystatusGet( layer,view,display_status );
}

ProError wcProLayer::DwgLayerDisplaystatusSet( ProLayer *layer,ProView view,ProLayerDisplay display_status )
{
	return ProDwgLayerDisplaystatusSet( layer,view,display_status );
}

ProError wcProLayer::LayerViewDependencySet( ProView view,ProBoolean depend )
{
	return ProLayerViewDependencySet( view,depend );
}

ProError wcProLayer::LayerViewDependencyGet( ProView view,ProBoolean *depend )
{
	return ProLayerViewDependencyGet( view,depend );
}

ProError wcProLayer::LayerDefLayerSet( ProDefLayerType def_layer_type,ProName def_layer_name )
{
	return ProLayerDefLayerSet( def_layer_type,def_layer_name );
}

ProError wcProLayer::LayerDefLayerGet( ProDefLayerType def_layer_type,ProName def_layer_name )
{
	return ProLayerDefLayerGet( def_layer_type,def_layer_name );
}

ProError wcProLayer::LayeritemStatusGet( ProLayerItem *pro_layer_item,ProView pro_view,ProBoolean *p_item_visible )
{
	return ProLayeritemStatusGet( pro_layer_item,pro_view,p_item_visible );
}

ProError wcProLayer::LayeritemLayersGet( ProDrawing pro_drawing,ProLayerItem *pro_layer_item,ProLayer **pro_layers )
{
	return ProLayeritemLayersGet( pro_drawing,pro_layer_item,pro_layers );
}

