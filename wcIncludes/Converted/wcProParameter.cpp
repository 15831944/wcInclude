#include "wcProParameter.h"

wcProParameter::wcProParameter(void)
{
}

wcProParameter::~wcProParameter(void)
{
}

ProError wcProParameter::ParameterInit (ProModelitem *owner,ProName name,ProParameter *param)
{
	return ProParameterInit (owner,name,param);
}

ProError wcProParameter::ParameterCreate (ProModelitem *owner,ProName name,ProParamvalue *proval,ProParameter *param)
{
	return ProParameterCreate (owner,name,proval,param);
}

ProError wcProParameter::ParameterWithUnitsCreate (ProModelitem *owner,ProName name,ProParamvalue *proval,ProUnititem *units,ProParameter *param)
{
	return ProParameterWithUnitsCreate (owner,name,proval,units,param);
}

ProError wcProParameter::ParameterDelete (ProParameter *param)
{
	return ProParameterDelete (param);
}

ProError wcProParameter::ParameterSelectRWildfire (ProModelitem *owner,ProParameter *param)
{
	return ProParameterSelectRWildfire (owner,param);
}
ProError wcProParameter::ParameterValueSet (ProParameter *param,ProParamvalue *proval)
{
	return ProParameterValueSet (param,proval);
}

ProError wcProParameter::ParameterScaledvalueSet (ProParameter *param,ProParamvalue *proval,ProUnititem *units)
{
	return ProParameterScaledvalueSet (param,proval,units);
}

ProError wcProParameter::ParameterValueGet (ProParameter *param,ProParamvalue *proval)
{
	return ProParameterValueGet (param,proval);
}

ProError wcProParameter::ParameterScaledvalueGet (ProParameter *param,ProParamvalue *proval)
{
	return ProParameterScaledvalueGet (param,proval);
}

ProError wcProParameter::ParameterValueReset (ProParameter *param)
{
	return ProParameterValueReset (param);
}

ProError wcProParameter::ParameterIsModified (ProParameter *param,ProBoolean *r_is_modified)
{
	return ProParameterIsModified (param,r_is_modified);
}

ProError wcProParameter::ParameterVisit (ProModelitem *owner,ProParameterFilter filter,ProParameterAction action,ProAppData data)
{
	return ProParameterVisit (owner,filter,action,data);
}

ProError wcProParameter::ParameterSelect (ProModelitem *owner,ProMdl top_model,int context,ProBoolean select_multiple,wchar_t *button_label,ProParameter *parameter,ProParameter **multi_parameters)
{
	return ProParameterSelect (owner,top_model,context,select_multiple,button_label,parameter,multi_parameters);
}

ProError wcProParameter::ParameterDesignationAdd (ProParameter* param)
{
	return ProParameterDesignationAdd (param);
}

ProError wcProParameter::ParameterDesignationVerify (ProParameter* param,ProBoolean* p_exist)
{
	return ProParameterDesignationVerify (param,p_exist);
}

ProError wcProParameter::ParameterDesignationRemove (ProParameter* param)
{
	return ProParameterDesignationRemove (param);
}

ProError wcProParameter::ParameterUnitsGet (ProParameter* param, ProUnititem* units)
{
	return ProParameterUnitsGet (param, units);
}

/*
ProError wcProParameter::ParameterUnitsSet (ProParameter* param, ProUnititem* units)
{
	return ProParameterUnitsSet (param, units);
}
*/
