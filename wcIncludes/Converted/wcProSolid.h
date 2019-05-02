/*--------------  C L A S S  wcProSolid  --------

   A Wrapper Class for ProE object: ProSolid
   Created By: Michael Lucatz
   Date:       31/03/2006 23:21:30
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProSolid.h>

class wcProSolid: public wcProObject
{
public:
	wcProSolid(void);
	~wcProSolid(void);
public:

//      Initializes the <i>ProSolid</i> handle.
ProError SolidInit (ProName name,ProType type,ProSolid *p_handle);

//      Creates a new Pro/ENGINEER object of the specified type,and initializes the <i>ProSolid</i> handle.
ProError SolidCreate (ProName name,ProType type,ProSolid *p_handle);

//   Regenerates the specified <i>ProSolid</i>.
ProError SolidRegenerate (ProSolid p_handle,int flags);

//  Retrieves an internal postfix identifier for the specified solid(to be used in relations).
ProError SolidToPostfixId (ProSolid handle,int *p_id);

//  Retrieves the solid handle, given the postfix identifier.
ProError PostfixIdToSolid (int id,ProSolid *p_handle);

//  Displays the specified object.
ProError SolidDisplay (ProSolid p_handle);

//      Visits all the axes in the specified <i>ProSolid</i>.
ProError SolidAxisVisit (ProSolid p_handle,ProAxisVisitAction visit_action,ProAxisFilterAction filter_action,ProAppData app_data);

//      Visits all the coordinate systems in the specified solid.
ProError SolidCsysVisit (ProSolid p_handle,ProCsysVisitAction visit_action,ProCsysFilterAction filter_action,ProAppData app_data);

//      Visits all the surfaces in the specified solid.
ProError SolidSurfaceVisit (ProSolid p_handle,ProSurfaceVisitAction visit_action,ProSurfaceFilterAction filter_action,ProAppData app_data);

//      Visits all the quilts in the specified solid.
ProError SolidQuiltVisit (ProSolid p_handle,ProQuiltVisitAction visit_action,ProQuiltFilterAction filter_action,ProAppData app_data);

//      Visits all the features in the specified solid.
ProError SolidFeatVisit (ProSolid p_handle,ProFeatureVisitAction visit_action,ProFeatureFilterAction filter_action,ProAppData app_data);

//      Visits all the displayed components in the solid handle.
ProError SolidDispCompVisit ( ProSolid handle,ProSolidDispCompVisitAction visit_action,ProSolidDispCompFilterAction filter_action,ProAppData app_data);

//    Visits External Analyses in the Pro/ENGINEER solid model.
ProError SolidAnalysisVisit(ProSolid solid,ProAnalysisVisitAction visit_action,ProAnalysisFilterAction filter_action,ProAppData appdata);

//  Visits all dimensions stored in the specified solid.
ProError SolidDimensionVisit(ProSolid solid,ProBoolean refdim,ProDimensionVisitAction action,ProDimensionFilterAction filter,ProAppData data);

// Returns a list of features of the specified solid and their statuses
ProError SolidFeatstatusGet (ProSolid solid,int **p_feat_id_array,ProFeatStatus **p_status_array,int *p_num_features);

// Assigns the feature order and status of the specified solid based on
ProError SolidFeatstatusSet (ProSolid solid,int *feat_id_array,ProFeatStatus *status_array,int num_features,ProBoolean can_fix);

// Computes the outline of a solid.  This outline can include external
ProError SolidOutlineCompute ( ProSolid p_solid,ProMatrix matrix,ProSolidOutlExclTypes excludes[],int num_excludes,Pro3dPnt r_outline_points[2]);

// Retrieves the regeneration outline of a solid, with respect to the
ProError SolidOutlineGet (ProSolid p_solid,Pro3dPnt r_outline_points[2]);

// Sets either the relative or absolute accuracy of a part or an assembly.
ProError SolidAccuracySet (ProSolid solid,ProAccuracyType type,double accuracy);

// Retrieves the accuracy of the specified part or assembly.
ProError SolidAccuracyGet (ProSolid solid,ProAccuracyType *r_type,double *r_accuracy);

//  Returns a list of ray intersections with a model.
ProError SolidRayIntersectionCompute ( ProMdl model,double aperture_radius,ProRay* p_ray,ProSelection** p_sel_arr,int* p_count);

//  Determines whether the specified solid has a family table,and if that family table is valid and/or empty.
ProError SolidFamtableCheck (ProSolid handle);

//   Calculates the mass properties of a part or an assembly inthe specified coordinate system.
ProError SolidMassPropertyGet ( ProSolid solid,ProName csys_name,ProMassProperty* mass_prop );

//  Retrieves the list of failed features in thespecified part or assembly.
ProError SolidFailedFeatsList (ProSolid solid,int **r_failed_feat_ids);

//  Given a solid, a point, and a maximum distance, this functionprojects the point onto the surface along the shortest possible
ProError SolidProjectPoint ( ProSolid p_handle,Pro3dPnt xyz,double tolerance,ProSurface *p_surface,ProUvParam uv_point );

//  Retreives the tolerance value for the specified solid, forthe specified number of decimal places.
ProError SolidToleranceGet ( ProSolid solid,ProToleranceType type,int n_decimals,double *tolerance);

//  Sets the solid's tolerance, at the specified number ofdecimal places, to the specified value.
ProError SolidToleranceSet ( ProSolid solid,ProToleranceType type,int n_decimals,double tolerance);

//      This will load a tolerance class for Hole or Shaft ISO tols.
ProError SolidTolclassLoad (ProSolid p_model, ProName name);

//  Gets the ISO/DIN model class type for a solid model.
ProError SolidModelclassGet(ProSolid solid,ProModelClass *model_class);

//  Sets the ISO/DIN model class type for a solid model.
ProError SolidModelclassSet(ProSolid solid,ProModelClass model_class);

};
