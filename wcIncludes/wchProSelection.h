/*--------------  C L A S S  wcProSelection  --------

A Wrapper Class for ProE object: ProSelection
Created By: Michael Lucatz
Date:       29/08/2007 11:48:46
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProSelection.h>

class wcProSelection: public wcProObject
{
public:
	wcProSelection(void)
	{
	}

	~wcProSelection(void)
	{
	}

	ProError SelectionAlloc( ProAsmcomppath *p_cmp_path,ProModelitem *p_mdl_itm,ProSelection *p_selection )
	{
		return ProSelectionAlloc( p_cmp_path,p_mdl_itm,p_selection );
	}

	ProError SelectionCopy( ProSelection from_selection,ProSelection *p_to_selection )
	{
		return ProSelectionCopy( from_selection,p_to_selection );
	}

	ProError SelectionFree( ProSelection *p_selection )
	{
		return ProSelectionFree( p_selection );
	}

	ProError SelectionarrayFree( ProSelection *sel_array )
	{
		return ProSelectionarrayFree( sel_array );
	}

	ProError SelectionSet( ProSelection selection,ProAsmcomppath *p_cmp_path,ProModelitem *p_mdl_itm )
	{
		return ProSelectionSet( selection,p_cmp_path,p_mdl_itm );
	}

	ProError SelectionAsmcomppathGet( ProSelection selection,ProAsmcomppath *p_cmp_path )
	{
		return ProSelectionAsmcomppathGet( selection,p_cmp_path );
	}

	ProError SelectionModelitemGet( ProSelection selection,ProModelitem *p_mdl_item )
	{
		return ProSelectionModelitemGet( selection,p_mdl_item );
	}

	ProError SelectionUvParamSet( ProSelection selection,ProUvParam uv_param )
	{
		return ProSelectionUvParamSet( selection,uv_param );
	}

	ProError SelectionUvParamGet( ProSelection selection,ProUvParam uv_param )
	{
		return ProSelectionUvParamGet( selection,uv_param );
	}

	ProError SelectionViewGet( ProSelection selection,ProView* p_view )
	{
		return ProSelectionViewGet( selection,p_view );
	}

	ProError SelectionPoint3dGet( ProSelection selection,ProPoint3d point )
	{
		return ProSelectionPoint3dGet( selection,point );
	}

	ProError SelectionWindowIdGet( ProSelection selection,int* window_id )
	{
		return ProSelectionWindowIdGet( selection,window_id );
	}

	ProError SelectionDepthGet( ProSelection selection,double* depth )
	{
		return ProSelectionDepthGet( selection,depth );
	}

	ProError Select( char option[],int max_count,ProSelection *p_in_sel,ProSelFunctions *sel_func,ProSelectionEnv sel_env,ProSelAppAction appl_act_data,ProSelection **p_sel_array,int *p_n_sels )
	{
		return ProSelect( option,max_count,p_in_sel,sel_func,sel_env,appl_act_data,p_sel_array,p_n_sels );
	}

	ProError SelectionVerify( ProSelection selection )
	{
		return ProSelectionVerify( selection );
	}

	ProError SelectionHighlight( ProSelection selection,ProColortype color )
	{
		return ProSelectionHighlight( selection,color );
	}

	ProError SelectionDisplay( ProSelection selection )
	{
		return ProSelectionDisplay( selection );
	}

	ProError SelectionUnhighlight( ProSelection selection )
	{
		return ProSelectionUnhighlight( selection );
	}

	ProError SelectionEnvAlloc( ProSelectionEnvOption* sel_env_array,int count,ProSelectionEnv* p_sel_env )
	{
		return ProSelectionEnvAlloc( sel_env_array,count,p_sel_env );
	}

	ProError SelectionEnvFree( ProSelectionEnv p_sel_env )
	{
		return ProSelectionEnvFree( p_sel_env );
	}

	ProError SelectionPoint3dSet( ProPoint3d point,ProSelection *p_prosel)
	{
		return ProSelectionPoint3dSet( point,p_prosel);
	}

	ProError SelectionDwgtblcellGet(ProSelection selection,int *table_segment,int *row,int *column)
	{
		return ProSelectionDwgtblcellGet(selection,table_segment,row,column);
	}

	ProError SelectionDwgtableGet( ProSelection selection,ProDwgtable * table)
	{
		return ProSelectionDwgtableGet( selection, table);
	}

	ProError SelectionDrawingGet( ProSelection selection,ProDrawing * drawing)
	{
		return ProSelectionDrawingGet( selection,  drawing);
	}
};