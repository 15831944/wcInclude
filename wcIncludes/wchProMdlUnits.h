/*--------------  C L A S S  wcProMdlUnits  --------

   A Wrapper Class for ProE object: ProMdlUnits
   Created By: Michael Lucatz
   Date:       01/04/2006 14:03:04
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProMdlUnits.h>

class wcProMdlUnits: public wcProObject
{
public:

	wcProMdlUnits::wcProMdlUnits(void)
	{
	}

	wcProMdlUnits::~wcProMdlUnits(void)
	{
	}

	ProError wcProMdlUnits::UnitsystemTypeGet (ProUnitsystem * system,ProUnitsystemType * type)
	{
		return ProUnitsystemTypeGet (system, type);
	}

	ProError wcProMdlUnits::UnitsystemRename (ProUnitsystem * system, ProName new_name)
	{
		return ProUnitsystemRename (system, new_name);
	}

	ProError wcProMdlUnits::UnitsystemDelete (ProUnitsystem * system)
	{
		return ProUnitsystemDelete (system);
	}

	ProError wcProMdlUnits::UnitsystemIsStandard (ProUnitsystem * system,ProBoolean * is_standard)
	{
		return ProUnitsystemIsStandard (system, is_standard);
	}

	ProError wcProMdlUnits::MdlUnitsystemsCollect (ProMdl mdl, ProUnitsystem ** systems)
	{
		return ProMdlUnitsystemsCollect (mdl, systems);
	}

	ProError wcProMdlUnits::MdlPrincipalunitsystemGet (ProMdl mdl,ProUnitsystem * principal_system)
	{
		return ProMdlPrincipalunitsystemGet (mdl, principal_system);
	}

	ProError wcProMdlUnits::MdlUnitsystemCreate (ProMdl mdl,ProUnitsystemType type,ProName name,ProUnititem* units,ProUnitsystem* new_system)
	{
		return ProMdlUnitsystemCreate (mdl,type,name,units,new_system);
	}

	ProError wcProMdlUnits::UnitTypeGet (ProUnititem * unit, ProUnitType * type)
	{
		return ProUnitTypeGet ( unit,  type);
	}

	ProError wcProMdlUnits::UnitConversionGet (ProUnititem * unit,ProUnitConversion * conversion,ProUnititem * ref_unit)
	{
		return ProUnitConversionGet (unit, conversion, ref_unit);
	}

	ProError wcProMdlUnits::UnitDelete (ProUnititem * unit)
	{
		return ProUnitDelete (unit);
	}

	ProError wcProMdlUnits::UnitModify (ProUnititem * unit,ProUnitConversion * conversion,ProUnititem * ref_unit)
	{
		return ProUnitModify ( unit, conversion,  ref_unit);
	}

	ProError wcProMdlUnits::UnitRename (ProUnititem * unit, ProName new_name)
	{
		return ProUnitRename ( unit, new_name);
	}

	ProError wcProMdlUnits::UnitIsStandard (ProUnititem * unit, ProBoolean * is_standard)
	{
		return ProUnitIsStandard (unit, is_standard);
	}

	ProError wcProMdlUnits::MdlUnitsCollect (ProMdl mdl,ProUnitType type,ProUnititem ** units)
	{
		return ProMdlUnitsCollect (mdl,type, units);
	}

	ProError wcProMdlUnits::UnitsystemUnitGet (ProUnitsystem * system,ProUnitType type,ProUnititem * unit)
	{
		return ProUnitsystemUnitGet ( system,type, unit);
	}

	ProError wcProMdlUnits::UnitInit (ProMdl mdl,ProName unit_name,ProUnititem* unit)
	{
		return ProUnitInit (mdl,unit_name,unit);
	}

	ProError wcProMdlUnits::UnitCreate (ProMdl mdl,ProName unit_name,ProUnitConversion* conversion,ProName ref_unit,ProUnititem* new_unit)
	{
		return ProUnitCreate (mdl,unit_name,conversion,ref_unit,new_unit);
	}

	ProError wcProMdlUnits::MdlPrincipalunitsystemSet (ProMdl mdl,ProUnitsystem* new_system,ProUnitConvertType type,ProBoolean ignore_param_units,int regeneration_flags)
	{
		return ProMdlPrincipalunitsystemSet (mdl,new_system,type,ignore_param_units,regeneration_flags);
	}

};