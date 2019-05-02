/*--------------  C L A S S  wcProNote  --------

A Wrapper Class for ProE object: ProNote
Created By: Michael Lucatz
Date:       03/04/2006 13:06:39
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProNote.h>

class wcProNote : public wcProObject
{
public:
	wcProNote(void)
	{
	}

	~wcProNote(void)
	{
	}

	ProError NoteCreate ( ProMdl mdl_handle,ProModelitem *p_owner_item,ProLinelist line_list,ProNote *note_item)
	{
		return ProNoteCreate ( mdl_handle,p_owner_item,line_list,note_item);
	}

	ProError SolidNoteCreate ( ProMdl mdl_handle,ProModelitem *p_owner_item,wchar_t **p_note_text,ProNote *note_item )
	{
		return ProSolidNoteCreate ( mdl_handle,p_owner_item,p_note_text,note_item );
	}

	ProError NoteDelete ( ProNote *note_item )
	{
		return ProNoteDelete ( note_item );
	}

	ProError NoteLinelistGet (ProNote *note_item,ProLinelist *p_line_list)
	{
		return ProNoteLinelistGet (note_item,p_line_list);
	}

	ProError NoteLinelistSet ( ProNote *note_item,ProLinelist line_list )
	{
		return ProNoteLinelistSet ( note_item,line_list );
	}

	ProError NoteTextGet ( ProNote *p_note,ProDisplayMode display_mode,wchar_t ***p_note_text )
	{
		return ProNoteTextGet ( p_note,display_mode,p_note_text );
	}

	ProError NoteTextSet ( ProNote *p_note,wchar_t **p_note_text )
	{
		return ProNoteTextSet ( p_note,p_note_text );
	}

	ProError MdlNoteVisit ( ProMdl mdl_handle,ProMdlNoteVisitAction visit_action,ProMdlNoteFilterAction filter_action,ProAppData app_data )
	{
		return ProMdlNoteVisit ( mdl_handle,visit_action,filter_action,app_data );
	}

	ProError NoteDisplay( ProNote *p_note_item,ProDrawMode draw_mode )
	{
		return ProNoteDisplay( p_note_item,draw_mode );
	}

	ProError NotePlacementSet( ProNote *p_note_item,ProNoteAttach note_att )
	{
		return ProNotePlacementSet( p_note_item,note_att );
	}

	ProError NotePlacementGet( ProNote *p_note_item,ProNoteAttach *r_note_att )
	{
		return ProNotePlacementGet( p_note_item,r_note_att );
	}

	ProError NoteURLSet( ProNote *p_note_item,ProURL url )
	{
		return ProNoteURLSet( p_note_item,url );
	}

	ProError NoteURLGet( ProNote *p_note_item,ProURL r_url )
	{
		return ProNoteURLGet( p_note_item,r_url );
	}

	ProError NoteOwnerGet( ProNote *p_note_item,ProModelitem *r_note_owner )
	{
		return ProNoteOwnerGet( p_note_item,r_note_owner );
	}

	ProError NoteTextStyleSet( ProNote *p_note_item,ProTextStyle text_style)
	{
		return ProNoteTextStyleSet( p_note_item,text_style);
	}

	ProError NoteTextStyleGet( ProNote *p_note_item,ProTextStyle *r_text_style )
	{
		return ProNoteTextStyleGet( p_note_item,r_text_style );
	}

	ProError TextStyleAlloc( ProTextStyle *r_text_style )
	{
		return ProTextStyleAlloc( r_text_style );
	}

	ProError TextStyleFree( ProTextStyle *p_text_style )
	{
		return ProTextStyleFree( p_text_style );
	}

	ProError TextStyleHeightSet( ProTextStyle text_style,double height )
	{
		return ProTextStyleHeightSet( text_style,height );
	}

	ProError TextStyleHeightGet( ProTextStyle text_style,double *r_height )
	{
		return ProTextStyleHeightGet( text_style,r_height );
	}

	ProError TextStyleWidthSet( ProTextStyle text_style,double width_factor)
	{
		return ProTextStyleWidthSet( text_style,width_factor);
	}

	ProError TextStyleWidthGet( ProTextStyle text_style,double *r_width_factor )
	{
		return ProTextStyleWidthGet( text_style,r_width_factor );
	}

	ProError TextStyleAngleSet( ProTextStyle text_style,double angle)
	{
		return ProTextStyleAngleSet( text_style,angle);
	}

	ProError TextStyleAngleGet( ProTextStyle text_style,double *r_angle )
	{
		return ProTextStyleAngleGet( text_style,r_angle );
	}

	ProError TextStyleSlantAngleSet( ProTextStyle text_style,double slant_angle )
	{
		return ProTextStyleSlantAngleSet( text_style,slant_angle );
	}

	ProError TextStyleSlantAngleGet( ProTextStyle text_style,double *r_slant_angle )
	{
		return ProTextStyleSlantAngleGet( text_style,r_slant_angle );
	}

	ProError TextStyleThicknessSet( ProTextStyle text_style,double thickness )
	{
		return ProTextStyleThicknessSet( text_style,thickness );
	}

	ProError TextStyleThicknessGet( ProTextStyle text_style,double *r_thickness )
	{
		return ProTextStyleThicknessGet( text_style,r_thickness );
	}

	ProError TextStyleUnderlineSet( ProTextStyle text_style,int underline )
	{
		return ProTextStyleUnderlineSet( text_style,underline );
	}

	ProError TextStyleUnderlineGet( ProTextStyle text_style,int *r_underline )
	{
		return ProTextStyleUnderlineGet( text_style,r_underline );
	}

	ProError TextStyleMirrorSet( ProTextStyle text_style,int mirror )
	{
		return ProTextStyleMirrorSet( text_style,mirror );
	}

	ProError TextStyleMirrorGet( ProTextStyle text_style,int *r_mirror )
	{
		return ProTextStyleMirrorGet( text_style,r_mirror );
	}

	ProError NoteAttachAlloc( ProNoteAttach *r_note_att )
	{
		return ProNoteAttachAlloc( r_note_att );
	}

	ProError NoteAttachRelease( ProNoteAttach *p_note_att )
	{
		return ProNoteAttachRelease( p_note_att );
	}

	ProError NoteAttachFreeSet( ProNoteAttach note_att,double p1,double p2,double p3 )
	{
		return ProNoteAttachFreeSet( note_att,p1,p2,p3 );
	}

	ProError NoteAttachFreeGet( ProNoteAttach note_att,double *r_p1,double *r_p2,double *r_p3 )
	{
		return ProNoteAttachFreeGet( note_att,r_p1,r_p2,r_p3 );
	}

	ProError NoteAttachAddend( ProNoteAttach note_att,ProSelection one_end_sel,ProNoteAttachAttr attr )
	{
		return ProNoteAttachAddend( note_att,one_end_sel,attr );
	}

	ProError NoteDtlnoteGet (ProNote *solid_model_note,ProDrawing drawing,ProDtlnote *dtl_note)
	{
		return ProNoteDtlnoteGet (solid_model_note,drawing,dtl_note);
	}

};