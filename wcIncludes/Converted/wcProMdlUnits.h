/*--------------  C L A S S  wcProMdlUnits  --------

   A Wrapper Class for ProE object: ProMdlUnits
   Created By: Michael Lucatz
   Date:       01/04/2006 14:03:04
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProMdlUnits.h>

class wcProMdlUnits: public wcProObject
{
public:
	wcProMdlUnits(void);
	~wcProMdlUnits(void);
public:

//  Returns the system of units type.
ProError UnitsystemTypeGet (ProUnitsystem * system,ProUnitsystemType * type);

//  Renames a system of units.
ProError UnitsystemRename (ProUnitsystem * system, ProName new_name);

//  Deletes a system of units.
ProError UnitsystemDelete (ProUnitsystem * system);

//  Identifies if a unit system is a Pro/ENGINEER standard system.
ProError UnitsystemIsStandard (ProUnitsystem * system,ProBoolean * is_standard);

//  Retrieves the systems of units available to the model.
ProError MdlUnitsystemsCollect (ProMdl mdl, ProUnitsystem ** systems);

//  Retrieves the principal system of units assigned to the model.
ProError MdlPrincipalunitsystemGet (ProMdl mdl,ProUnitsystem * principal_system);

//  Creates a new system of units in the model.
ProError MdlUnitsystemCreate (ProMdl mdl,ProUnitsystemType type,ProName name,ProUnititem* units,ProUnitsystem* new_system);

//  Returns the unit type.
ProError UnitTypeGet (ProUnititem * unit, ProUnitType * type);

//  Retrieves the conversion factor for a unit.
ProError UnitConversionGet (ProUnititem * unit,ProUnitConversion * conversion,ProUnititem * ref_unit);

//  Deletes a unit.
ProError UnitDelete (ProUnititem * unit);

//  Modifies a unit.
ProError UnitModify (ProUnititem * unit,ProUnitConversion * conversion,ProUnititem * ref_unit);

//  Renames a unit.
ProError UnitRename (ProUnititem * unit, ProName new_name);

//  Identifies if a unit is a Pro/ENGINEER standard unit.
ProError UnitIsStandard (ProUnititem * unit, ProBoolean * is_standard);

//  Retrieves the units available to the model.
ProError MdlUnitsCollect (ProMdl mdl,ProUnitType type,ProUnititem ** units);

//  Retrieves the unit used by a particular system of units.
ProError UnitsystemUnitGet (ProUnitsystem * system,ProUnitType type,ProUnititem * unit);

//  Retrieves the unit structure for a basic unit.
ProError UnitInit (ProMdl mdl,ProName unit_name,ProUnititem* unit);

//  Creates a custom unit.
ProError UnitCreate (ProMdl mdl,ProName unit_name,ProUnitConversion* conversion,ProName ref_unit,ProUnititem* new_unit);

//  Sets the current system of units assigned to the model.
ProError MdlPrincipalunitsystemSet (ProMdl mdl,ProUnitsystem* new_system,ProUnitConvertType type,ProBoolean ignore_param_units,int regeneration_flags);

};
