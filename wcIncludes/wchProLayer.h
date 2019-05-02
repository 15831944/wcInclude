
/*--------------  C L A S S  wcProLayer  --------

   A Wrapper Class for ProE object: ProLayer
   Created By: Michael Lucatz
   Date:       09/04/2006 12:41:05
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProLayer.h>

class wcProLayer: public wcProObject
{
public:
	wcProLayer(void)
	{
	}

	~wcProLayer(void)
	{
	}

	ProError LayerCreate (ProMdl owner,ProName layer_name,ProLayer* layer )
	{
		return ProLayerCreate (owner,layer_name,layer );
	}

	ProError LayerDelete ( ProLayer* layer )
	{
		return ProLayerDelete ( layer );
	}

	ProError LayerItemsGet ( ProLayer* layer,ProLayerItem** p_layeritem,int* p_count)
	{
		return ProLayerItemsGet ( layer,p_layeritem,p_count);
	}

	ProError LayerDisplaystatusGet ( ProLayer* layer,ProLayerDisplay* display_status)
	{
		return ProLayerDisplaystatusGet ( layer,display_status);
	}

	ProError LayerItemAdd ( ProLayer* layer,ProLayerItem* layer_item )
	{
		return ProLayerItemAdd ( layer,layer_item );
	}

	ProError LayerItemAddNoUpdate ( ProLayer* layer,ProLayerItem* layer_item )
	{
		return ProLayerItemAddNoUpdate ( layer,layer_item );
	}

	ProError LayerItemRemove ( ProLayer* layer,ProLayerItem* layer_item )
	{
		return ProLayerItemRemove ( layer,layer_item );
	}

	ProError LayerItemRemoveNoUpdate ( ProLayer* layer,ProLayerItem* layer_item )
	{
		return ProLayerItemRemoveNoUpdate ( layer,layer_item );
	}

	ProError LayerDisplaystatusSet (ProLayer* layer,ProLayerDisplay display_status)
	{
		return ProLayerDisplaystatusSet (layer,display_status);
	}

	ProError MdlLayerVisit ( ProMdl model,ProLayerAction visit_action,ProLayerAction filter_action,ProAppData app_data )
	{
		return ProMdlLayerVisit ( model,visit_action,filter_action,app_data );
	}

	ProError MdlLayerGet( ProMdl owner,ProName layer_name,ProLayer* layer )
	{
		return ProMdlLayerGet( owner,layer_name,layer );
	}

	ProError LayerItemInit( ProLayerType type,int id,ProMdl owner,ProLayerItem *item )
	{
		return ProLayerItemInit( type,id,owner,item );
	}

	ProError DwgLayerItemInit( ProLayerType type,int id,ProAsmcomppath *owner,ProLayerItem *item )
	{
		return ProDwgLayerItemInit( type,id,owner,item );
	}

	ProError LayerDisplaystatusSave( ProMdl owner )
	{
		return ProLayerDisplaystatusSave( owner );
	}

	ProError DwgLayerDisplaystatusGet( ProLayer *layer,ProView view,ProLayerDisplay *display_status )
	{
		return ProDwgLayerDisplaystatusGet( layer,view,display_status );
	}

	ProError DwgLayerDisplaystatusSet( ProLayer *layer,ProView view,ProLayerDisplay display_status )
	{
		return ProDwgLayerDisplaystatusSet( layer,view,display_status );
	}

	ProError LayerViewDependencySet( ProView view,ProBoolean depend )
	{
		return ProLayerViewDependencySet( view,depend );
	}

	ProError LayerViewDependencyGet( ProView view,ProBoolean *depend )
	{
		return ProLayerViewDependencyGet( view,depend );
	}

	ProError LayerDefLayerSet( ProDefLayerType def_layer_type,ProName def_layer_name )
	{
		return ProLayerDefLayerSet( def_layer_type,def_layer_name );
	}

	ProError LayerDefLayerGet( ProDefLayerType def_layer_type,ProName def_layer_name )
	{
		return ProLayerDefLayerGet( def_layer_type,def_layer_name );
	}

	ProError LayeritemStatusGet( ProLayerItem *pro_layer_item,ProView pro_view,ProBoolean *p_item_visible )
	{
		return ProLayeritemStatusGet( pro_layer_item,pro_view,p_item_visible );
	}

	ProError LayeritemLayersGet( ProDrawing pro_drawing,ProLayerItem *pro_layer_item,ProLayer **pro_layers )
	{
		return ProLayeritemLayersGet( pro_drawing,pro_layer_item,pro_layers );
	}

};