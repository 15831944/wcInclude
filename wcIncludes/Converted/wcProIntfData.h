/*--------------  C L A S S  wcProIntfData  --------

   A Wrapper Class for ProE object: ProIntfData
   Created By: Michael Lucatz
   Date:       09/04/2006 12:42:26
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProIntfData.h>

class wcProIntfData: public wcProObject
{
public:
	wcProIntfData(void);
	~wcProIntfData(void);
public:

// 	Initializes a ProIntfDataSource structure.
ProError IntfDataSourceInit ( ProIntfType intf_type,void *p_source,ProIntfDataSource *p_pro_intf_data_source );

// Allocates memory for the interface data.
ProError IntfDataAlloc ( ProIntfData **pp_intfdata );

// Frees the memory used by the interface data.
ProError IntfDataFree ( ProIntfData *p_intfdata );

// Determines the number of surfaces in the interface data.
ProError IntfDataSurfaceCount ( ProIntfData *p_intfdata,int *n_surfaces );

// Gets the specified surface from the interface data.
ProError IntfDataSurfaceGet ( ProIntfData *p_intfdata,int index,ProSurfacedata **pp_surfdata );

// Appends the specified surface to the interface data.
ProError IntfDataSurfaceAppend ( ProIntfData *p_intfdata,ProSurfacedata *p_surfdata );

// Determines the number of quilts in the interface data.
ProError IntfDataQuiltCount ( ProIntfData *p_intfdata,int *n_quilts );

//   Retrieves the specified quilt from the interface data.
ProError IntfDataQuiltGet ( ProIntfData *p_intfdata,int index,ProQuiltdata **pp_quiltdata );

// Appends the quilt to the interface data.
ProError IntfDataQuiltAppend ( ProIntfData *p_intfdata,ProQuiltdata *p_quiltdata );

// Determines the number of edges in the interface data.
ProError IntfDataEdgeCount ( ProIntfData *p_intfdata,int *n_edges );

// Gets the specified edge from the interface data.
ProError IntfDataEdgeGet ( ProIntfData *p_intfdata,int index,ProEdgedata **pp_edgedata );

// Appends the edge to the interface data.
ProError IntfDataEdgeAppend ( ProIntfData *p_intfdata,ProEdgedata *p_edgedata );

// Determines the number of datum objects in the interface data.
ProError IntfDataDatumCount ( ProIntfData *p_intfdata,int *n_datumobjs );

// Gets the specified datum object from the interface data.
ProError IntfDataDatumGet ( ProIntfData *p_intfdata,int index,ProDatumdata **pp_datumdata );

// Appends the specified datum object to the interface data.
ProError IntfDataDatumAppend ( ProIntfData *p_intfdata,ProDatumdata *p_datumdata );

// Gets the accuracy type of the interface data.
ProError IntfDataAccuracytypeGet ( ProIntfData *p_intfdata,ProAccuracytype *p_accu_type );

// Sets the accuracy type of the interface data.
ProError IntfDataAccuracytypeSet ( ProIntfData *p_intfdata,ProAccuracytype accu_type );

// Gets the accuracy of the interface data.
ProError IntfDataAccuracyGet ( ProIntfData *p_intfdata,double *p_accuracy );

// Sets the accuracy of the interface data.
ProError IntfDataAccuracySet ( ProIntfData *p_intfdata,double accuracy );

// Gets the outline of the interface data.
ProError IntfDataOutlineGet ( ProIntfData *p_intfdata,ProOutline xyz_outline );

// Sets the outline of the interface data.
ProError IntfDataOutlineSet ( ProIntfData *p_intfdata,ProOutline xyz_outline );

// Converts a ProPart structure to a ProIntfData structure.
ProError PartToProIntfData ( ProPart ptk_part,ProPartConversionOptions *p_cnv_opts,ProIntfData *p_intfdata );

};
