#include "wcProSelection.h"

wcProSelection::wcProSelection(void)
{
}

wcProSelection::~wcProSelection(void)
{
}

ProError wcProSelection::SelectionAlloc( ProAsmcomppath *p_cmp_path,ProModelitem *p_mdl_itm,ProSelection *p_selection )
{
	return ProSelectionAlloc( p_cmp_path,p_mdl_itm,p_selection );
}

ProError wcProSelection::SelectionCopy( ProSelection from_selection,ProSelection *p_to_selection )
{
	return ProSelectionCopy( from_selection,p_to_selection );
}

ProError wcProSelection::SelectionFree( ProSelection *p_selection )
{
	return ProSelectionFree( p_selection );
}

ProError wcProSelection::SelectionarrayFree( ProSelection *sel_array )
{
	return ProSelectionarrayFree( sel_array );
}

ProError wcProSelection::SelectionSet( ProSelection selection,ProAsmcomppath *p_cmp_path,ProModelitem *p_mdl_itm )
{
	return ProSelectionSet( selection,p_cmp_path,p_mdl_itm );
}

ProError wcProSelection::SelectionAsmcomppathGet( ProSelection selection,ProAsmcomppath *p_cmp_path )
{
	return ProSelectionAsmcomppathGet( selection,p_cmp_path );
}

ProError wcProSelection::SelectionModelitemGet( ProSelection selection,ProModelitem *p_mdl_item )
{
	return ProSelectionModelitemGet( selection,p_mdl_item );
}

ProError wcProSelection::SelectionUvParamSet( ProSelection selection,ProUvParam uv_param )
{
	return ProSelectionUvParamSet( selection,uv_param );
}

ProError wcProSelection::SelectionUvParamGet( ProSelection selection,ProUvParam uv_param )
{
	return ProSelectionUvParamGet( selection,uv_param );
}

ProError wcProSelection::SelectionViewGet( ProSelection selection,ProView* p_view )
{
	return ProSelectionViewGet( selection,p_view );
}

ProError wcProSelection::SelectionPoint3dGet( ProSelection selection,ProPoint3d point )
{
	return ProSelectionPoint3dGet( selection,point );
}

ProError wcProSelection::SelectionWindowIdGet( ProSelection selection,int* window_id )
{
	return ProSelectionWindowIdGet( selection,window_id );
}

ProError wcProSelection::SelectionDepthGet( ProSelection selection,double* depth )
{
	return ProSelectionDepthGet( selection,depth );
}

ProError wcProSelection::Select( char option[],int max_count,ProSelection *p_in_sel,ProSelFunctions *sel_func,ProSelectionEnv sel_env,ProSelAppAction appl_act_data,ProSelection **p_sel_array,int *p_n_sels )
{
	return ProSelect( option,max_count,p_in_sel,sel_func,sel_env,appl_act_data,p_sel_array,p_n_sels );
}

ProError wcProSelection::SelectionVerify( ProSelection selection )
{
	return ProSelectionVerify( selection );
}

ProError wcProSelection::SelectionHighlight( ProSelection selection,ProColortype color )
{
	return ProSelectionHighlight( selection,color );
}

ProError wcProSelection::SelectionDisplay( ProSelection selection )
{
	return ProSelectionDisplay( selection );
}

ProError wcProSelection::SelectionUnhighlight( ProSelection selection )
{
	return ProSelectionUnhighlight( selection );
}

ProError wcProSelection::SelectionEnvAlloc( ProSelectionEnvOption* sel_env_array,int count,ProSelectionEnv* p_sel_env )
{
	return ProSelectionEnvAlloc( sel_env_array,count,p_sel_env );
}

ProError wcProSelection::SelectionEnvFree( ProSelectionEnv p_sel_env )
{
	return ProSelectionEnvFree( p_sel_env );
}

ProError wcProSelection::SelectionPoint3dSet( ProPoint3d point,ProSelection *p_prosel)
{
	return ProSelectionPoint3dSet( point,p_prosel);
}

ProError wcProSelection::SelectionDwgtblcellGet(ProSelection selection,int *table_segment,int *row,int *column)
{
	return ProSelectionDwgtblcellGet(selection,table_segment,row,column);
}

ProError wcProSelection::SelectionDwgtableGet( ProSelection selection,ProDwgtable * table)
{
	return ProSelectionDwgtableGet( selection, table);
}

ProError wcProSelection::SelectionDrawingGet( ProSelection selection,ProDrawing * drawing)
{
	return ProSelectionDrawingGet( selection,  drawing);
}

