/*--------------  C L A S S  wcProAsmcomp  --------

   A Wrapper Class for ProE object: ProAsmcomp
   Created By: Michael Lucatz
   Date:       31/05/2006 17:44:14
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProAsmcomp.h>

class wcProAsmcomp: public wcProObject
{
public:
	wcProAsmcomp(void);
	~wcProAsmcomp(void);
public:

//   Returns the visibility of the specified component.
ProError AsmcompVisibilityGet (ProAsmcomppath *p_comp_path,ProSimprep *p_simp_rep,ProBoolean *p_visibility);

//  Retrieves the component model, given a component feature.
ProError AsmcompMdlGet (ProAsmcomp *p_feat_handle,ProMdl *p_mdl_handle);

//  Determines whether the specified component is a bulk item.
ProError AsmcompIsBulkitem (ProAsmcomp *p_comp_handle,ProBoolean *p_is_bulk_item);

//  Invokes the user interface to redefine component constraints.
ProError AsmcompConstrRedefUI (ProAsmcomp *p_feat_handle);

//      retrieves an array of constraints for a given Assemblycomponent.
ProError AsmcompConstraintsGet (ProAsmcomp *component,ProAsmcompconstraint **pp_constraints );

//      sets an array of constraints for a given Assembly component.
ProError AsmcompConstraintsSet (ProAsmcomppath* component_path,ProAsmcomp *component,ProAsmcompconstraint *p_constraints );

//      Frees all underlying memory of the assembly component constraint structure.
ProError AsmcompconstraintFree ( ProAsmcompconstraint constraint );

//      Frees all underlying memory of an assembly componentconstraints array.
ProError AsmcompconstraintArrayFree ( ProAsmcompconstraint* constraint_array );

//      retrieves the constraint type for the given constraint.
ProError AsmcompconstraintTypeGet ( ProAsmcompconstraint constraint,ProAsmcompConstrType *type );

//      sets the constraint type for the specified constraint.
ProError AsmcompconstraintTypeSet ( ProAsmcompconstraint constraint,ProAsmcompConstrType type );

//      retrieves the constraint references and orientations forthe given constraint.
ProError AsmcompconstraintAsmreferenceGet ( ProAsmcompconstraint constraint,ProSelection *asm_ref,ProDatumside *asm_orient);

//      sets the constraint references and orientations to thespecified constraint.
ProError AsmcompconstraintAsmreferenceSet ( ProAsmcompconstraint constraint,ProSelection asm_ref,ProDatumside asm_orient);

//      retrieves the constraint references and orientations forthe given constraint.
ProError AsmcompconstraintCompreferenceGet ( ProAsmcompconstraint constraint,ProSelection *comp_ref,ProDatumside *comp_orient);

//      sets the constraint references and orientations to thespecified constraint.
ProError AsmcompconstraintCompreferenceSet ( ProAsmcompconstraint constraint,ProSelection comp_ref,ProDatumside comp_orient);

//      retrieves the mate/align offset value for the givenconstraint.
ProError AsmcompconstraintOffsetGet ( ProAsmcompconstraint constraint,double *offset);

//      sets the mate/align offset value to the specifiedconstraint.
ProError AsmcompconstraintOffsetSet (ProAsmcompconstraint constraint,double offset);

//      retrieves the constraint attributes for the givenconstraint.
ProError AsmcompconstraintAttributesGet ( ProAsmcompconstraint constraint,int *attributes);

//      sets the constraint attributes to the specifiedconstraint.
ProError AsmcompconstraintAttributesSet ( ProAsmcompconstraint constraint ,int attributes);

//      retrieves the user data for the given constraint.
ProError AsmcompconstraintUserdataGet ( ProAsmcompconstraint constraint,wchar_t** usr_data);

//      sets the user data to the specified constraint.
ProError AsmcompconstraintUserdataSet ( ProAsmcompconstraint constraint,wchar_t* usr_data);

//      Adds a component to a specified assembly or sub-assembly atthe specified initial position.
ProError AsmcompAssemble ( ProAssembly owner_assembly,ProSolid component_model,ProMatrix init_pos,ProAsmcomp *feature );

//  Regenerates placement instructions.
ProError AsmcompRegenerate (ProAsmcomp *p_comp_handle,ProBoolean update_soft);

//  Invokes the package move interface for the specified component.
ProError AsmcompPackageMove (ProAsmcomp *p_feat_handle,ProMotionType motion_type,ProBoolean showui,ProMotionRefType motion_ref_type,ProSelection motion_ref[],int sel_sz);

//  Retrieves the name and type of the model, given thehandle to the assembly component.
ProError AsmcompMdlNameGet (ProAsmcomp *p_asm_comp_handle,ProMdlType *r_mdl_type,ProFamilyName r_mdl_name);

//  Removes a component constraint, given a handle to the assemblycomponent and the index of the constraint to remove.
ProError AsmcompConstrRemove (ProAsmcomp *p_feat_handle,int index);

//  Create a new component in the specified assembly by copyingfrom the specified model. If no model is specified, the new
ProError AsmcompCreateCopy (ProAssembly assembly,ProName comp_name,ProMdlType comp_type,ProMdl template_model,ProBoolean leave_unplaced,ProAsmcomp *p_comp_handle);

//  Determine if the specified component is unplaced.
ProError AsmcompIsUnplaced (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_unplaced);

//  Copy specified template into a model of the specified component.
ProError AsmcompFillFromMdl (ProAsmcomp *comp_handle,ProMdl template_model);

//  Determine whether the specified component is placed.
ProError AsmcompIsPlaced (ProAsmcomp *p_comp,ProBoolean *p_is_placed);

//  Set the placed flag for the specified component.
ProError AsmcompSetPlaced (ProAsmcomp *p_comp,ProBoolean p_is_placed);

//  Make a new instance of a sub-assembly, given its path.
ProError AsmcompMakeUniqueSubasm (ProAsmcomppath *p_path);

//      Remove the run-time instance of a unique sub-assembly,given its path.
ProError AsmcompRmvUniqueSubasm (ProAsmcomppath *p_path);

//  Determine whether the specified component is substituted.
ProError AsmcompIsSubstitute (ProAsmcomp *p_comp,ProBoolean *p_is_sub);

//  Determine if the specified component is packaged.
ProError AsmcompIsPackaged (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_packaged );

//  Determine if the specified component is frozen.
ProError AsmcompIsFrozen (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_frozen );

//  Determine if the specified component is underconstrained.
ProError AsmcompIsUnderconstrained(ProAsmcomp *comp_handle,ProBoolean *p_comp_is_underconstrained);

};
