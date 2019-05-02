#include "wcProIntfData.h"

wcProIntfData::wcProIntfData(void)
{
}

wcProIntfData::~wcProIntfData(void)
{
}

ProError wcProIntfData::IntfDataSourceInit ( ProIntfType intf_type,void *p_source,ProIntfDataSource *p_pro_intf_data_source )
{
	return ProIntfDataSourceInit ( intf_type,p_source,p_pro_intf_data_source );
}

ProError wcProIntfData::IntfDataAlloc ( ProIntfData **pp_intfdata )
{
	return ProIntfDataAlloc ( pp_intfdata );
}

ProError wcProIntfData::IntfDataFree ( ProIntfData *p_intfdata )
{
	return ProIntfDataFree ( p_intfdata );
}

ProError wcProIntfData::IntfDataSurfaceCount ( ProIntfData *p_intfdata,int *n_surfaces )
{
	return ProIntfDataSurfaceCount ( p_intfdata,n_surfaces );
}

ProError wcProIntfData::IntfDataSurfaceGet ( ProIntfData *p_intfdata,int index,ProSurfacedata **pp_surfdata )
{
	return ProIntfDataSurfaceGet ( p_intfdata,index,pp_surfdata );
}

ProError wcProIntfData::IntfDataSurfaceAppend ( ProIntfData *p_intfdata,ProSurfacedata *p_surfdata )
{
	return ProIntfDataSurfaceAppend ( p_intfdata,p_surfdata );
}

ProError wcProIntfData::IntfDataQuiltCount ( ProIntfData *p_intfdata,int *n_quilts )
{
	return ProIntfDataQuiltCount ( p_intfdata,n_quilts );
}

ProError wcProIntfData::IntfDataQuiltGet ( ProIntfData *p_intfdata,int index,ProQuiltdata **pp_quiltdata )
{
	return ProIntfDataQuiltGet ( p_intfdata,index,pp_quiltdata );
}

ProError wcProIntfData::IntfDataQuiltAppend ( ProIntfData *p_intfdata,ProQuiltdata *p_quiltdata )
{
	return ProIntfDataQuiltAppend ( p_intfdata,p_quiltdata );
}

ProError wcProIntfData::IntfDataEdgeCount ( ProIntfData *p_intfdata,int *n_edges )
{
	return ProIntfDataEdgeCount ( p_intfdata,n_edges );
}

ProError wcProIntfData::IntfDataEdgeGet ( ProIntfData *p_intfdata,int index,ProEdgedata **pp_edgedata )
{
	return ProIntfDataEdgeGet ( p_intfdata,index,pp_edgedata );
}

ProError wcProIntfData::IntfDataEdgeAppend ( ProIntfData *p_intfdata,ProEdgedata *p_edgedata )
{
	return ProIntfDataEdgeAppend ( p_intfdata,p_edgedata );
}

ProError wcProIntfData::IntfDataDatumCount ( ProIntfData *p_intfdata,int *n_datumobjs )
{
	return ProIntfDataDatumCount ( p_intfdata,n_datumobjs );
}

ProError wcProIntfData::IntfDataDatumGet ( ProIntfData *p_intfdata,int index,ProDatumdata **pp_datumdata )
{
	return ProIntfDataDatumGet ( p_intfdata,index,pp_datumdata );
}

ProError wcProIntfData::IntfDataDatumAppend ( ProIntfData *p_intfdata,ProDatumdata *p_datumdata )
{
	return ProIntfDataDatumAppend ( p_intfdata,p_datumdata );
}

ProError wcProIntfData::IntfDataAccuracytypeGet ( ProIntfData *p_intfdata,ProAccuracytype *p_accu_type )
{
	return ProIntfDataAccuracytypeGet ( p_intfdata,p_accu_type );
}

ProError wcProIntfData::IntfDataAccuracytypeSet ( ProIntfData *p_intfdata,ProAccuracytype accu_type )
{
	return ProIntfDataAccuracytypeSet ( p_intfdata,accu_type );
}

ProError wcProIntfData::IntfDataAccuracyGet ( ProIntfData *p_intfdata,double *p_accuracy )
{
	return ProIntfDataAccuracyGet ( p_intfdata,p_accuracy );
}

ProError wcProIntfData::IntfDataAccuracySet ( ProIntfData *p_intfdata,double accuracy )
{
	return ProIntfDataAccuracySet ( p_intfdata,accuracy );
}

ProError wcProIntfData::IntfDataOutlineGet ( ProIntfData *p_intfdata,ProOutline xyz_outline )
{
	return ProIntfDataOutlineGet ( p_intfdata,xyz_outline );
}

ProError wcProIntfData::IntfDataOutlineSet ( ProIntfData *p_intfdata,ProOutline xyz_outline )
{
	return ProIntfDataOutlineSet ( p_intfdata,xyz_outline );
}

ProError wcProIntfData::PartToProIntfData ( ProPart ptk_part,ProPartConversionOptions *p_cnv_opts,ProIntfData *p_intfdata )
{
	return ProPartToProIntfData ( ptk_part,p_cnv_opts,p_intfdata );
}

