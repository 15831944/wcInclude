
/*--------------  C L A S S  wcProIntfData  --------

   A Wrapper Class for ProE object: ProIntfData
   Created By: Michael Lucatz
   Date:       09/04/2006 12:42:26
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProIntfData.h>

class wcProIntfData: public wcProObject
{
public:
	wcProIntfData(void)
	{
	}

	~wcProIntfData(void)
	{
	}

	ProError IntfDataSourceInit ( ProIntfType intf_type,void *p_source,ProIntfDataSource *p_pro_intf_data_source )
	{
		return ProIntfDataSourceInit ( intf_type,p_source,p_pro_intf_data_source );
	}

	ProError IntfDataAlloc ( ProIntfData **pp_intfdata )
	{
		return ProIntfDataAlloc ( pp_intfdata );
	}

	ProError IntfDataFree ( ProIntfData *p_intfdata )
	{
		return ProIntfDataFree ( p_intfdata );
	}

	ProError IntfDataSurfaceCount ( ProIntfData *p_intfdata,int *n_surfaces )
	{
		return ProIntfDataSurfaceCount ( p_intfdata,n_surfaces );
	}

	ProError IntfDataSurfaceGet ( ProIntfData *p_intfdata,int index,ProSurfacedata **pp_surfdata )
	{
		return ProIntfDataSurfaceGet ( p_intfdata,index,pp_surfdata );
	}

	ProError IntfDataSurfaceAppend ( ProIntfData *p_intfdata,ProSurfacedata *p_surfdata )
	{
		return ProIntfDataSurfaceAppend ( p_intfdata,p_surfdata );
	}

	ProError IntfDataQuiltCount ( ProIntfData *p_intfdata,int *n_quilts )
	{
		return ProIntfDataQuiltCount ( p_intfdata,n_quilts );
	}

	ProError IntfDataQuiltGet ( ProIntfData *p_intfdata,int index,ProQuiltdata **pp_quiltdata )
	{
		return ProIntfDataQuiltGet ( p_intfdata,index,pp_quiltdata );
	}

	ProError IntfDataQuiltAppend ( ProIntfData *p_intfdata,ProQuiltdata *p_quiltdata )
	{
		return ProIntfDataQuiltAppend ( p_intfdata,p_quiltdata );
	}

	ProError IntfDataEdgeCount ( ProIntfData *p_intfdata,int *n_edges )
	{
		return ProIntfDataEdgeCount ( p_intfdata,n_edges );
	}

	ProError IntfDataEdgeGet ( ProIntfData *p_intfdata,int index,ProEdgedata **pp_edgedata )
	{
		return ProIntfDataEdgeGet ( p_intfdata,index,pp_edgedata );
	}

	ProError IntfDataEdgeAppend ( ProIntfData *p_intfdata,ProEdgedata *p_edgedata )
	{
		return ProIntfDataEdgeAppend ( p_intfdata,p_edgedata );
	}

	ProError IntfDataDatumCount ( ProIntfData *p_intfdata,int *n_datumobjs )
	{
		return ProIntfDataDatumCount ( p_intfdata,n_datumobjs );
	}

	ProError IntfDataDatumGet ( ProIntfData *p_intfdata,int index,ProDatumdata **pp_datumdata )
	{
		return ProIntfDataDatumGet ( p_intfdata,index,pp_datumdata );
	}

	ProError IntfDataDatumAppend ( ProIntfData *p_intfdata,ProDatumdata *p_datumdata )
	{
		return ProIntfDataDatumAppend ( p_intfdata,p_datumdata );
	}

	ProError IntfDataAccuracytypeGet ( ProIntfData *p_intfdata,ProAccuracytype *p_accu_type )
	{
		return ProIntfDataAccuracytypeGet ( p_intfdata,p_accu_type );
	}

	ProError IntfDataAccuracytypeSet ( ProIntfData *p_intfdata,ProAccuracytype accu_type )
	{
		return ProIntfDataAccuracytypeSet ( p_intfdata,accu_type );
	}

	ProError IntfDataAccuracyGet ( ProIntfData *p_intfdata,double *p_accuracy )
	{
		return ProIntfDataAccuracyGet ( p_intfdata,p_accuracy );
	}

	ProError IntfDataAccuracySet ( ProIntfData *p_intfdata,double accuracy )
	{
		return ProIntfDataAccuracySet ( p_intfdata,accuracy );
	}

	ProError IntfDataOutlineGet ( ProIntfData *p_intfdata,ProOutline xyz_outline )
	{
		return ProIntfDataOutlineGet ( p_intfdata,xyz_outline );
	}

	ProError IntfDataOutlineSet ( ProIntfData *p_intfdata,ProOutline xyz_outline )
	{
		return ProIntfDataOutlineSet ( p_intfdata,xyz_outline );
	}

	ProError PartToProIntfData ( ProPart ptk_part,ProPartConversionOptions *p_cnv_opts,ProIntfData *p_intfdata )
	{
		return ProPartToProIntfData ( ptk_part,p_cnv_opts,p_intfdata );
	}

};