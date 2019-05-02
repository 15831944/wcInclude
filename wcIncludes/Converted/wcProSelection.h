/*--------------  C L A S S  wcProSelection  --------

   A Wrapper Class for ProE object: ProSelection
   Created By: Michael Lucatz
   Date:       29/08/2007 11:48:46
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProSelection.h>

class wcProSelection: public wcProObject
{
public:
	wcProSelection(void);
	~wcProSelection(void);
public:

//  Allocates and optionally fills in a selection object.
ProError SelectionAlloc( ProAsmcomppath *p_cmp_path,ProModelitem *p_mdl_itm,ProSelection *p_selection );

//  Copies a selection object.
ProError SelectionCopy( ProSelection from_selection,ProSelection *p_to_selection );

//  Frees a preallocated selection object.
ProError SelectionFree( ProSelection *p_selection );

//  Frees a ProArray of allocated selection objects (also freeseach member ProSelection).
ProError SelectionarrayFree( ProSelection *sel_array );

//  Sets the model item (and optionally a component path) for aselection object.
ProError SelectionSet( ProSelection selection,ProAsmcomppath *p_cmp_path,ProModelitem *p_mdl_itm );

//  Gets the component path from a selection object.
ProError SelectionAsmcomppathGet( ProSelection selection,ProAsmcomppath *p_cmp_path );

//  Gets the model item from a selection object.
ProError SelectionModelitemGet( ProSelection selection,ProModelitem *p_mdl_item );

//  Sets the UV-parameters to a selection object.
ProError SelectionUvParamSet( ProSelection selection,ProUvParam uv_param );

//  Gets the UV-parameters from a selection object.
ProError SelectionUvParamGet( ProSelection selection,ProUvParam uv_param );

//  Gets the handle to the view from the selection object.
ProError SelectionViewGet( ProSelection selection,ProView* p_view );

//  Retrieves the coordinates of the selected point in the membercoordinate system.
ProError SelectionPoint3dGet( ProSelection selection,ProPoint3d point );

//  Retrieves the window id in which selection was made.
ProError SelectionWindowIdGet( ProSelection selection,int* window_id );

//  Gets the selection depth, in screen coordinates.
ProError SelectionDepthGet( ProSelection selection,double* depth );

//  Selects an object in a Pro/ENGINEER window.
ProError Select( char option[],int max_count,ProSelection *p_in_sel,ProSelFunctions *sel_func,ProSelectionEnv sel_env,ProSelAppAction appl_act_data,ProSelection **p_sel_array,int *p_n_sels );

//      Verifies the validity of the <i>ProSelection</i>.
ProError SelectionVerify( ProSelection selection );

//      Highlights the selection in the current window.
ProError SelectionHighlight( ProSelection selection,ProColortype color );

//      Displays the selection. Note that this is a one-time action(the next repaint will erase this display).
ProError SelectionDisplay( ProSelection selection );

//      Removes the highlighting from the selection, which washighlighted by a previous call to <b>ProSelectionHighlight()</b>.
ProError SelectionUnhighlight( ProSelection selection );

//  Allocates a <i>ProSelectionEnv</i>, which is a set of attributes thatcan be passed to <b>ProSelect()</b>.
ProError SelectionEnvAlloc( ProSelectionEnvOption* sel_env_array,int count,ProSelectionEnv* p_sel_env );

//      Frees the <i>ProSelectionEnv</i> allocated by<b>ProSelectionEnvAlloc()</b>.
ProError SelectionEnvFree( ProSelectionEnv p_sel_env );

//    Uses user-provided ProPoint3d to set the selected-point of the ProSelection.
ProError SelectionPoint3dSet( ProPoint3d point,ProSelection *p_prosel);

//  For a ProSelection representing a cell of a drawing table,returns the table segment, row and column of the cell.
ProError SelectionDwgtblcellGet(ProSelection selection,int *table_segment,int *row,int *column);

//  For a ProSelection representing a cell of a drawing table,returns the table from which the cell was selected.
ProError SelectionDwgtableGet( ProSelection selection,ProDwgtable * table);

//  For a ProSelection representing a entities selected in a drawingreturns the drawing model handle from which the entities were selected
ProError SelectionDrawingGet( ProSelection selection,ProDrawing * drawing);

};
