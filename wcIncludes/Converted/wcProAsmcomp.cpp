#include "wcProAsmcomp.h"

wcProAsmcomp::wcProAsmcomp(void)
{
}

wcProAsmcomp::~wcProAsmcomp(void)
{
}

ProError wcProAsmcomp::AsmcompVisibilityGet (ProAsmcomppath *p_comp_path,ProSimprep *p_simp_rep,ProBoolean *p_visibility)
{
	return ProAsmcompVisibilityGet (p_comp_path,p_simp_rep,p_visibility);
}

ProError wcProAsmcomp::AsmcompMdlGet (ProAsmcomp *p_feat_handle,ProMdl *p_mdl_handle)
{
	return ProAsmcompMdlGet (p_feat_handle,p_mdl_handle);
}

ProError wcProAsmcomp::AsmcompIsBulkitem (ProAsmcomp *p_comp_handle,ProBoolean *p_is_bulk_item)
{
	return ProAsmcompIsBulkitem (p_comp_handle,p_is_bulk_item);
}

ProError wcProAsmcomp::AsmcompConstrRedefUI (ProAsmcomp *p_feat_handle)
{
	return ProAsmcompConstrRedefUI (p_feat_handle);
}

ProError wcProAsmcomp::AsmcompConstraintsGet (ProAsmcomp *component,ProAsmcompconstraint **pp_constraints )
{
	return ProAsmcompConstraintsGet (component,pp_constraints );
}

ProError wcProAsmcomp::AsmcompConstraintsSet (ProAsmcomppath* component_path,ProAsmcomp *component,ProAsmcompconstraint *p_constraints )
{
	return ProAsmcompConstraintsSet (component_path,component,p_constraints );
}

ProError wcProAsmcomp::AsmcompconstraintFree ( ProAsmcompconstraint constraint )
{
	return ProAsmcompconstraintFree ( constraint );
}

ProError wcProAsmcomp::AsmcompconstraintArrayFree ( ProAsmcompconstraint* constraint_array )
{
	return ProAsmcompconstraintArrayFree ( constraint_array );
}

ProError wcProAsmcomp::AsmcompconstraintTypeGet ( ProAsmcompconstraint constraint,ProAsmcompConstrType *type )
{
	return ProAsmcompconstraintTypeGet ( constraint,type );
}

ProError wcProAsmcomp::AsmcompconstraintTypeSet ( ProAsmcompconstraint constraint,ProAsmcompConstrType type )
{
	return ProAsmcompconstraintTypeSet ( constraint,type );
}

ProError wcProAsmcomp::AsmcompconstraintAsmreferenceGet ( ProAsmcompconstraint constraint,ProSelection *asm_ref,ProDatumside *asm_orient)
{
	return ProAsmcompconstraintAsmreferenceGet ( constraint,asm_ref,asm_orient);
}

ProError wcProAsmcomp::AsmcompconstraintAsmreferenceSet ( ProAsmcompconstraint constraint,ProSelection asm_ref,ProDatumside asm_orient)
{
	return ProAsmcompconstraintAsmreferenceSet ( constraint,asm_ref,asm_orient);
}

ProError wcProAsmcomp::AsmcompconstraintCompreferenceGet ( ProAsmcompconstraint constraint,ProSelection *comp_ref,ProDatumside *comp_orient)
{
	return ProAsmcompconstraintCompreferenceGet ( constraint,comp_ref,comp_orient);
}

ProError wcProAsmcomp::AsmcompconstraintCompreferenceSet ( ProAsmcompconstraint constraint,ProSelection comp_ref,ProDatumside comp_orient)
{
	return ProAsmcompconstraintCompreferenceSet ( constraint,comp_ref,comp_orient);
}

ProError wcProAsmcomp::AsmcompconstraintOffsetGet ( ProAsmcompconstraint constraint,double *offset)
{
	return ProAsmcompconstraintOffsetGet ( constraint,offset);
}

ProError wcProAsmcomp::AsmcompconstraintOffsetSet (ProAsmcompconstraint constraint,double offset)
{
	return ProAsmcompconstraintOffsetSet (constraint,offset);
}

ProError wcProAsmcomp::AsmcompconstraintAttributesGet ( ProAsmcompconstraint constraint,int *attributes)
{
	return ProAsmcompconstraintAttributesGet ( constraint,attributes);
}

ProError wcProAsmcomp::AsmcompconstraintAttributesSet ( ProAsmcompconstraint constraint ,int attributes)
{
	return ProAsmcompconstraintAttributesSet ( constraint ,attributes);
}

ProError wcProAsmcomp::AsmcompconstraintUserdataGet ( ProAsmcompconstraint constraint,wchar_t** usr_data)
{
	return ProAsmcompconstraintUserdataGet ( constraint,usr_data);
}

ProError wcProAsmcomp::AsmcompconstraintUserdataSet ( ProAsmcompconstraint constraint,wchar_t* usr_data)
{
	return ProAsmcompconstraintUserdataSet ( constraint,usr_data);
}

ProError wcProAsmcomp::AsmcompAssemble ( ProAssembly owner_assembly,ProSolid component_model,ProMatrix init_pos,ProAsmcomp *feature )
{
	return ProAsmcompAssemble ( owner_assembly,component_model,init_pos,feature );
}

ProError wcProAsmcomp::AsmcompRegenerate (ProAsmcomp *p_comp_handle,ProBoolean update_soft)
{
	return ProAsmcompRegenerate (p_comp_handle,update_soft);
}

ProError wcProAsmcomp::AsmcompPackageMove (ProAsmcomp *p_feat_handle,ProMotionType motion_type,ProBoolean showui,ProMotionRefType motion_ref_type,ProSelection motion_ref[],int sel_sz)
{
	return ProAsmcompPackageMove (p_feat_handle,motion_type,showui,motion_ref_type,motion_ref,sel_sz);
}

ProError wcProAsmcomp::AsmcompMdlNameGet (ProAsmcomp *p_asm_comp_handle,ProMdlType *r_mdl_type,ProFamilyName r_mdl_name)
{
	return ProAsmcompMdlNameGet (p_asm_comp_handle,r_mdl_type,r_mdl_name);
}

ProError wcProAsmcomp::AsmcompConstrRemove (ProAsmcomp *p_feat_handle,int index)
{
	return ProAsmcompConstrRemove (p_feat_handle,index);
}

ProError wcProAsmcomp::AsmcompCreateCopy (ProAssembly assembly,ProName comp_name,ProMdlType comp_type,ProMdl template_model,ProBoolean leave_unplaced,ProAsmcomp *p_comp_handle)
{
	return ProAsmcompCreateCopy (assembly,comp_name,comp_type,template_model,leave_unplaced,p_comp_handle);
}

ProError wcProAsmcomp::AsmcompIsUnplaced (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_unplaced)
{
	return ProAsmcompIsUnplaced (comp_handle,p_comp_is_unplaced);
}

ProError wcProAsmcomp::AsmcompFillFromMdl (ProAsmcomp *comp_handle,ProMdl template_model)
{
	return ProAsmcompFillFromMdl (comp_handle,template_model);
}

ProError wcProAsmcomp::AsmcompIsPlaced (ProAsmcomp *p_comp,ProBoolean *p_is_placed)
{
	return ProAsmcompIsPlaced (p_comp,p_is_placed);
}

ProError wcProAsmcomp::AsmcompSetPlaced (ProAsmcomp *p_comp,ProBoolean p_is_placed)
{
	return ProAsmcompSetPlaced (p_comp,p_is_placed);
}

ProError wcProAsmcomp::AsmcompMakeUniqueSubasm (ProAsmcomppath *p_path)
{
	return ProAsmcompMakeUniqueSubasm (p_path);
}

ProError wcProAsmcomp::AsmcompRmvUniqueSubasm (ProAsmcomppath *p_path)
{
	return ProAsmcompRmvUniqueSubasm (p_path);
}

ProError wcProAsmcomp::AsmcompIsSubstitute (ProAsmcomp *p_comp,ProBoolean *p_is_sub)
{
	return ProAsmcompIsSubstitute (p_comp,p_is_sub);
}

ProError wcProAsmcomp::AsmcompIsPackaged (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_packaged )
{
	return ProAsmcompIsPackaged (comp_handle,p_comp_is_packaged );
}

ProError wcProAsmcomp::AsmcompIsFrozen (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_frozen )
{
	return ProAsmcompIsFrozen (comp_handle,p_comp_is_frozen );
}

ProError wcProAsmcomp::AsmcompIsUnderconstrained(ProAsmcomp *comp_handle,ProBoolean *p_comp_is_underconstrained)
{
	return ProAsmcompIsUnderconstrained(comp_handle,p_comp_is_underconstrained);
}

