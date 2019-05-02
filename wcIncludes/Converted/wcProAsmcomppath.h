/*--------------  C L A S S  wcProAsmcomppath  --------

   A Wrapper Class for ProE object: ProAsmcomppath
   Created By: Michael Lucatz
   Date:       08/04/2006 11:49:24
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProAsmcomppath.h>

class wcProAsmcomppath: public wcProObject
{
public:
	wcProAsmcomppath(void);
	~wcProAsmcomppath(void);
public:

//      Initializes the ProAsmcompath data structure.
ProError AsmcomppathInit (ProSolid p_solid_handle,ProIdTable memb_id_tab,int table_size,ProAsmcomppath *p_handle);

//     Retrieves the transformation matrix, given the component path.
ProError AsmcomppathTrfGet (ProAsmcomppath *p_path,ProBoolean bottom_up,ProMatrix transformation);

//     Assigns the transformation matrix, given the component path.
ProError AsmcomppathTrfSet (ProAsmcomppath *p_path,ProBoolean bottom_up,ProMatrix transformation);

//     Retrieves the model specified by the component path.
ProError AsmcomppathMdlGet (ProAsmcomppath *p_path,ProMdl *p_model);

//    Transforms the in_vector to the out_vector by thespecified transformation matrix (rotation only).
ProError VectorTrfEval (ProVector in_vector,ProMatrix trf,ProVector out_vector);

//    Transforms the in_point to the out_point by thespecified transformation matrix (both shift and rotation).
ProError PntTrfEval (ProVector in_point,ProMatrix trf,ProVector out_point);

//    Constructs the transformation matrix from the specified threevectors and the origin.
ProError MatrixInit ( ProVector x_vector,ProVector y_vector,ProVector z_vector,ProPoint3d origin,ProMatrix matrix );

//      Visits all the displayed datum points in the solid handle.
ProError AsmcomppathDispPointVisit (ProAsmcomppath *p_path,ProSolid handle,ProPointFilterAction filter_action,ProPointVisitAction visit_action,ProAppData app_data);

//      Visits all the displayed datum curves in the solid handle.
ProError AsmcomppathDispCurveVisit (ProAsmcomppath *p_path,ProSolid handle,ProCurveFilterAction filter_action,ProCurveVisitAction visit_action,ProAppData app_data);

//      Visits all the displayed coordinate systems in the solid handle.
ProError AsmcomppathDispCsysVisit (ProAsmcomppath *p_path,ProSolid handle,ProCsysFilterAction filter_action,ProCsysVisitAction visit_action,ProAppData app_data);

//      Visits all the displayed datum quilts in the solid handle.
ProError AsmcomppathDispQuiltVisit (ProAsmcomppath *p_path,ProSolid handle,ProQuiltFilterAction filter_action,ProQuiltVisitAction visit_action,ProAppData app_data);

};
