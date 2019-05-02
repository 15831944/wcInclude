/*--------------  C L A S S  wcProAsmcomppath  --------

A Wrapper Class for ProE object: ProAsmcomppath
Created By: Michael Lucatz
Date:       08/04/2006 11:49:24
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProAsmcomppath.h>

class wcProAsmcomppath: public wcProObject
{
	public:

	wcProAsmcomppath::wcProAsmcomppath(void)
	{
	}

	wcProAsmcomppath::~wcProAsmcomppath(void)
	{
	}

	ProError wcProAsmcomppath::AsmcomppathInit (ProSolid p_solid_handle,ProIdTable memb_id_tab,int table_size,ProAsmcomppath *p_handle)
	{
		return ProAsmcomppathInit (p_solid_handle,memb_id_tab,table_size,p_handle);
	}

	ProError wcProAsmcomppath::AsmcomppathTrfGet (ProAsmcomppath *p_path,ProBoolean bottom_up,ProMatrix transformation)
	{
		return ProAsmcomppathTrfGet (p_path,bottom_up,transformation);
	}

	ProError wcProAsmcomppath::AsmcomppathTrfSet (ProAsmcomppath *p_path,ProBoolean bottom_up,ProMatrix transformation)
	{
		return ProAsmcomppathTrfSet (p_path,bottom_up,transformation);
	}

	ProError wcProAsmcomppath::AsmcomppathMdlGet (ProAsmcomppath *p_path,ProMdl *p_model)
	{
		return ProAsmcomppathMdlGet (p_path,p_model);
	}

	ProError wcProAsmcomppath::VectorTrfEval (ProVector in_vector,ProMatrix trf,ProVector out_vector)
	{
		return ProVectorTrfEval (in_vector,trf,out_vector);
	}

	ProError wcProAsmcomppath::PntTrfEval (ProVector in_point,ProMatrix trf,ProVector out_point)
	{
		return ProPntTrfEval (in_point,trf,out_point);
	}

	ProError wcProAsmcomppath::MatrixInit ( ProVector x_vector,ProVector y_vector,ProVector z_vector,ProPoint3d origin,ProMatrix matrix )
	{
		return ProMatrixInit ( x_vector,y_vector,z_vector,origin,matrix );
	}

	ProError wcProAsmcomppath::AsmcomppathDispPointVisit (ProAsmcomppath *p_path,ProSolid handle,ProPointFilterAction filter_action,ProPointVisitAction visit_action,ProAppData app_data)
	{
		return ProAsmcomppathDispPointVisit (p_path,handle,filter_action,visit_action,app_data);
	}

	ProError wcProAsmcomppath::AsmcomppathDispCurveVisit (ProAsmcomppath *p_path,ProSolid handle,ProCurveFilterAction filter_action,ProCurveVisitAction visit_action,ProAppData app_data)
	{
		return ProAsmcomppathDispCurveVisit (p_path,handle,filter_action,visit_action,app_data);
	}

	ProError wcProAsmcomppath::AsmcomppathDispCsysVisit (ProAsmcomppath *p_path,ProSolid handle,ProCsysFilterAction filter_action,ProCsysVisitAction visit_action,ProAppData app_data)
	{
		return ProAsmcomppathDispCsysVisit (p_path,handle,filter_action,visit_action,app_data);
	}

	ProError wcProAsmcomppath::AsmcomppathDispQuiltVisit (ProAsmcomppath *p_path,ProSolid handle,ProQuiltFilterAction filter_action,ProQuiltVisitAction visit_action,ProAppData app_data)
	{
		return ProAsmcomppathDispQuiltVisit (p_path,handle,filter_action,visit_action,app_data);
	}

};