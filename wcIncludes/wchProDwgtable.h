/*--------------  C L A S S  wcProDwgtable  --------

A Wrapper Class for ProE object: ProDwgtable
Created By: Michael Lucatz
Date:       02/04/2006 22:16:27
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProDwgtable.h>

class wcProDwgtable: public wcProObject
{
public:

	wcProDwgtable::wcProDwgtable(void)
	{
	}

	wcProDwgtable::~wcProDwgtable(void)
	{
	}

	ProError wcProDwgtable::DwgtabledataAlloc (ProDwgtabledata *data)
	{
		return ProDwgtabledataAlloc (data);
	}

	ProError wcProDwgtable::DwgtableSegMove (ProDwgtable *p_table,int segment,ProVector new_pos,ProBoolean display)
	{
		return ProDwgtableSegMove (p_table,segment,new_pos,display);
	}

	ProError wcProDwgtable::DwgtableSegCount (ProDwgtable *p_table,int *n_segs)
	{
		return ProDwgtableSegCount (p_table,n_segs);
	}

	ProError wcProDwgtable::DwgtableSegSheetGet (ProDwgtable *p_table,int segment,int *sheet)
	{
		return ProDwgtableSegSheetGet (p_table,segment,sheet);
	}

	ProError wcProDwgtable::DwgtabledataOriginSet (ProDwgtabledata data,ProPoint3d origin)
	{
		return ProDwgtabledataOriginSet (data,origin);
	}

	ProError wcProDwgtable::DwgtabledataSizetypeSet (ProDwgtabledata data,ProDwgtableSizetype size_type)
	{
		return ProDwgtabledataSizetypeSet (data,size_type);
	}

	ProError wcProDwgtable::DwgtabledataColumnsSet (ProDwgtabledata data,int n_columns,double *widths,ProHorzJust *justifications)
	{
		return ProDwgtabledataColumnsSet (data,n_columns,widths,justifications);
	}

	ProError wcProDwgtable::DwgtabledataRowsSet (ProDwgtabledata data,int n_rows,double *heights)
	{
		return ProDwgtabledataRowsSet (data,n_rows,heights);
	}

	ProError wcProDwgtable::DrawingTableCreate (ProDrawing drawing,ProDwgtabledata table_data,int display,ProDwgtable *table)
	{
		return ProDrawingTableCreate (drawing,table_data,display,table);
	}

	ProError wcProDwgtable::DwgtableTextEnter (ProDwgtable *table,int column,int row,ProWstring *lines)
	{
		return ProDwgtableTextEnter (table,column,row,lines);
	}

	ProError wcProDwgtable::DwgtableDelete (ProDwgtable *table,int display)
	{
		return ProDwgtableDelete (table,display);
	}

	ProError wcProDwgtable::DwgtableDisplay (ProDwgtable *table)
	{
		return ProDwgtableDisplay (table);
	}

	ProError wcProDwgtable::DwgtableErase (ProDwgtable *table)
	{
		return ProDwgtableErase (table);
	}

	ProError wcProDwgtable::DwgtableCellNoteGet (ProDwgtable *table,int column,int row,ProDtlnote *note)
	{
		return ProDwgtableCellNoteGet (table,column,row,note);
	}

	ProError wcProDwgtable::DrawingTableVisit (ProDrawing drawing,ProDwgtableVisitAction visit_action,ProDwgtableFilterAction filter_action,ProAppData data)
	{
		return ProDrawingTableVisit (drawing,visit_action,filter_action,data);
	}

	ProError wcProDwgtable::DrawingTablesCollect (ProDrawing drawing,ProDwgtable **tables)
	{
		return ProDrawingTablesCollect (drawing,tables);
	}

	ProError wcProDwgtable::DwgtableColumnsCount (ProDwgtable *table,int *n_columns)
	{
		return ProDwgtableColumnsCount (table,n_columns);
	}

	ProError wcProDwgtable::DwgtableRowsCount (ProDwgtable *table,int *n_rows)
	{
		return ProDwgtableRowsCount (table,n_rows);
	}

	ProError wcProDwgtable::DwgtableRowAdd (ProDwgtable *table,int insert_after_row,int display,double height_in_chars)
	{
		return ProDwgtableRowAdd (table,insert_after_row,display,height_in_chars);
	}

	ProError wcProDwgtable::DwgtableColumnAdd (ProDwgtable *table,int insert_after_col,int display,double width_in_chars)
	{
		return ProDwgtableColumnAdd (table,insert_after_col,display,width_in_chars);
	}

	ProError wcProDwgtable::DwgtableCellsMerge (ProDwgtable *table,int start_column,int start_row,int end_column,int end_row,int display)
	{
		return ProDwgtableCellsMerge (table,start_column,start_row,end_column,end_row,display);
	}

	ProError wcProDwgtable::DwgtableCellsRemesh (ProDwgtable *table,int start_column,int start_row,int end_column,int end_row,int display)
	{
		return ProDwgtableCellsRemesh (table,start_column,start_row,end_column,end_row,display);
	}

	ProError wcProDwgtable::DwgtableRowDelete (ProDwgtable *table,int row,int display)
	{
		return ProDwgtableRowDelete (table,row,display);
	}

	ProError wcProDwgtable::DwgtableColumnDelete (ProDwgtable *table,int column,int display)
	{
		return ProDwgtableColumnDelete (table,column,display);
	}

	ProError wcProDwgtable::DwgtableCelltextGet (ProDwgtable *table,int column,int row,ProParamMode mode,ProWstring **lines)
	{
		return ProDwgtableCelltextGet (table,column,row,mode,lines);
	}

	ProError wcProDwgtable::DwgtableRotate (ProDwgtable *table,int display)
	{
		return ProDwgtableRotate (table,display);
	}

	ProError wcProDwgtable::DwgtableCellIsComment (ProDwgtable *table,int column,int row,ProBoolean *is_comment)
	{
		return ProDwgtableCellIsComment (table,column,row,is_comment);
	}

	ProError wcProDwgtable::DwgtableCellComponentGet (ProDwgtable *table,int column,int row,ProAsmcomppath *component)
	{
		return ProDwgtableCellComponentGet (table,column,row,component);
	}

	ProError wcProDwgtable::DwgtableIsFromFormat (ProDwgtable *table,ProBoolean *from_format)
	{
		return ProDwgtableIsFromFormat (table,from_format);
	}

	ProError wcProDwgtable::DwgtableRetrieve (ProDrawing drawing,ProName file_name,ProPath file_path,int file_version,ProPoint3d position,ProSolid solid,ProSimprep *simp_rep,ProDwgtable *table)
	{
		return ProDwgtableRetrieve (drawing,file_name,file_path,file_version,position,solid,simp_rep,table);
	}

	ProError wcProDwgtable::DwgtableInfoGet (ProDwgtable *table,int segment,ProDwgtableInfo *table_info)
	{
		return ProDwgtableInfoGet (table,segment,table_info);
	}

	ProError wcProDwgtable::DwgtableRowSizeGet (ProDwgtable *table,int segment,int row,double *size)
	{
		return ProDwgtableRowSizeGet (table,segment,row,size);
	}

	ProError wcProDwgtable::DwgtableColumnSizeGet (ProDwgtable *table,int segment,int column,double *size)
	{
		return ProDwgtableColumnSizeGet (table,segment,column,size);
	}

	ProError wcProDwgtable::DrawingTablesUpdate (ProDrawing drawing)
	{
		return ProDrawingTablesUpdate (drawing);
	}

};