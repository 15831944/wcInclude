/*--------------  C L A S S  wcProParameter  --------

   A Wrapper Class for ProE object: ProParameter
   Created By: Michael Lucatz
   Date:       31/03/2006 23:30:00
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProParameter.h>
#include <ProParameterRWildfire.h>

class wcProParameter: public wcProObject
{
public:
	wcProParameter(void);
	~wcProParameter(void);
public:

// 	Initializes a ProParameter data structure.
ProError ParameterInit (ProModelitem *owner,ProName name,ProParameter *param);

// 	Adds the specified parameter to the database and initializes the handle.
ProError ParameterCreate (ProModelitem *owner,ProName name,ProParamvalue *proval,ProParameter *param);

// 	Adds the specified parameter to the database and initializes the handle. The parameter will be created with units.
ProError ParameterWithUnitsCreate (ProModelitem *owner,ProName name,ProParamvalue *proval,ProUnititem *units,ProParameter *param);

// 	Deletes the specified ProParameter from the database.
ProError ParameterDelete (ProParameter *param);

// 	Sets the value of an existing ProParameter.
ProError ParameterValueSet (ProParameter *param,ProParamvalue *proval);

// 	Sets the parameter value in terms of the units provided, instead ofusing the units of the owner model.
ProError ParameterScaledvalueSet (ProParameter *param,ProParamvalue *proval,ProUnititem *units);

// 	Retrieves the value of the specified ProParameter.
ProError ParameterValueGet (ProParameter *param,ProParamvalue *proval);

// 	Gets the parameter value in the units of the parameter, instead ofthe units of the owner model.
ProError ParameterScaledvalueGet (ProParameter *param,ProParamvalue *proval);

// 	Resets the value of the ProParameter to the value it hadbefore it was last set.
ProError ParameterValueReset (ProParameter *param);

//      Determines whether the specified parameter has been modified.
ProError ParameterIsModified (ProParameter *param,ProBoolean *r_is_modified);

// 	Performs a user-defined action on each parameter.
ProError ParameterVisit (ProModelitem *owner,ProParameterFilter filter,ProParameterAction action,ProAppData data);

//      Prompts the user to select one or more parameters from the parameterdialog in Pro/Engineer.
ProError ParameterSelect (ProModelitem *owner,ProMdl top_model,int context,ProBoolean select_multiple,wchar_t *button_label,ProParameter *parameter,ProParameter **multi_parameters);

//     Adds model parameters for Pro/INTRALINK.
ProError ParameterDesignationAdd (ProParameter* param);

//     Verifies the specified model parameter for Pro/INTRALINK.
ProError ParameterDesignationVerify (ProParameter* param,ProBoolean* p_exist);

//     Removes the specified model parameter for Pro/INTRALINK.
ProError ParameterDesignationRemove (ProParameter* param);

//  Gets the units assigned to a parameter.
ProError ParameterUnitsGet (ProParameter* param, ProUnititem* units);

//  Sets the units assigned to a parameter.
//ProError ParameterUnitsSet (ProParameter* param, ProUnititem* units);

//      Enables the user to select a parameter from a menu.
ProError ParameterSelectRWildfire (ProModelitem *owner,ProParameter *param);

};
