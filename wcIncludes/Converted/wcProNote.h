/*--------------  C L A S S  wcProNote  --------

   A Wrapper Class for ProE object: ProNote
   Created By: Michael Lucatz
   Date:       03/04/2006 13:06:39
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProNote.h>

class wcProNote: public wcProObject
{
public:
	wcProNote(void);
	~wcProNote(void);
public:

//  Creates a note in the specified model.
ProError NoteCreate ( ProMdl mdl_handle,ProModelitem *p_owner_item,ProLinelist line_list,ProNote *note_item);

//  Creates a note in the specified solid model.
ProError SolidNoteCreate ( ProMdl mdl_handle,ProModelitem *p_owner_item,wchar_t **p_note_text,ProNote *note_item );

//  Deletes a note in the specified model. The valid model typesare PRO_PART and PRO_ASSEMBLY.
ProError NoteDelete ( ProNote *note_item );

//  Copies the specified note to the line list.
ProError NoteLinelistGet (ProNote *note_item,ProLinelist *p_line_list);

//  Copies the specified line list to the note.
ProError NoteLinelistSet ( ProNote *note_item,ProLinelist line_list );

//  Returns the note text for a 3d model note.
ProError NoteTextGet ( ProNote *p_note,ProDisplayMode display_mode,wchar_t ***p_note_text );

//  Sets the note text for a 3d model note.  This function doesnot update the note display. Use ProNoteDisplay() to hide the
ProError NoteTextSet ( ProNote *p_note,wchar_t **p_note_text );

// Calls the specified filter and action functions for each note in the
ProError MdlNoteVisit ( ProMdl mdl_handle,ProMdlNoteVisitAction visit_action,ProMdlNoteFilterAction filter_action,ProAppData app_data );

// Displays the specified note.
ProError NoteDisplay( ProNote *p_note_item,ProDrawMode draw_mode );

// Places the note at the specified location.
ProError NotePlacementSet( ProNote *p_note_item,ProNoteAttach note_att );

// Retrieves the placement information for the specified note.
ProError NotePlacementGet( ProNote *p_note_item,ProNoteAttach *r_note_att );

// Sets the associated Uniform Resource Locator (URL) for the specified note.
ProError NoteURLSet( ProNote *p_note_item,ProURL url );

// Retrieves the Uniform Resource Locator (URL) associated with the
ProError NoteURLGet( ProNote *p_note_item,ProURL r_url );

// Retrieves the owner of the specified note.
ProError NoteOwnerGet( ProNote *p_note_item,ProModelitem *r_note_owner );

// Sets the text style of the specified note.
ProError NoteTextStyleSet( ProNote *p_note_item,ProTextStyle text_style);

// Retrieves the text style of the specified note.
ProError NoteTextStyleGet( ProNote *p_note_item,ProTextStyle *r_text_style );

// Allocates the opaque handle for a ProTextStyle data structure.
ProError TextStyleAlloc( ProTextStyle *r_text_style );

// Releases the opaque handle to the ProTextStyle data structure.
ProError TextStyleFree( ProTextStyle *p_text_style );

// Sets the text style height.
ProError TextStyleHeightSet( ProTextStyle text_style,double height );

// Retrieves the text style height.
ProError TextStyleHeightGet( ProTextStyle text_style,double *r_height );

// Sets the width factor of the text style.
ProError TextStyleWidthSet( ProTextStyle text_style,double width_factor);

// Retrieves the width factor of the text style.
ProError TextStyleWidthGet( ProTextStyle text_style,double *r_width_factor );

// Sets the angle of the text style.
ProError TextStyleAngleSet( ProTextStyle text_style,double angle);

// Retrieves the angle of the text style.
ProError TextStyleAngleGet( ProTextStyle text_style,double *r_angle );

// Sets the slant angle of the text style.
ProError TextStyleSlantAngleSet( ProTextStyle text_style,double slant_angle );

// Retrieves the slant angle of the specified text style.
ProError TextStyleSlantAngleGet( ProTextStyle text_style,double *r_slant_angle );

// Sets the thickness of the text style.
ProError TextStyleThicknessSet( ProTextStyle text_style,double thickness );

// Retrieves the thickness of the specified text style.
ProError TextStyleThicknessGet( ProTextStyle text_style,double *r_thickness );

// Sets the text underlining.
ProError TextStyleUnderlineSet( ProTextStyle text_style,int underline );

// Retrieves the underlining for the specified text style.
ProError TextStyleUnderlineGet( ProTextStyle text_style,int *r_underline );

// Sets the text mirroring.
ProError TextStyleMirrorSet( ProTextStyle text_style,int mirror );

// Retrieves the mirroring for the specified text style.
ProError TextStyleMirrorGet( ProTextStyle text_style,int *r_mirror );

// Allocates the opaque handle for the ProNoteAttach.
ProError NoteAttachAlloc( ProNoteAttach *r_note_att );

// Releases the opaque ProNoteAttach handle.
ProError NoteAttachRelease( ProNoteAttach *p_note_att );

// Sets the location of the note text --
ProError NoteAttachFreeSet( ProNoteAttach note_att,double p1,double p2,double p3 );

// Retrieves the location of the note text.
ProError NoteAttachFreeGet( ProNoteAttach note_att,double *r_p1,double *r_p2,double *r_p3 );

// Adds a leader to the specified note.
ProError NoteAttachAddend( ProNoteAttach note_att,ProSelection one_end_sel,ProNoteAttachAttr attr );

//  Return the detail note that represents a shown model note.
ProError NoteDtlnoteGet (ProNote *solid_model_note,ProDrawing drawing,ProDtlnote *dtl_note);

};
