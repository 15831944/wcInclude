/*--------------  C L A S S  wcProDrawing  --------

   A Wrapper Class for ProE object: ProDrawing
   Created By: Michael Lucatz
   Date:       07/04/2006 23:29:15
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProToolkit.h>
#include <ProDrawing.h>

class wcProDrawing: public wcProObject
{
public:
	wcProDrawing(void);
	~wcProDrawing(void);
public:


// Outputs information about the display status of a drawing view
ProError DrawingViewDisplayGet(ProDrawing drawing,ProView view,ProDrawingViewDisplay *display_status);
// Sets the display status of a drawing view. The function does not
ProError DrawingViewDisplaySet(ProDrawing drawing,ProView view,ProDrawingViewDisplay *display_status);

//  Regenerates the specified drawing draft entities.
ProError DwgDraftRegenerate (ProDrawing p_draw);

//  Regenerates the specified drawing sheet.
ProError DwgSheetRegenerate (ProDrawing p_draw, int sheet_id);

//  Regenerates the specified view.
ProError DwgViewRegenerate (ProDrawing p_draw, int view_id);

//  Regenerates the view specified by the specified view handle.
ProError DrawingViewRegenerate (ProDrawing p_draw, ProView p_view);

//  Outputs the name of the drawing format for the specifiedsheet
ProError DrawingFormatGet(ProDrawing drawing,int sheet,ProName format_name);

//  Reports which drawing view a dimension is displayed in.
ProError DrawingDimensionViewGet( ProDrawing drawing,ProDimension *dimension,ProView *view );

//  Checks if dimension is associative.
ProError DrawingDimIsAssociative( ProDrawing drawing,ProDimension *dimension,ProBoolean *associative);

//  Applies to dimensions stored in the solid or in the drawing.
ProError DrawingDimSwitchView( ProDrawing drawing,ProDimension *dimension,ProView target_view );

//  Retrieves the attachments and the sense of the specifieddrawing dimension. only applicable for dimensions created
ProError DrawingDimAttachsGet(ProDrawing drawing,ProDimension *dimension,ProSelection **p_attachments_arr,ProDimSense **p_dsense_arr);

//  Creates a dimension in drawing mode with the specifiedattachments and sense, at the specified location.
ProError DrawingDimCreate(ProDrawing drawing,ProSelection *attachments_arr,ProDimSense *dsense_arr,ProVector location,ProBoolean ref_dim,ProDimension *dimension);

//  Queries whether a dimension is ordinate.
ProError DrawingDimIsOrdinate(ProDrawing drawing,ProDimension *dimension,ProBoolean *ordinate,ProDimension *base_dim);

//  Creates an ordinate baseline dimension from an existinglinear dimension. Available only in drawing mode. The
ProError DrawingOrdbaselineCreate(ProDrawing drawing,ProDimension *dimension,ProVector location,ProDimension *base_dimension);

//  Converts a linear dimension to ordinate using the base dimensionspecified. Available only in drawing mode. The drawing must be
ProError DrawingDimToOrdinate(ProDrawing drawing,ProDimension *dimension,ProDimension *base_dimension);

//  Converts an ordinate dimension to linear. Available only indrawing mode. The drawing must be displayed.
ProError DrawingDimToLinear(ProDrawing drawing,ProDimension *dimension);

//  Gets dimension position in drawing (the center of the text box ).
ProError DrawingDimensionPosGet( ProDrawing drawing,ProDimension *dimension,ProVector location);

//  Move the dimension to the specified position in the drawing.
ProError DrawingDimensionMove( ProDrawing drawing,ProDimension *dimension,ProVector location );

//  Converts a 3d axis selection into a dtl-axis selection inthe drawing. The 3d axis selection should have the following info:
ProError DrawingAxisToDtlaxis(ProDrawing p_draw,ProSelection p_sel3d,ProVector location,ProSelection *r_p_sel2d);

//  Converts a dtl_axis selection into a 3d axis selection.
ProError DrawingDtlaxisToAxis(ProDrawing p_draw,ProSelection p_sel2d,ProSelection *r_p_sel3d,ProVector r_location);

// Returns the total number of sheets in the specified drawing.
ProError DrawingSheetsCount (ProDrawing drawing,int *n_sheets);

// Returns the sheet info for the specified sheet.
ProError DrawingSheetInfoGet(ProDrawing drawing,int sheet,ProDrawingSheetInfo *sheet_info);

// Returns the transformation matrix for the drawing sheet.
ProError DrawingSheetTrfGet(ProDrawing drawing,int sheet,ProName sheet_size,ProMatrix transform);

// Returns the current sheet number of the specified drawing.
ProError DrawingCurrentSheetGet (ProDrawing drawing,int *current_sheet);

// Checks whether the input view has user scale assigned.
ProError DrawingViewScaleIsUserdefined (ProDrawing drawing,ProView view,ProBoolean *p_is_userdefined);

// Sets the current sheet number of the specified drawing.
ProError DrawingCurrentSheetSet (ProDrawing drawing,int current_sheet);

// Adds a sheet to a drawing-type model. The valid drawing-type
ProError DrawingSheetCreate (ProDrawing drawing,int *new_sheet);

//  Deletes the specified sheet from a drawing-type model. The validdrawing-type models are as follows: Layout, Format, Drawing,
ProError DrawingSheetDelete (ProDrawing drawing,int sheet);

//  Adds or replaces a drawing format in a drawing.
ProError DrawingFormatAdd (ProDrawing drawing,int drawing_sheet,ProSolid solid,ProMdl format,int format_sheet);

//  Visits views in the specified  drawing.
ProError DrawingViewVisit (ProDrawing drawing,ProViewVisitAction visit_action,ProViewFilterAction filter_action,ProAppData data);

//  Collects all views in the specified  drawing.
ProError DrawingViewsCollect (ProDrawing drawing,ProView **views);

//  Retrieves the sheet containing the drawing viewInput Arguments:
ProError DrawingViewSheetGet (ProDrawing drawing,ProView view,int* sheet);

//  Retrieves the view outline, in logical screen coordinates.
ProError DrawingViewOutlineGet (ProDrawing drawing,ProView view,ProPoint3d outline[2]);

//   Retrieves the scale of the specified view.
ProError DrawingViewScaleGet (ProDrawing drawing,ProView view,double *scale);

//  Sets the scale of a view. This function works for viewsdisplayed in the current window only.
ProError DrawingViewScaleSet (ProDrawing drawing,ProView view,double scale);

//  Moves a view (by a vector) to a new position, in logical screencoordinates.
ProError DrawingViewMove (ProDrawing drawing,ProView view,ProVector move_vector);

//  Deletes the specified view from the drawing.
ProError DrawingViewDelete (ProDrawing drawing,ProView view,ProBoolean delete_children);

//  Return a transformation matrix from view csys to drawing csysand vice versa.
ProError DrawingViewTransformGet (ProDrawing drawing,ProView view,ProBoolean view_to_drawing,ProMatrix transform);

//  Visits specified drawing.
ProError DrawingSolidsVisit (ProDrawing drawing,ProSolidVisitAction visit_action,ProSolidFilterAction filter_action,ProAppData app_data);

//  Retrieves an array of pointers to the models that belongto a drawing.
ProError DrawingSolidsCollect (ProDrawing drawing,ProSolid **solids);

//  Returns the model displayed in a view. In simplified views, thenormal model pointer will be returned, not a pointer to the
ProError DrawingViewSolidGet (ProDrawing drawing,ProView view,ProSolid *solid);

//  Retrieves the scale of the model on the specifiedsheet of the drawing.
ProError DrawingScaleGet (ProDrawing drawing,ProSolid solid,int sheet,double *scale);

// Sets the scale of the specified model on the
ProError DrawingScaleSet (ProDrawing drawing,ProSolid solid,int sheet,double scale);

// Adds the specified model to the drawing.
ProError DrawingSolidAdd (ProDrawing drawing,ProSolid solid);

// Deletes the specified model from the drawing.
ProError DrawingSolidDelete (ProDrawing drawing,ProSolid solid);

// Creates a nonparametric general drawing view.
ProError DrawingGeneralviewCreate (ProDrawing drawing,ProSolid solid,int sheet_number,ProBoolean exploded,ProPoint3d position,double scale,ProMatrix orientation,ProView *view);

//   Creates a projected drawing view. The projection view parentmust be any of the following types: broken, unfolded xsec,
ProError DrawingProjectedviewCreate (ProDrawing drawing,ProView parent_view,ProBoolean exploded,ProPoint3d position,ProView *view);

// Adds the specified simplified representation to the drawing.
ProError DrawingAsmsimprepAdd (ProDrawing drawing,ProSimprep *simp_rep);

// Deletes the specified simplified representation
ProError DrawingAsmsimprepDelete (ProDrawing drawing,ProSimprep *simp_rep);

// Returns the number of simplified representations that belong
ProError DrawingSimprepsCollect (ProDrawing drawing,ProSolid solid,ProSimprep **simpreps);

// Changes a drawing sheet to a new sheet number.
ProError DrawingSheetsReorder (ProDrawing drawing,int from_sheet,int to_sheet);

// Visits all dimensions stored in the specified drawing,
ProError DrawingDimensionVisit(ProDrawing drawing,ProType type,ProDimensionVisitAction action,ProDimensionFilterAction filter,ProAppData data );

//  Replaces a drawing model solid with another solid.
ProError DrawingSolidReplace(ProDrawing drawing,ProSolid from,ProSolid to,ProBoolean unrepresent_ok);

//  Outputs the location grid column and row fora specified location in screen coordinates.
ProError DrawingPosToLocgrid( ProDrawing p_draw,int sheet,ProVector pos,ProName column_label,ProName row_label);

//   Creates a new drawing from a template
ProError DrawingFromTmpltCreate(ProName new_name,ProName dwg_template,ProModel* new_model,ProDwgcreateOptions options,ProDrawing* drawing,ProDwgcreateErrs* errors);

// Determines if the view specified by view is an
ProError DrawingViewIsBackground (ProDrawing drawing,ProView view,ProBoolean *is_background);

//   Returns the name of a view in the drawing.
ProError DrawingViewNameGet (ProDrawing drawing,ProView view,ProName name);

// Returns the overlay view identifier of the specified sheet.
ProError DrawingBackgroundViewGet (ProDrawing drawing,int sheet,ProView *background_view);

//   Sets the Z-clipping on the drawing view to reference thegiven edge, datum, or point on surface.
ProError DrawingViewZclippingSet (ProDrawing drawing,ProView view,ProSelection zclip_geometry);

//   Gets the drawing view Z-clipping reference (the edge, datumor point on surface).
ProError DrawingViewZclippingGet (ProDrawing drawing,ProView view,ProSelection* zclip_geometry);

// Gets the current drawing solid model for the drawing.
ProError DrawingCurrentsolidGet (ProDrawing drawing, ProSolid* solid);

// Sets the current drawing solid model for the drawing.  To see changes to parameters and fields reflecting the change of the current solid model, regenerate the drawing using ProDwgSheetRegenerate().
ProError DrawingCurrentsolidSet (ProDrawing drawing, ProSolid solid);

//  Determines if the specified datum is displayed in the drawing view.
ProError DrawingViewDatumdisplayGet (ProDrawing drawing,ProView view,ProSelection datum,ProViewItemdisplayStatus *status);

//  Returns the current status of dual dimensioning in a drawing.
ProError DrawingDualDimensionGet (ProDrawing drawing,ProDualDimensionType *dual_dimensioning,ProName dual_secondary_units,int *dual_digits_diff,ProBoolean *dual_dimension_brackets);

};
