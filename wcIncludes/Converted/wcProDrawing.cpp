#include "wcProDrawing.h"


wcProDrawing::wcProDrawing(void)
{
}

wcProDrawing::~wcProDrawing(void)
{
}

ProError wcProDrawing::DrawingViewDisplayGet(ProDrawing drawing,ProView view,ProDrawingViewDisplay *display_status)
{
	return ProDrawingViewDisplayGet(drawing,view,display_status);
}

ProError wcProDrawing::DrawingViewDisplaySet(ProDrawing drawing,ProView view,ProDrawingViewDisplay *display_status)
{
	return ProDrawingViewDisplaySet(drawing,view,display_status);
}

ProError wcProDrawing::DwgDraftRegenerate (ProDrawing p_draw)
{
	return ProDwgDraftRegenerate (p_draw);
}

ProError wcProDrawing::DwgSheetRegenerate (ProDrawing p_draw, int sheet_id)
{
	return ProDwgSheetRegenerate (p_draw, sheet_id);
}

ProError wcProDrawing::DwgViewRegenerate (ProDrawing p_draw, int view_id)
{
	return ProDwgViewRegenerate (p_draw, view_id);
}

ProError wcProDrawing::DrawingViewRegenerate (ProDrawing p_draw, ProView p_view)
{
	return ProDrawingViewRegenerate (p_draw, p_view);
}

ProError wcProDrawing::DrawingFormatGet(ProDrawing drawing,int sheet,ProName format_name)
{
	return ProDrawingFormatGet(drawing,sheet,format_name);
}

ProError wcProDrawing::DrawingDimensionViewGet( ProDrawing drawing,ProDimension *dimension,ProView *view )
{
	return ProDrawingDimensionViewGet( drawing,dimension,view );
}

ProError wcProDrawing::DrawingDimIsAssociative( ProDrawing drawing,ProDimension *dimension,ProBoolean *associative)
{
	return ProDrawingDimIsAssociative( drawing,dimension,associative);
}

ProError wcProDrawing::DrawingDimSwitchView( ProDrawing drawing,ProDimension *dimension,ProView target_view )
{
	return ProDrawingDimSwitchView( drawing,dimension,target_view );
}

ProError wcProDrawing::DrawingDimAttachsGet(ProDrawing drawing,ProDimension *dimension,ProSelection **p_attachments_arr,ProDimSense **p_dsense_arr)
{
	return ProDrawingDimAttachsGet(drawing,dimension,p_attachments_arr,p_dsense_arr);
}

ProError wcProDrawing::DrawingDimCreate(ProDrawing drawing,ProSelection *attachments_arr,ProDimSense *dsense_arr,ProVector location,ProBoolean ref_dim,ProDimension *dimension)
{
	return ProDrawingDimCreate(drawing,attachments_arr,dsense_arr,location,ref_dim,dimension);
}

ProError wcProDrawing::DrawingDimIsOrdinate(ProDrawing drawing,ProDimension *dimension,ProBoolean *ordinate,ProDimension *base_dim)
{
	return ProDrawingDimIsOrdinate(drawing,dimension,ordinate,base_dim);
}

ProError wcProDrawing::DrawingOrdbaselineCreate(ProDrawing drawing,ProDimension *dimension,ProVector location,ProDimension *base_dimension)
{
	return ProDrawingOrdbaselineCreate(drawing,dimension,location,base_dimension);
}

ProError wcProDrawing::DrawingDimToOrdinate(ProDrawing drawing,ProDimension *dimension,ProDimension *base_dimension)
{
	return ProDrawingDimToOrdinate(drawing,dimension,base_dimension);
}

ProError wcProDrawing::DrawingDimToLinear(ProDrawing drawing,ProDimension *dimension)
{
	return ProDrawingDimToLinear(drawing,dimension);
}

ProError wcProDrawing::DrawingDimensionPosGet( ProDrawing drawing,ProDimension *dimension,ProVector location)
{
	return ProDrawingDimensionPosGet( drawing,dimension,location);
}

ProError wcProDrawing::DrawingDimensionMove( ProDrawing drawing,ProDimension *dimension,ProVector location )
{
	return ProDrawingDimensionMove( drawing,dimension,location );
}

ProError wcProDrawing::DrawingAxisToDtlaxis(ProDrawing p_draw,ProSelection p_sel3d,ProVector location,ProSelection *r_p_sel2d)
{
	return ProDrawingAxisToDtlaxis(p_draw,p_sel3d,location,r_p_sel2d);
}

ProError wcProDrawing::DrawingDtlaxisToAxis(ProDrawing p_draw,ProSelection p_sel2d,ProSelection *r_p_sel3d,ProVector r_location)
{
	return ProDrawingDtlaxisToAxis(p_draw,p_sel2d,r_p_sel3d,r_location);
}

ProError wcProDrawing::DrawingSheetsCount (ProDrawing drawing,int *n_sheets)
{
	return ProDrawingSheetsCount (drawing,n_sheets);
}

ProError wcProDrawing::DrawingSheetInfoGet(ProDrawing drawing,int sheet,ProDrawingSheetInfo *sheet_info)
{
	return ProDrawingSheetInfoGet(drawing,sheet,sheet_info);
}

ProError wcProDrawing::DrawingSheetTrfGet(ProDrawing drawing,int sheet,ProName sheet_size,ProMatrix transform)
{
	return ProDrawingSheetTrfGet(drawing,sheet,sheet_size,transform);
}

ProError wcProDrawing::DrawingCurrentSheetGet (ProDrawing drawing,int *current_sheet)
{
	return ProDrawingCurrentSheetGet (drawing,current_sheet);
}

ProError wcProDrawing::DrawingViewScaleIsUserdefined (ProDrawing drawing,ProView view,ProBoolean *p_is_userdefined)
{
	return ProDrawingViewScaleIsUserdefined (drawing,view,p_is_userdefined);
}

ProError wcProDrawing::DrawingCurrentSheetSet (ProDrawing drawing,int current_sheet)
{
	return ProDrawingCurrentSheetSet (drawing,current_sheet);
}

ProError wcProDrawing::DrawingSheetCreate (ProDrawing drawing,int *new_sheet)
{
	return ProDrawingSheetCreate (drawing,new_sheet);
}

ProError wcProDrawing::DrawingSheetDelete (ProDrawing drawing,int sheet)
{
	return ProDrawingSheetDelete (drawing,sheet);
}

ProError wcProDrawing::DrawingFormatAdd (ProDrawing drawing,int drawing_sheet,ProSolid solid,ProMdl format,int format_sheet)
{
	return ProDrawingFormatAdd (drawing,drawing_sheet,solid,format,format_sheet);
}

ProError wcProDrawing::DrawingViewVisit (ProDrawing drawing,ProViewVisitAction visit_action,ProViewFilterAction filter_action,ProAppData data)
{
	return ProDrawingViewVisit (drawing,visit_action,filter_action,data);
}

ProError wcProDrawing::DrawingViewsCollect (ProDrawing drawing,ProView **views)
{
	return ProDrawingViewsCollect (drawing,views);
}

ProError wcProDrawing::DrawingViewSheetGet (ProDrawing drawing,ProView view,int* sheet)
{
	return ProDrawingViewSheetGet (drawing,view,sheet);
}

ProError wcProDrawing::DrawingViewOutlineGet (ProDrawing drawing,ProView view,ProPoint3d outline[2])
{
	return ProDrawingViewOutlineGet (drawing,view,outline);
}

ProError wcProDrawing::DrawingViewScaleGet (ProDrawing drawing,ProView view,double *scale)
{
	return ProDrawingViewScaleGet (drawing,view,scale);
}

ProError wcProDrawing::DrawingViewScaleSet (ProDrawing drawing,ProView view,double scale)
{
	return ProDrawingViewScaleSet (drawing,view,scale);
}

ProError wcProDrawing::DrawingViewMove (ProDrawing drawing,ProView view,ProVector move_vector)
{
	return ProDrawingViewMove (drawing,view,move_vector);
}

ProError wcProDrawing::DrawingViewDelete (ProDrawing drawing,ProView view,ProBoolean delete_children)
{
	return ProDrawingViewDelete (drawing,view,delete_children);
}

ProError wcProDrawing::DrawingViewTransformGet (ProDrawing drawing,ProView view,ProBoolean view_to_drawing,ProMatrix transform)
{
	return ProDrawingViewTransformGet (drawing,view,view_to_drawing,transform);
}

ProError wcProDrawing::DrawingSolidsVisit (ProDrawing drawing,ProSolidVisitAction visit_action,ProSolidFilterAction filter_action,ProAppData app_data)
{
	return ProDrawingSolidsVisit (drawing,visit_action,filter_action,app_data);
}

ProError wcProDrawing::DrawingSolidsCollect (ProDrawing drawing,ProSolid **solids)
{
	return ProDrawingSolidsCollect (drawing,solids);
}

ProError wcProDrawing::DrawingViewSolidGet (ProDrawing drawing,ProView view,ProSolid *solid)
{
	return ProDrawingViewSolidGet (drawing,view,solid);
}

ProError wcProDrawing::DrawingScaleGet (ProDrawing drawing,ProSolid solid,int sheet,double *scale)
{
	return ProDrawingScaleGet (drawing,solid,sheet,scale);
}

ProError wcProDrawing::DrawingScaleSet (ProDrawing drawing,ProSolid solid,int sheet,double scale)
{
	return ProDrawingScaleSet (drawing,solid,sheet,scale);
}

ProError wcProDrawing::DrawingSolidAdd (ProDrawing drawing,ProSolid solid)
{
	return ProDrawingSolidAdd (drawing,solid);
}

ProError wcProDrawing::DrawingSolidDelete (ProDrawing drawing,ProSolid solid)
{
	return ProDrawingSolidDelete (drawing,solid);
}

ProError wcProDrawing::DrawingGeneralviewCreate (ProDrawing drawing,ProSolid solid,int sheet_number,ProBoolean exploded,ProPoint3d position,double scale,ProMatrix orientation,ProView *view)
{
	return ProDrawingGeneralviewCreate (drawing,solid,sheet_number,exploded,position,scale,orientation,view);
}

ProError wcProDrawing::DrawingProjectedviewCreate (ProDrawing drawing,ProView parent_view,ProBoolean exploded,ProPoint3d position,ProView *view)
{
	return ProDrawingProjectedviewCreate (drawing,parent_view,exploded,position,view);
}

ProError wcProDrawing::DrawingAsmsimprepAdd (ProDrawing drawing,ProSimprep *simp_rep)
{
	return ProDrawingAsmsimprepAdd (drawing,simp_rep);
}

ProError wcProDrawing::DrawingAsmsimprepDelete (ProDrawing drawing,ProSimprep *simp_rep)
{
	return ProDrawingAsmsimprepDelete (drawing,simp_rep);
}

ProError wcProDrawing::DrawingSimprepsCollect (ProDrawing drawing,ProSolid solid,ProSimprep **simpreps)
{
	return ProDrawingSimprepsCollect (drawing,solid,simpreps);
}

ProError wcProDrawing::DrawingSheetsReorder (ProDrawing drawing,int from_sheet,int to_sheet)
{
	return ProDrawingSheetsReorder (drawing,from_sheet,to_sheet);
}

ProError wcProDrawing::DrawingDimensionVisit(ProDrawing drawing,ProType type,ProDimensionVisitAction action,ProDimensionFilterAction filter,ProAppData data )
{
	return ProDrawingDimensionVisit(drawing,type,action,filter,data );
}

ProError wcProDrawing::DrawingSolidReplace(ProDrawing drawing,ProSolid from,ProSolid to,ProBoolean unrepresent_ok)
{
	return ProDrawingSolidReplace(drawing,from,to,unrepresent_ok);
}

ProError wcProDrawing::DrawingPosToLocgrid( ProDrawing p_draw,int sheet,ProVector pos,ProName column_label,ProName row_label)
{
	return ProDrawingPosToLocgrid( p_draw,sheet,pos,column_label,row_label);
}

ProError wcProDrawing::DrawingFromTmpltCreate(ProName new_name,ProName dwg_template,ProModel* new_model,ProDwgcreateOptions options,ProDrawing* drawing,ProDwgcreateErrs* errors)
{
	return ProDrawingFromTmpltCreate(new_name,dwg_template,new_model,options,drawing,errors);
}

ProError wcProDrawing::DrawingViewIsBackground (ProDrawing drawing,ProView view,ProBoolean *is_background)
{
	return ProDrawingViewIsBackground (drawing,view,is_background);
}

ProError wcProDrawing::DrawingViewNameGet (ProDrawing drawing,ProView view,ProName name)
{
	return ProDrawingViewNameGet (drawing,view,name);
}

ProError wcProDrawing::DrawingBackgroundViewGet (ProDrawing drawing,int sheet,ProView *background_view)
{
	return ProDrawingBackgroundViewGet (drawing,sheet,background_view);
}

ProError wcProDrawing::DrawingViewZclippingSet (ProDrawing drawing,ProView view,ProSelection zclip_geometry)
{
	return ProDrawingViewZclippingSet (drawing,view,zclip_geometry);
}

ProError wcProDrawing::DrawingViewZclippingGet (ProDrawing drawing,ProView view,ProSelection* zclip_geometry)
{
	return ProDrawingViewZclippingGet (drawing,view,zclip_geometry);
}

ProError wcProDrawing::DrawingCurrentsolidGet (ProDrawing drawing, ProSolid* solid)
{
	return ProDrawingCurrentsolidGet (drawing, solid);
}

ProError wcProDrawing::DrawingCurrentsolidSet (ProDrawing drawing, ProSolid solid)
{
	return ProDrawingCurrentsolidSet (drawing, solid);
}

ProError wcProDrawing::DrawingViewDatumdisplayGet (ProDrawing drawing,ProView view,ProSelection datum,ProViewItemdisplayStatus *status)
{
	return ProDrawingViewDatumdisplayGet (drawing,view,datum,status);
}

ProError wcProDrawing::DrawingDualDimensionGet (ProDrawing drawing,ProDualDimensionType *dual_dimensioning,ProName dual_secondary_units,int *dual_digits_diff,ProBoolean *dual_dimension_brackets)
{
	return ProDrawingDualDimensionGet (drawing,dual_dimensioning,dual_secondary_units,dual_digits_diff,dual_dimension_brackets);
}
