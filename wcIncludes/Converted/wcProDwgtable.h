/*--------------  C L A S S  wcProDwgtable  --------

   A Wrapper Class for ProE object: ProDwgtable
   Created By: Michael Lucatz
   Date:       02/04/2006 22:16:27
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProDwgtable.h>

class wcProDwgtable: public wcProObject
{
public:
	wcProDwgtable(void);
	~wcProDwgtable(void);
public:

// Allocated memory for ProDwgtabledata structure
ProError DwgtabledataAlloc (ProDwgtabledata *data);

// This function moves a table segment and optionally displays it in the
ProError DwgtableSegMove (ProDwgtable *p_table,int segment,ProVector new_pos,ProBoolean display);

//  To determine how many segments a table has.
ProError DwgtableSegCount (ProDwgtable *p_table,int *n_segs);

//  To determine upon which sheet a table segment lies.
ProError DwgtableSegSheetGet (ProDwgtable *p_table,int segment,int *sheet);

//   Set the origin in the specified ProDwgtabledata structure
ProError DwgtabledataOriginSet (ProDwgtabledata data,ProPoint3d origin);

// Setup sizetype in the given ProDwgtabledata structure
ProError DwgtabledataSizetypeSet (ProDwgtabledata data,ProDwgtableSizetype size_type);

// Setup column properties
ProError DwgtabledataColumnsSet (ProDwgtabledata data,int n_columns,double *widths,ProHorzJust *justifications);

// Setup rows properties
ProError DwgtabledataRowsSet (ProDwgtabledata data,int n_rows,double *heights);

// Creates a table in an existing drawing. The function creates the
ProError DrawingTableCreate (ProDrawing drawing,ProDwgtabledata table_data,int display,ProDwgtable *table);

// Adds the specified lines of text into the appropriate column and row
ProError DwgtableTextEnter (ProDwgtable *table,int column,int row,ProWstring *lines);

// Deletes the table specified by the table.
ProError DwgtableDelete (ProDwgtable *table,int display);

// Displays the table.
ProError DwgtableDisplay (ProDwgtable *table);

// Erases the table.
ProError DwgtableErase (ProDwgtable *table);

// Returns the note identifier for a specified cell of a drawing table.
ProError DwgtableCellNoteGet (ProDwgtable *table,int column,int row,ProDtlnote *note);

// Visit tables in the specified drawing.
ProError DrawingTableVisit (ProDrawing drawing,ProDwgtableVisitAction visit_action,ProDwgtableFilterAction filter_action,ProAppData data);

// collect all tables in the specified drawing
ProError DrawingTablesCollect (ProDrawing drawing,ProDwgtable **tables);

// Counts the table columns.
ProError DwgtableColumnsCount (ProDwgtable *table,int *n_columns);

// Counts the table columns.
ProError DwgtableRowsCount (ProDwgtable *table,int *n_rows);

// Adds a row to a table.
ProError DwgtableRowAdd (ProDwgtable *table,int insert_after_row,int display,double height_in_chars);

// adds column to a table
ProError DwgtableColumnAdd (ProDwgtable *table,int insert_after_col,int display,double width_in_chars);

// Takes a rectangular region of cells and merges them
ProError DwgtableCellsMerge (ProDwgtable *table,int start_column,int start_row,int end_column,int end_row,int display);

// Undoes all merges created in the specified rectangular region.
ProError DwgtableCellsRemesh (ProDwgtable *table,int start_column,int start_row,int end_column,int end_row,int display);

// Delete the specified row from the table.
ProError DwgtableRowDelete (ProDwgtable *table,int row,int display);

// Deletes the specified column from the table.
ProError DwgtableColumnDelete (ProDwgtable *table,int column,int display);

// Places the text of the table into a string array.
ProError DwgtableCelltextGet (ProDwgtable *table,int column,int row,ProParamMode mode,ProWstring **lines);

// Rotates table (clockwise) by 90 degree.
ProError DwgtableRotate (ProDwgtable *table,int display);

// Determines whether the specified cell
ProError DwgtableCellIsComment (ProDwgtable *table,int column,int row,ProBoolean *is_comment);

// Initializes the ProAsmcompath data structure
ProError DwgtableCellComponentGet (ProDwgtable *table,int column,int row,ProAsmcomppath *component);

// Determines whether the specified table is associated with
ProError DwgtableIsFromFormat (ProDwgtable *table,ProBoolean *from_format);

// Retrieves a stored Pro/Engineer drawing table and
ProError DwgtableRetrieve (ProDrawing drawing,ProName file_name,ProPath file_path,int file_version,ProPoint3d position,ProSolid solid,ProSimprep *simp_rep,ProDwgtable *table);

// Retrieves information about the specified drawing table.
ProError DwgtableInfoGet (ProDwgtable *table,int segment,ProDwgtableInfo *table_info);

// Returns the size of the specified row, in world units.
ProError DwgtableRowSizeGet (ProDwgtable *table,int segment,int row,double *size);

// Returns the size of the specified column, in world units.
ProError DwgtableColumnSizeGet (ProDwgtable *table,int segment,int column,double *size);

// Updates all drawing tables.
ProError DrawingTablesUpdate (ProDrawing drawing);

};
