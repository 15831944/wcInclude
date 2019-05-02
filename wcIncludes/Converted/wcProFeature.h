/*--------------  C L A S S  wcProFeature  --------

   A Wrapper Class for ProE object: ProFeature
   Created By: Michael Lucatz
   Date:       31/05/2006 17:38:11
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProFeature.h>

class wcProFeature: public wcProObject
{
public:
	wcProFeature(void);
	~wcProFeature(void);
public:

//  Initializes the ProFeature handle.
ProError FeatureInit (ProSolid p_owner_handle,int feat_id,ProFeature *p_feat_handle);

//  Retrieves the solid owner of the feature.
ProError FeatureSolidGet (ProFeature *p_feat_handle,ProSolid *p_mdl_handle);

// Creates a feature from the element tree.
ProError FeatureCreate (ProSelection model,ProElement elemtree,ProFeatureCreateOptions options[],int num_opts,ProFeature *p_feature,ProErrorlist *p_errors);

// Redefines the feature from the element tree.
ProError FeatureRedefine (ProAsmcomppath *comp_path,ProFeature *feature,ProElement elemtree,ProFeatureCreateOptions options[],int num_opts,ProErrorlist *p_errors);

//  <B>NOTE:</B><p>
ProError FeatureElemtreeSet (ProAsmcomppath *comp_path,ProFeature *feature,ProElement elem_tree,ProErrorlist *p_errors);

//  Deletes the specified features from the solid.
ProError FeatureDelete (ProSolid solid,int *feat_ids,int feat_count,ProFeatureDeleteOptions *delete_opts,int num_opts);

//  Suppresses the specified features in the solid.
ProError FeatureSuppress (ProSolid solid,int *feat_ids,int feat_count,ProFeatureDeleteOptions *suppress_opts,int num_opts);

//  Resumes the specified features in the solid.
ProError FeatureResume (ProSolid solid,int *feat_ids,int feat_count,ProFeatureResumeOptions *resume_opts,int num_opts);

//  Visits all the geometry items created by the specified feature.
ProError FeatureGeomitemVisit (ProFeature *p_feat_handle,ProType item_type,ProGeomitemAction action,ProGeomitemFilter filter,ProAppData app_data);

//  Collects and returns all the parents of the specified feature.
ProError FeatureParentsGet (ProFeature *p_feat_handle,int **p_parents,int *p_count);

//  Collects and returns all the children of the specified feature.
ProError FeatureChildrenGet (ProFeature *p_feat_handle,int **p_children,int *p_count);

//  Retrieves the status of the specified feature (active, suppressed,and so on).
ProError FeatureStatusGet (ProFeature *p_feat_handle,ProFeatStatus *p_status);

//   Determines whether the specified feature is incomplete.
ProError FeatureIsIncomplete ( ProFeature *p_feat_handle,ProBoolean *p_is_incomplete);

//  Retrieves the pattern status of the specified feature.
ProError FeaturePatternStatusGet ( ProFeature *p_feat_handle,ProPatternStatus *p_pattern_status);

//  Retrieves the group status of the specified feature.
ProError FeatureGroupStatusGet (ProFeature *p_feat_handle,ProGroupStatus *p_group_status);

//  Retrieves the group pattern status of the specified feature.
ProError FeatureGrppatternStatusGet (ProFeature *p_feat_handle,ProGrppatternStatus *p_grp_pattern_status);

//  Verifies whether the specified feature is visible.
ProError FeatureVisibilityGet (ProFeature *p_feat_handle,ProBoolean *p_visible);

//  Retrieves the type of the specified feature.
ProError FeatureTypeGet (ProFeature *p_feat_handle,ProFeattype *p_type);

//  Retrieves the subtype of the specified feature.
ProError FeatureSubtypeGet (ProFeature *feature,ProLine subtype);

//  Retrieves the type name of the specified feature.
ProError FeatureTypenameGet ( ProFeature *feature,ProName feattypename);

//  Retrieves reference information for a feature created in Assemblymode.
ProError FeatureSelectionGet (ProFeature *p_feature,ProSelection *p_selection);

// Gets the analysis object associated with an analysis feature.
ProError FeatureAnalysisGet( ProFeature *feature,ProAnalysis *analysis);

// Creates a copy of the feature element tree.
ProError FeatureElemtreeCreate (ProFeature *feature,ProElement *p_elem);

// Retrieves a single element value from the specified feature.
ProError FeatureElemValueGet (ProFeature *feature,ProElempath elempath,ProValue *p_elemvalue );

// Retrieves the element values from the specified feature.
ProError FeatureElemValuesGet (ProFeature *feature,ProElempath elempath,ProValue **p_elemvalues );

// Retrieves the dimension identifier of the specified element. Note that
ProError FeatureElemDimensionIdGet (ProFeature *feature,ProElempath elempath,int *p_dimension_id);

// Determines whether the element specified by the elempath
ProError FeatureElemIsVisible ( ProFeature *feature,ProElempath elempath,ProBool *p_isvisible );

// Determines whether the element specified by the elempath
ProError FeatureElemIsIncomplete ( ProFeature *feature,ProElempath elempath,ProBool *p_isincomplete );

//   Displays the same parameters shown by Pro/ENGINEER when youmodify a feature.
ProError FeatureParamsDisplay (ProSelection feature_sel,ProParamType param_type);

//   Returns the number of sections owned by the specifiedfeature.
ProError FeatureNumSectionsGet (ProFeature *feat_handle,int *p_n_sections);

//   Returns the copy of the requested section of thefeature.
ProError FeatureSectionCopy (ProFeature *feat_handle,int section_number,ProSection *p_section);

//   Retrieves the version stamp of the specified feature.
ProError FeatureVerstampGet (ProFeature *feat_handle,ProWVerstamp *p_stamp);

//   Returns the regeneration sequence number of a feature.
ProError FeatureNumberGet (ProFeature *p_feat_handle,int *r_feat_num);

//   Reorders the supplied set of features such that the locationof the first feature will be the new_feat_num after
ProError FeatureReorder (ProSolid solid,int *feat_ids,int n_feats,int new_feat_num);

//   Makes all the features up to the specified feature read only.
ProError FeatureReadonlySet (ProFeature *p_last_feat);

//   Determines whether the specified feature is read only.
ProError FeatureIsReadonly (ProFeature *p_feat_handle,ProBoolean *r_is_read_only);

//   Removes the read-only setting of all the features owned by thespecified solid.
ProError FeatureReadonlyUnset (ProSolid solid);

//   Activates insert mode such that the specified featurebecomes the last feature.
ProError FeatureInsertModeActivate (ProFeature *p_last_feat);

//   Determines whether insert mode is active in the specified partor assembly.
ProError InsertModeIsActive (ProSolid solid,ProBoolean *p_is_active);

//   Cancels insert mode in the specified part or assembly.
ProError InsertModeCancel (ProSolid solid,ProBoolean resume);

//   Determines whether the specified feature in apart or assembly has geometry check items.
ProError FeatureHasGeomchks (ProFeature *p_feat_handle,ProBoolean *p_has_gerrs );

//  Visits dimensions belonging to the feature.
ProError FeatureDimensionVisit (ProFeature *feature,ProDimensionVisitAction visit,ProDimensionFilterAction filter,ProAppData data);

//    Retrieves information about a copied feature.
ProError FeatureCopyinfoGet (ProFeature* feature,ProFeatureCopyType* copy_type,ProFeatureCopyDependency* dependency,ProFeature* source_feature,ProFeature** also_copied);

// Copies section from a sketched datum curve specified by selection
ProError FeatureSketchAdd( ProFeature *incomplete_feature,ProSelection selection,int section_number );

// Creates a feature from the element tree and copies sketch(es) from
ProError FeatureSketchedCreate ( ProSelection model,ProElement elemtree,ProFeatureCreateOptions *options,int num_opts,ProSelection *sketch_array,ProFeature *p_feature,ProErrorlist *p_errors );

//  Return the detail symbol instance that represents a shown solid modelsymbol.
ProError FeatureDtlsyminstGet (ProFeature *symbol_owner,ProDrawing drawing,ProDtlsyminst *symbol_instance);

//  Collects and returns all the intersectionsof the assembly feature.
ProError FeatureAsmintersectionsCollect (ProFeature* feat,ProFeatintersection** p_intersection_array);

//  Returns the component intersected by the assembly feature,visibility level and id of the feature on intersected part.
ProError FeatintersectionDataGet (ProFeatintersection p_intersection,ProAsmcomppath* p_component,int* p_level,int* p_feat_id);

//  Frees the memory owned by a feature intersections ProArray.
ProError FeatintersectionProarrayFree (ProFeatintersection* p_intersection_array);

//  Returns the type of geometry created by the assembly feature intersection.
ProError FeatintersectionTypeGet (ProFeatintersection p_intersection,ProFeatIntersectionType* p_type);

};
