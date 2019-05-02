/*--------------  C L A S S  wcProLayer  --------

   A Wrapper Class for ProE object: ProLayer
   Created By: Michael Lucatz
   Date:       09/04/2006 12:41:05
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProLayer.h>

class wcProLayer: public wcProObject
{
public:
	wcProLayer(void);
	~wcProLayer(void);
public:

//  Creates a new layer in the specified object.
ProError LayerCreate (ProMdl owner,ProName layer_name,ProLayer* layer );

//  Deletes the specified layer from the object.
ProError LayerDelete ( ProLayer* layer );

//  Retrieves the items on the specified layer.
ProError LayerItemsGet ( ProLayer* layer,ProLayerItem** p_layeritem,int* p_count);

//  Retrieves the visibility status for the specified layer.
ProError LayerDisplaystatusGet ( ProLayer* layer,ProLayerDisplay* display_status);

// Adds the specified item to a layer.
ProError LayerItemAdd ( ProLayer* layer,ProLayerItem* layer_item );

// Adds the specified item to a layer and does not do model tree update.
ProError LayerItemAddNoUpdate ( ProLayer* layer,ProLayerItem* layer_item );

// Removes the specified item from the layer.
ProError LayerItemRemove ( ProLayer* layer,ProLayerItem* layer_item );

// Removes the specified item from the layer and does not do model tree
ProError LayerItemRemoveNoUpdate ( ProLayer* layer,ProLayerItem* layer_item );

//  Sets the display status of the specified layer.
ProError LayerDisplaystatusSet (ProLayer* layer,ProLayerDisplay display_status);

// Calls the specified filter and action functions for each layer in the
ProError MdlLayerVisit ( ProMdl model,ProLayerAction visit_action,ProLayerAction filter_action,ProAppData app_data );

// Returns the handle of a layer, given its name and owner.
ProError MdlLayerGet( ProMdl owner,ProName layer_name,ProLayer* layer );

// Initializes the layer item structure. You should
ProError LayerItemInit( ProLayerType type,int id,ProMdl owner,ProLayerItem *item );

// Initializes a layer item structure for the singular case when
ProError DwgLayerItemInit( ProLayerType type,int id,ProAsmcomppath *owner,ProLayerItem *item );

// Permanently saves all the changes to the display status of all layers
ProError LayerDisplaystatusSave( ProMdl owner );

//  Retrieves the visibility status for the specified layer and view.
ProError DwgLayerDisplaystatusGet( ProLayer *layer,ProView view,ProLayerDisplay *display_status );

//  Sets the display status of the specified layer and view.
ProError DwgLayerDisplaystatusSet( ProLayer *layer,ProView view,ProLayerDisplay display_status );

//  Sets the display status of the view to eitherfollow the display status in the drawing, or
ProError LayerViewDependencySet( ProView view,ProBoolean depend );

//  Returns the dependency of the view layer display from the drawinglayer display.
ProError LayerViewDependencyGet( ProView view,ProBoolean *depend );

//  Sets up a default layer of the specified type.
ProError LayerDefLayerSet( ProDefLayerType def_layer_type,ProName def_layer_name );

//  Retrieves the name of the default layer of the specified type.
ProError LayerDefLayerGet( ProDefLayerType def_layer_type,ProName def_layer_name );

//  Returns the visibility status for the specified item.
ProError LayeritemStatusGet( ProLayerItem *pro_layer_item,ProView pro_view,ProBoolean *p_item_visible );

//  Finds all layers containing the given item.
ProError LayeritemLayersGet( ProDrawing pro_drawing,ProLayerItem *pro_layer_item,ProLayer **pro_layers );

};
