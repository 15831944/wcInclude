
/*--------------  C L A S S  wcProFeature  --------

   A Wrapper Class for ProE object: ProFeature
   Created By: Michael Lucatz
   Date:       31/05/2006 17:38:11
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProFeature.h>

class wcProFeature : public wcProObject
{
public:
wcProFeature(void)
{
}

~wcProFeature(void)
{
}

ProError FeatureInit (ProSolid p_owner_handle,int feat_id,ProFeature *p_feat_handle)
{
	return ProFeatureInit (p_owner_handle,feat_id,p_feat_handle);
}

ProError FeatureSolidGet (ProFeature *p_feat_handle,ProSolid *p_mdl_handle)
{
	return ProFeatureSolidGet (p_feat_handle,p_mdl_handle);
}

ProError FeatureCreate (ProSelection model,ProElement elemtree,ProFeatureCreateOptions options[],int num_opts,ProFeature *p_feature,ProErrorlist *p_errors)
{
	return ProFeatureCreate (model,elemtree,options,num_opts,p_feature,p_errors);
}

ProError FeatureRedefine (ProAsmcomppath *comp_path,ProFeature *feature,ProElement elemtree,ProFeatureCreateOptions options[],int num_opts,ProErrorlist *p_errors)
{
	return ProFeatureRedefine (comp_path,feature,elemtree,options ,num_opts,p_errors);
}

ProError FeatureElemtreeSet (ProAsmcomppath *comp_path,ProFeature *feature,ProElement elem_tree,ProErrorlist *p_errors)
{
	return ProFeatureElemtreeSet (comp_path,feature,elem_tree,p_errors);
}

ProError FeatureDelete (ProSolid solid,int *feat_ids,int feat_count,ProFeatureDeleteOptions *delete_opts,int num_opts)
{
	return ProFeatureDelete (solid,feat_ids,feat_count,delete_opts,num_opts);
}

ProError FeatureSuppress (ProSolid solid,int *feat_ids,int feat_count,ProFeatureDeleteOptions *suppress_opts,int num_opts)
{
	return ProFeatureSuppress (solid,feat_ids,feat_count,suppress_opts,num_opts);
}

ProError FeatureResume (ProSolid solid,int *feat_ids,int feat_count,ProFeatureResumeOptions *resume_opts,int num_opts)
{
	return ProFeatureResume (solid,feat_ids,feat_count,resume_opts,num_opts);
}

ProError FeatureGeomitemVisit (ProFeature *p_feat_handle,ProType item_type,ProGeomitemAction action,ProGeomitemFilter filter,ProAppData app_data)
{
	return ProFeatureGeomitemVisit (p_feat_handle,item_type,action,filter,app_data);
}

ProError FeatureParentsGet (ProFeature *p_feat_handle,int **p_parents,int *p_count)
{
	return ProFeatureParentsGet (p_feat_handle,p_parents,p_count);
}

ProError FeatureChildrenGet (ProFeature *p_feat_handle,int **p_children,int *p_count)
{
	return ProFeatureChildrenGet (p_feat_handle,p_children,p_count);
}

ProError FeatureStatusGet (ProFeature *p_feat_handle,ProFeatStatus *p_status)
{
	return ProFeatureStatusGet (p_feat_handle,p_status);
}

ProError FeatureIsIncomplete ( ProFeature *p_feat_handle,ProBoolean *p_is_incomplete)
{
	return ProFeatureIsIncomplete ( p_feat_handle,p_is_incomplete);
}

ProError FeaturePatternStatusGet ( ProFeature *p_feat_handle,ProPatternStatus *p_pattern_status)
{
	return ProFeaturePatternStatusGet ( p_feat_handle,p_pattern_status);
}

ProError FeatureGroupStatusGet (ProFeature *p_feat_handle,ProGroupStatus *p_group_status)
{
	return ProFeatureGroupStatusGet (p_feat_handle,p_group_status);
}

ProError FeatureGrppatternStatusGet (ProFeature *p_feat_handle,ProGrppatternStatus *p_grp_pattern_status)
{
	return ProFeatureGrppatternStatusGet (p_feat_handle,p_grp_pattern_status);
}

ProError FeatureVisibilityGet (ProFeature *p_feat_handle,ProBoolean *p_visible)
{
	return ProFeatureVisibilityGet (p_feat_handle,p_visible);
}

ProError FeatureTypeGet (ProFeature *p_feat_handle,ProFeattype *p_type)
{
	return ProFeatureTypeGet (p_feat_handle,p_type);
}

ProError FeatureSubtypeGet (ProFeature *feature,ProLine subtype)
{
	return ProFeatureSubtypeGet (feature,subtype);
}

ProError FeatureTypenameGet ( ProFeature *feature,ProName feattypename)
{
	return ProFeatureTypenameGet ( feature,feattypename);
}

ProError FeatureSelectionGet (ProFeature *p_feature,ProSelection *p_selection)
{
	return ProFeatureSelectionGet (p_feature,p_selection);
}

ProError FeatureAnalysisGet( ProFeature *feature,ProAnalysis *analysis)
{
	return ProFeatureAnalysisGet( feature,analysis);
}

ProError FeatureElemtreeCreate (ProFeature *feature,ProElement *p_elem)
{
	return ProFeatureElemtreeCreate (feature,p_elem);
}

ProError FeatureElemValueGet (ProFeature *feature,ProElempath elempath,ProValue *p_elemvalue )
{
	return ProFeatureElemValueGet (feature,elempath,p_elemvalue );
}

ProError FeatureElemValuesGet (ProFeature *feature,ProElempath elempath,ProValue **p_elemvalues )
{
	return ProFeatureElemValuesGet (feature,elempath,p_elemvalues );
}

ProError FeatureElemDimensionIdGet (ProFeature *feature,ProElempath elempath,int *p_dimension_id)
{
	return ProFeatureElemDimensionIdGet (feature,elempath,p_dimension_id);
}

ProError FeatureElemIsVisible ( ProFeature *feature,ProElempath elempath,ProBool *p_isvisible )
{
	return ProFeatureElemIsVisible ( feature,elempath,p_isvisible );
}

ProError FeatureElemIsIncomplete ( ProFeature *feature,ProElempath elempath,ProBool *p_isincomplete )
{
	return ProFeatureElemIsIncomplete ( feature,elempath,p_isincomplete );
}

ProError FeatureParamsDisplay (ProSelection feature_sel,ProParamType param_type)
{
	return ProFeatureParamsDisplay (feature_sel,param_type);
}

ProError FeatureNumSectionsGet (ProFeature *feat_handle,int *p_n_sections)
{
	return ProFeatureNumSectionsGet (feat_handle,p_n_sections);
}

ProError FeatureSectionCopy (ProFeature *feat_handle,int section_number,ProSection *p_section)
{
	return ProFeatureSectionCopy (feat_handle,section_number,p_section);
}

ProError FeatureVerstampGet (ProFeature *feat_handle,ProWVerstamp *p_stamp)
{
	return ProFeatureVerstampGet (feat_handle,p_stamp);
}

ProError FeatureNumberGet (ProFeature *p_feat_handle,int *r_feat_num)
{
	return ProFeatureNumberGet (p_feat_handle,r_feat_num);
}

ProError FeatureReorder (ProSolid solid,int *feat_ids,int n_feats,int new_feat_num)
{
	return ProFeatureReorder (solid,feat_ids,n_feats,new_feat_num);
}

ProError FeatureReadonlySet (ProFeature *p_last_feat)
{
	return ProFeatureReadonlySet (p_last_feat);
}

ProError FeatureIsReadonly (ProFeature *p_feat_handle,ProBoolean *r_is_read_only)
{
	return ProFeatureIsReadonly (p_feat_handle,r_is_read_only);
}

ProError FeatureReadonlyUnset (ProSolid solid)
{
	return ProFeatureReadonlyUnset (solid);
}

ProError FeatureInsertModeActivate (ProFeature *p_last_feat)
{
	return ProFeatureInsertModeActivate (p_last_feat);
}

ProError InsertModeIsActive (ProSolid solid,ProBoolean *p_is_active)
{
	return ProInsertModeIsActive (solid,p_is_active);
}

ProError InsertModeCancel (ProSolid solid,ProBoolean resume)
{
	return ProInsertModeCancel (solid,resume);
}

ProError FeatureHasGeomchks (ProFeature *p_feat_handle,ProBoolean *p_has_gerrs )
{
	return ProFeatureHasGeomchks (p_feat_handle,p_has_gerrs );
}

ProError FeatureDimensionVisit (ProFeature *feature,ProDimensionVisitAction visit,ProDimensionFilterAction filter,ProAppData data)
{
	return ProFeatureDimensionVisit (feature,visit,filter,data);
}

ProError FeatureCopyinfoGet (ProFeature* feature,ProFeatureCopyType* copy_type,ProFeatureCopyDependency* dependency,ProFeature* source_feature,ProFeature** also_copied)
{
	return ProFeatureCopyinfoGet (feature,copy_type,dependency,source_feature,also_copied);
}

ProError FeatureSketchAdd( ProFeature *incomplete_feature,ProSelection selection,int section_number )
{
	return ProFeatureSketchAdd( incomplete_feature,selection,section_number );
}

ProError FeatureSketchedCreate ( ProSelection model,ProElement elemtree,ProFeatureCreateOptions *options,int num_opts,ProSelection *sketch_array,ProFeature *p_feature,ProErrorlist *p_errors )
{
	return ProFeatureSketchedCreate ( model,elemtree,options,num_opts,sketch_array,p_feature,p_errors );
}

ProError FeatureDtlsyminstGet (ProFeature *symbol_owner,ProDrawing drawing,ProDtlsyminst *symbol_instance)
{
	return ProFeatureDtlsyminstGet (symbol_owner,drawing,symbol_instance);
}

ProError FeatureAsmintersectionsCollect (ProFeature* feat,ProFeatintersection** p_intersection_array)
{
	return ProFeatureAsmintersectionsCollect (feat,p_intersection_array);
}

ProError FeatintersectionDataGet (ProFeatintersection p_intersection,ProAsmcomppath* p_component,int* p_level,int* p_feat_id)
{
	return ProFeatintersectionDataGet (p_intersection,p_component,p_level,p_feat_id);
}

ProError FeatintersectionProarrayFree (ProFeatintersection* p_intersection_array)
{
	return ProFeatintersectionProarrayFree (p_intersection_array);
}

ProError FeatintersectionTypeGet (ProFeatintersection p_intersection,ProFeatIntersectionType* p_type)
{
	return ProFeatintersectionTypeGet (p_intersection,p_type);
}

};