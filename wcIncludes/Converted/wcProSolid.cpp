#include "wcProSolid.h"

wcProSolid::wcProSolid(void)
{
}

wcProSolid::~wcProSolid(void)
{
}

ProError wcProSolid::SolidInit (ProName name,ProType type,ProSolid *p_handle)
{
	return ProSolidInit (name,type,p_handle);
}

ProError wcProSolid::SolidCreate (ProName name,ProType type,ProSolid *p_handle)
{
	return ProSolidCreate (name,type,p_handle);
}

ProError wcProSolid::SolidRegenerate (ProSolid p_handle,int flags)
{
	return ProSolidRegenerate (p_handle,flags);
}

ProError wcProSolid::SolidToPostfixId (ProSolid handle,int *p_id)
{
	return ProSolidToPostfixId (handle,p_id);
}

ProError wcProSolid::PostfixIdToSolid (int id,ProSolid *p_handle)
{
	return ProPostfixIdToSolid (id,p_handle);
}

ProError wcProSolid::SolidDisplay (ProSolid p_handle)
{
	return ProSolidDisplay (p_handle);
}

ProError wcProSolid::SolidAxisVisit (ProSolid p_handle,ProAxisVisitAction visit_action,ProAxisFilterAction filter_action,ProAppData app_data)
{
	return ProSolidAxisVisit (p_handle,visit_action,filter_action,app_data);
}

ProError wcProSolid::SolidCsysVisit (ProSolid p_handle,ProCsysVisitAction visit_action,ProCsysFilterAction filter_action,ProAppData app_data)
{
	return ProSolidCsysVisit (p_handle,visit_action,filter_action,app_data);
}

ProError wcProSolid::SolidSurfaceVisit (ProSolid p_handle,ProSurfaceVisitAction visit_action,ProSurfaceFilterAction filter_action,ProAppData app_data)
{
	return ProSolidSurfaceVisit (p_handle,visit_action,filter_action,app_data);
}

ProError wcProSolid::SolidQuiltVisit (ProSolid p_handle,ProQuiltVisitAction visit_action,ProQuiltFilterAction filter_action,ProAppData app_data)
{
	return ProSolidQuiltVisit (p_handle,visit_action,filter_action,app_data);
}

ProError wcProSolid::SolidFeatVisit (ProSolid p_handle,ProFeatureVisitAction visit_action,ProFeatureFilterAction filter_action,ProAppData app_data)
{
	return ProSolidFeatVisit (p_handle,visit_action,filter_action,app_data);
}

ProError wcProSolid::SolidDispCompVisit ( ProSolid handle,ProSolidDispCompVisitAction visit_action,ProSolidDispCompFilterAction filter_action,ProAppData app_data)
{
	return ProSolidDispCompVisit ( handle,visit_action,filter_action,app_data);
}

ProError wcProSolid::SolidAnalysisVisit(ProSolid solid,ProAnalysisVisitAction visit_action,ProAnalysisFilterAction filter_action,ProAppData appdata)
{
	return ProSolidAnalysisVisit(solid,visit_action,filter_action,appdata);
}

ProError wcProSolid::SolidDimensionVisit(ProSolid solid,ProBoolean refdim,ProDimensionVisitAction action,ProDimensionFilterAction filter,ProAppData data)
{
	return ProSolidDimensionVisit(solid,refdim,action,filter,data);
}

ProError wcProSolid::SolidFeatstatusGet (ProSolid solid,int **p_feat_id_array,ProFeatStatus **p_status_array,int *p_num_features)
{
	return ProSolidFeatstatusGet (solid,p_feat_id_array,p_status_array,p_num_features);
}

ProError wcProSolid::SolidFeatstatusSet (ProSolid solid,int *feat_id_array,ProFeatStatus *status_array,int num_features,ProBoolean can_fix)
{
	return ProSolidFeatstatusSet (solid,feat_id_array,status_array,num_features,can_fix);
}

ProError wcProSolid::SolidOutlineCompute ( ProSolid p_solid,ProMatrix matrix,ProSolidOutlExclTypes excludes[],int num_excludes,Pro3dPnt r_outline_points[2])
{
	return ProSolidOutlineCompute ( p_solid,matrix,excludes,num_excludes,r_outline_points);
}

ProError wcProSolid::SolidOutlineGet (ProSolid p_solid,Pro3dPnt r_outline_points[2])
{
	return ProSolidOutlineGet (p_solid,r_outline_points);
}

ProError wcProSolid::SolidAccuracySet (ProSolid solid,ProAccuracyType type,double accuracy)
{
	return ProSolidAccuracySet (solid,type,accuracy);
}

ProError wcProSolid::SolidAccuracyGet (ProSolid solid,ProAccuracyType *r_type,double *r_accuracy)
{
	return ProSolidAccuracyGet (solid,r_type,r_accuracy);
}

ProError wcProSolid::SolidRayIntersectionCompute ( ProMdl model,double aperture_radius,ProRay* p_ray,ProSelection** p_sel_arr,int* p_count)
{
	return ProSolidRayIntersectionCompute ( model,aperture_radius,p_ray,p_sel_arr,p_count);
}

ProError wcProSolid::SolidFamtableCheck (ProSolid handle)
{
	return ProSolidFamtableCheck (handle);
}

ProError wcProSolid::SolidMassPropertyGet ( ProSolid solid,ProName csys_name,ProMassProperty* mass_prop )
{
	return ProSolidMassPropertyGet ( solid,csys_name,mass_prop );
}

ProError wcProSolid::SolidFailedFeatsList (ProSolid solid,int **r_failed_feat_ids)
{
	return ProSolidFailedFeatsList (solid,r_failed_feat_ids);
}

ProError wcProSolid::SolidProjectPoint ( ProSolid p_handle,Pro3dPnt xyz,double tolerance,ProSurface *p_surface,ProUvParam uv_point )
{
	return ProSolidProjectPoint ( p_handle,xyz,tolerance,p_surface,uv_point );
}

ProError wcProSolid::SolidToleranceGet ( ProSolid solid,ProToleranceType type,int n_decimals,double *tolerance)
{
	return ProSolidToleranceGet ( solid,type,n_decimals,tolerance);
}

ProError wcProSolid::SolidToleranceSet ( ProSolid solid,ProToleranceType type,int n_decimals,double tolerance)
{
	return ProSolidToleranceSet ( solid,type,n_decimals,tolerance);
}

ProError wcProSolid::SolidTolclassLoad (ProSolid p_model, ProName name)
{
	return ProSolidTolclassLoad (p_model, name);
}

ProError wcProSolid::SolidModelclassGet(ProSolid solid,ProModelClass *model_class)
{
	return ProSolidModelclassGet(solid,model_class);
}

ProError wcProSolid::SolidModelclassSet(ProSolid solid,ProModelClass model_class)
{
	return ProSolidModelclassSet(solid,model_class);
}

