#pragma once
#include "wchproobject.h"
#include <ProAsmcomp.h>


class wcProAsmcomp: public wcProObject
{
public:
	wcProAsmcomp(void)
	{
	}

	~wcProAsmcomp(void)
	{
	}

	ProError AsmcompVisibilityGet (ProAsmcomppath *p_comp_path,ProSimprep *p_simp_rep,ProBoolean *p_visibility)
	{
		return ProAsmcompVisibilityGet (p_comp_path,p_simp_rep,p_visibility);
	}

	ProError AsmcompMdlGet (ProAsmcomp *p_feat_handle,ProMdl *p_mdl_handle)
	{
		return ProAsmcompMdlGet (p_feat_handle,p_mdl_handle);
	}

	ProError AsmcompIsBulkitem (ProAsmcomp *p_comp_handle,ProBoolean *p_is_bulk_item)
	{
		return ProAsmcompIsBulkitem (p_comp_handle,p_is_bulk_item);
	}

	ProError AsmcompConstrRedefUI (ProAsmcomp *p_feat_handle)
	{
		return ProAsmcompConstrRedefUI (p_feat_handle);
	}

	ProError AsmcompConstraintsGet (ProAsmcomp *component,ProAsmcompconstraint **pp_constraints )
	{
		return ProAsmcompConstraintsGet (component,pp_constraints );
	}

	ProError AsmcompConstraintsSet (ProAsmcomppath* component_path,ProAsmcomp *component,ProAsmcompconstraint *p_constraints )
	{
		return ProAsmcompConstraintsSet (component_path,component,p_constraints );
	}

	ProError AsmcompconstraintFree ( ProAsmcompconstraint constraint )
	{
		return ProAsmcompconstraintFree ( constraint );
	}

	ProError AsmcompconstraintArrayFree ( ProAsmcompconstraint* constraint_array )
	{
		return ProAsmcompconstraintArrayFree ( constraint_array );
	}

	ProError AsmcompconstraintTypeGet ( ProAsmcompconstraint constraint,ProAsmcompConstrType *type )
	{
		return ProAsmcompconstraintTypeGet ( constraint,type );
	}

	ProError AsmcompconstraintTypeSet ( ProAsmcompconstraint constraint,ProAsmcompConstrType type )
	{
		return ProAsmcompconstraintTypeSet ( constraint,type );
	}

	ProError AsmcompconstraintAsmreferenceGet ( ProAsmcompconstraint constraint,ProSelection *asm_ref,ProDatumside *asm_orient)
	{
		return ProAsmcompconstraintAsmreferenceGet ( constraint,asm_ref,asm_orient);
	}

	ProError AsmcompconstraintAsmreferenceSet ( ProAsmcompconstraint constraint,ProSelection asm_ref,ProDatumside asm_orient)
	{
		return ProAsmcompconstraintAsmreferenceSet ( constraint,asm_ref,asm_orient);
	}

	ProError AsmcompconstraintCompreferenceGet ( ProAsmcompconstraint constraint,ProSelection *comp_ref,ProDatumside *comp_orient)
	{
		return ProAsmcompconstraintCompreferenceGet ( constraint,comp_ref,comp_orient);
	}

	ProError AsmcompconstraintCompreferenceSet ( ProAsmcompconstraint constraint,ProSelection comp_ref,ProDatumside comp_orient)
	{
		return ProAsmcompconstraintCompreferenceSet ( constraint,comp_ref,comp_orient);
	}

	ProError AsmcompconstraintOffsetGet ( ProAsmcompconstraint constraint,double *offset)
	{
		return ProAsmcompconstraintOffsetGet ( constraint,offset);
	}

	ProError AsmcompconstraintOffsetSet (ProAsmcompconstraint constraint,double offset)
	{
		return ProAsmcompconstraintOffsetSet (constraint,offset);
	}

	ProError AsmcompconstraintAttributesGet ( ProAsmcompconstraint constraint,int *attributes)
	{
		return ProAsmcompconstraintAttributesGet ( constraint,attributes);
	}

	ProError AsmcompconstraintAttributesSet ( ProAsmcompconstraint constraint ,int attributes)
	{
		return ProAsmcompconstraintAttributesSet ( constraint ,attributes);
	}

	ProError AsmcompconstraintUserdataGet ( ProAsmcompconstraint constraint,wchar_t** usr_data)
	{
		return ProAsmcompconstraintUserdataGet ( constraint,usr_data);
	}

	ProError AsmcompconstraintUserdataSet ( ProAsmcompconstraint constraint,wchar_t* usr_data)
	{
		return ProAsmcompconstraintUserdataSet ( constraint,usr_data);
	}

	ProError AsmcompAssemble ( ProAssembly owner_assembly,ProSolid component_model,ProMatrix init_pos,ProAsmcomp *feature )
	{
		return ProAsmcompAssemble ( owner_assembly,component_model,init_pos,feature );
	}

	ProError AsmcompRegenerate (ProAsmcomp *p_comp_handle,ProBoolean update_soft)
	{
		return ProAsmcompRegenerate (p_comp_handle,update_soft);
	}

	ProError AsmcompPackageMove (ProAsmcomp *p_feat_handle,ProMotionType motion_type,ProBoolean showui,ProMotionRefType motion_ref_type,ProSelection motion_ref[],int sel_sz)
	{
		return ProAsmcompPackageMove (p_feat_handle,motion_type,showui,motion_ref_type,motion_ref,sel_sz);
	}

	ProError AsmcompMdlNameGet (ProAsmcomp *p_asm_comp_handle,ProMdlType *r_mdl_type,ProFamilyName r_mdl_name)
	{
		return ProAsmcompMdlNameGet (p_asm_comp_handle,r_mdl_type,r_mdl_name);
	}

	ProError AsmcompConstrRemove (ProAsmcomp *p_feat_handle,int index)
	{
		return ProAsmcompConstrRemove (p_feat_handle,index);
	}

	ProError AsmcompCreateCopy (ProAssembly assembly,ProName comp_name,ProMdlType comp_type,ProMdl template_model,ProBoolean leave_unplaced,ProAsmcomp *p_comp_handle)
	{
		return ProAsmcompCreateCopy (assembly,comp_name,comp_type,template_model,leave_unplaced,p_comp_handle);
	}

	ProError AsmcompIsUnplaced (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_unplaced)
	{
		return ProAsmcompIsUnplaced (comp_handle,p_comp_is_unplaced);
	}

	ProError AsmcompFillFromMdl (ProAsmcomp *comp_handle,ProMdl template_model)
	{
		return ProAsmcompFillFromMdl (comp_handle,template_model);
	}

	ProError AsmcompIsPlaced (ProAsmcomp *p_comp,ProBoolean *p_is_placed)
	{
		return ProAsmcompIsPlaced (p_comp,p_is_placed);
	}

	ProError AsmcompSetPlaced (ProAsmcomp *p_comp,ProBoolean p_is_placed)
	{
		return ProAsmcompSetPlaced (p_comp,p_is_placed);
	}

	ProError AsmcompMakeUniqueSubasm (ProAsmcomppath *p_path)
	{
		return ProAsmcompMakeUniqueSubasm (p_path);
	}

	ProError AsmcompRmvUniqueSubasm (ProAsmcomppath *p_path)
	{
		return ProAsmcompRmvUniqueSubasm (p_path);
	}

	ProError AsmcompIsSubstitute (ProAsmcomp *p_comp,ProBoolean *p_is_sub)
	{
		return ProAsmcompIsSubstitute (p_comp,p_is_sub);
	}

	ProError AsmcompIsPackaged (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_packaged )
	{
		return ProAsmcompIsPackaged (comp_handle,p_comp_is_packaged );
	}

	ProError AsmcompIsFrozen (ProAsmcomp *comp_handle,ProBoolean *p_comp_is_frozen )
	{
		return ProAsmcompIsFrozen (comp_handle,p_comp_is_frozen );
	}

	ProError AsmcompIsUnderconstrained(ProAsmcomp *comp_handle,ProBoolean *p_comp_is_underconstrained)
	{
		return ProAsmcompIsUnderconstrained(comp_handle,p_comp_is_underconstrained);
	}
};