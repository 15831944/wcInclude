/*--------------  C L A S S  wcProParameter  --------

A Wrapper Class for ProE object: ProParameter
Created By: Michael Lucatz
Date:       31/03/2006 23:30:00
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProParameter.h>
#include <ProParameterRWildfire.h>

class wcProParameter: public wcProObject
{
public:
	wcProParameter(void)
	{
	}

	~wcProParameter(void)
	{
	}

	ProError ParameterInit (ProModelitem *owner,ProName name,ProParameter *param)
	{
		return ProParameterInit (owner,name,param);
	}

	ProError ParameterCreate (ProModelitem *owner,ProName name,ProParamvalue *proval,ProParameter *param)
	{
		return ProParameterCreate (owner,name,proval,param);
	}

	ProError ParameterWithUnitsCreate (ProModelitem *owner,ProName name,ProParamvalue *proval,ProUnititem *units,ProParameter *param)
	{
		return ProParameterWithUnitsCreate (owner,name,proval,units,param);
	}

	ProError ParameterDelete (ProParameter *param)
	{
		return ProParameterDelete (param);
	}

	ProError ParameterSelectRWildfire (ProModelitem *owner,ProParameter *param)
	{
		return ProParameterSelectRWildfire (owner,param);
	}
	ProError ParameterValueSet (ProParameter *param,ProParamvalue *proval)
	{
		return ProParameterValueSet (param,proval);
	}

	ProError ParameterScaledvalueSet (ProParameter *param,ProParamvalue *proval,ProUnititem *units)
	{
		return ProParameterScaledvalueSet (param,proval,units);
	}

	ProError ParameterValueGet (ProParameter *param,ProParamvalue *proval)
	{
		return ProParameterValueGet (param,proval);
	}

	ProError ParameterScaledvalueGet (ProParameter *param,ProParamvalue *proval)
	{
		return ProParameterScaledvalueGet (param,proval);
	}

	ProError ParameterValueReset (ProParameter *param)
	{
		return ProParameterValueReset (param);
	}

	ProError ParameterIsModified (ProParameter *param,ProBoolean *r_is_modified)
	{
		return ProParameterIsModified (param,r_is_modified);
	}

	ProError ParameterVisit (ProModelitem *owner,ProParameterFilter filter,ProParameterAction action,ProAppData data)
	{
		return ProParameterVisit (owner,filter,action,data);
	}

	ProError ParameterSelect (ProModelitem *owner,ProMdl top_model,int context,ProBoolean select_multiple,wchar_t *button_label,ProParameter *parameter,ProParameter **multi_parameters)
	{
		return ProParameterSelect (owner,top_model,context,select_multiple,button_label,parameter,multi_parameters);
	}

	ProError ParameterDesignationAdd (ProParameter* param)
	{
		return ProParameterDesignationAdd (param);
	}

	ProError ParameterDesignationVerify (ProParameter* param,ProBoolean* p_exist)
	{
		return ProParameterDesignationVerify (param,p_exist);
	}

	ProError ParameterDesignationRemove (ProParameter* param)
	{
		return ProParameterDesignationRemove (param);
	}

	ProError ParameterUnitsGet (ProParameter* param, ProUnititem* units)
	{
		return ProParameterUnitsGet (param, units);
	}

	/*
	ProError ParameterUnitsSet (ProParameter* param, ProUnititem* units)
	{
		return ProParameterUnitsSet (param, units);
	}
	*/
};