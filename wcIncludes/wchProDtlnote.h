/*--------------  C L A S S  wcProDtlnote  --------

A Wrapper Class for ProE object: ProDtlnote
Created By: Michael Lucatz
Date:       02/04/2006 22:14:33
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProDtlnote.h>

class wcProDtlnote: public wcProObject
{
	public:

	wcProDtlnote::wcProDtlnote(void)
	{
	}

	wcProDtlnote::~wcProDtlnote(void)
	{
	}

	ProError wcProDtlnote::DrawingReadonlyselectionAllow(ProBoolean allow)
	{
		return ProDrawingReadonlyselectionAllow(allow);
	}

	ProError wcProDtlnote::DtlnoteCreate(ProMdl owner,ProDtlsymdef *symbol,ProDtlnotedata notedata,ProDtlnote *note)
	{
		return ProDtlnoteCreate(owner,symbol,notedata,note);
	}

	ProError wcProDtlnote::DtlnoteDataGet(ProDtlnote *note,ProDtlsymdef *symbol,ProDisplayMode mode,ProDtlnotedata *notedata)
	{
		return ProDtlnoteDataGet(note,symbol,mode,notedata);
	}

	ProError wcProDtlnote::DtlnoteDelete(ProDtlnote *note,ProDtlsymdef *symbol)
	{
		return ProDtlnoteDelete(note,symbol);
	}

	ProError wcProDtlnote::DtlnoteModify(ProDtlnote *note,ProDtlsymdef *symbol,ProDtlnotedata notedata)
	{
		return ProDtlnoteModify(note,symbol,notedata);
	}

	ProError wcProDtlnote::DtlnoteDraw(ProDtlnote *note)
	{
		return ProDtlnoteDraw(note);
	}

	ProError wcProDtlnote::DtlnoteErase(ProDtlnote *note)
	{
		return ProDtlnoteErase(note);
	}

	ProError wcProDtlnote::DtlnoteShow(ProDtlnote *note)
	{
		return ProDtlnoteShow(note);
	}

	ProError wcProDtlnote::DtlnoteRemove(ProDtlnote *note)
	{
		return ProDtlnoteRemove(note);
	}

	ProError wcProDtlnote::DrawingDtlnotesCollect(ProDrawing drawing,ProDtlsymdef *symbol,int sheet,ProDtlnote **notes)
	{
		return ProDrawingDtlnotesCollect(drawing,symbol,sheet,notes);
	}

	ProError wcProDtlnote::DrawingDtlnoteVisit(ProDrawing drawing,ProDtlsymdef *symbol,int sheet,ProDtlitemVisitAction visit_action,ProDtlitemFilterAction filter_action,ProAppData appdata)
	{
		return ProDrawingDtlnoteVisit(drawing,symbol,sheet,visit_action,filter_action,appdata);
	}

	ProError wcProDtlnote::DtlnoteModelrefGet( ProDtlnote *note,ProDtlsyminst *symbol_inst,int line_index,int text_index,ProMdl *model )
	{
		return ProDtlnoteModelrefGet( note,symbol_inst,line_index,text_index,model );
	}

	ProError wcProDtlnote::DtlnoteNoteGet (ProDtlnote *dtl_note,ProNote* solid_model_note)
	{
		return ProDtlnoteNoteGet (dtl_note,solid_model_note);
	}

	ProError wcProDtlnote::DtlnoteGtolGet (ProDtlnote *dtl_note , ProGtol *gtol)
	{
		return ProDtlnoteGtolGet (dtl_note , gtol);
	}

	ProError wcProDtlnote::DtlnotedataAlloc(ProMdl owner,ProDtlnotedata *notedata)
	{
		return ProDtlnotedataAlloc(owner,notedata);
	}

	ProError wcProDtlnote::DtlnotedataFree(ProDtlnotedata notedata)
	{
		return ProDtlnotedataFree(notedata);
	}

	ProError wcProDtlnote::DtlnotedataIdGet(ProDtlnotedata notedata,int *id)
	{
		return ProDtlnotedataIdGet(notedata,id);
	}

	ProError wcProDtlnote::DtlnotedataLineAdd(ProDtlnotedata notedata,ProDtlnoteline line)
	{
		return ProDtlnotedataLineAdd(notedata,line);
	}

	ProError wcProDtlnote::DtlnoteldataLinesSet(ProDtlnotedata notedata,ProDtlnoteline *line)
	{
		return ProDtlnoteldataLinesSet(notedata,line);
	}

	ProError wcProDtlnote::DtlnotedataLinesCollect(ProDtlnotedata notedata,ProDtlnoteline **lines)
	{
		return ProDtlnotedataLinesCollect(notedata,lines);
	}

	ProError wcProDtlnote::DtlnotedataMirrorSet(ProDtlnotedata notedata,ProBoolean mirror)
	{
		return ProDtlnotedataMirrorSet(notedata,mirror);
	}

	ProError wcProDtlnote::DtlnotedataIsMirrored(ProDtlnotedata data,ProBoolean *mirrored)
	{
		return ProDtlnotedataIsMirrored(data,mirrored);
	}

	ProError wcProDtlnote::DtlnotedataColorGet(ProDtlnotedata notedata,ProColor *color)
	{
		return ProDtlnotedataColorGet(notedata,color);
	}

	ProError wcProDtlnote::DtlnotedataColorSet(ProDtlnotedata notedata,ProColor *color)
	{
		return ProDtlnotedataColorSet(notedata,color);
	}

	ProError wcProDtlnote::DtlnotedataAttachmentGet(ProDtlnotedata notedata,ProDtlattach *attachment)
	{
		return ProDtlnotedataAttachmentGet(notedata,attachment);
	}

	ProError wcProDtlnote::DtlnotedataAttachmentSet(ProDtlnotedata notedata,ProDtlattach attachment)
	{
		return ProDtlnotedataAttachmentSet(notedata,attachment);
	}

	ProError wcProDtlnote::DtlnotedataLeadersCollect(ProDtlnotedata notedata,ProDtlattach **leaders)
	{
		return ProDtlnotedataLeadersCollect(notedata,leaders);
	}

	ProError wcProDtlnote::DtlnotedataLeadersSet(ProDtlnotedata notedata,ProDtlattach *leaders)
	{
		return ProDtlnotedataLeadersSet(notedata,leaders);
	}

	ProError wcProDtlnote::DtlnotedataLeaderAdd(ProDtlnotedata data,ProDtlattach leader)
	{
		return ProDtlnotedataLeaderAdd(data,leader);
	}

	ProError wcProDtlnote::DtlnotedataElbowlengthGet(ProDtlnotedata data,ProBoolean *is_default,double *elbow_length)
	{
		return ProDtlnotedataElbowlengthGet(data,is_default,elbow_length);
	}

	ProError wcProDtlnote::DtlnotedataElbowlengthSet(ProDtlnotedata data,ProBoolean is_default,double elbow_length)
	{
		return ProDtlnotedataElbowlengthSet(data,is_default,elbow_length);
	}

	ProError wcProDtlnote::DtlnotedataAngleGet(ProDtlnotedata notedata,double *angle)
	{
		return ProDtlnotedataAngleGet(notedata,angle);
	}

	ProError wcProDtlnote::DtlnotedataAngleSet(ProDtlnotedata notedata,double angle)
	{
		return ProDtlnotedataAngleSet(notedata,angle);
	}

	ProError wcProDtlnote::DtlnotetextAlloc (ProDtlnotetext *text )
	{
		return ProDtlnotetextAlloc (text );
	}

	ProError wcProDtlnote::DtlnotetextFree(ProDtlnotetext text)
	{
		return ProDtlnotetextFree(text);
	}

	ProError wcProDtlnote::DtlnotetextHeightSet (ProDtlnotetext text,double height)
	{
		return ProDtlnotetextHeightSet (text,height);
	}

	ProError wcProDtlnote::DtlnotetextHeightGet (ProDtlnotetext text,double *height)
	{
		return ProDtlnotetextHeightGet (text,height);
	}

	ProError wcProDtlnote::DtlnotetextWidthSet (ProDtlnotetext text,double width_factor)
	{
		return ProDtlnotetextWidthSet (text,width_factor);
	}

	ProError wcProDtlnote::DtlnotetextWidthGet (ProDtlnotetext text,double *width_factor)
	{
		return ProDtlnotetextWidthGet (text,width_factor);
	}

	ProError wcProDtlnote::DtlnotetextSlantSet (ProDtlnotetext text,double slant_angle)
	{
		return ProDtlnotetextSlantSet (text,slant_angle);
	}

	ProError wcProDtlnote::DtlnotetextSlantGet (ProDtlnotetext text,double *slant_angle)
	{
		return ProDtlnotetextSlantGet (text,slant_angle);
	}

	ProError wcProDtlnote::DtlnotetextThicknessSet (ProDtlnotetext text,double thickness)
	{
		return ProDtlnotetextThicknessSet (text,thickness);
	}

	ProError wcProDtlnote::DtlnotetextThicknessGet (ProDtlnotetext text,double *thickness)
	{
		return ProDtlnotetextThicknessGet (text,thickness);
	}

	ProError wcProDtlnote::DtlnotetextFontSet (ProDtlnotetext text,ProName font)
	{
		return ProDtlnotetextFontSet (text,font);
	}

	ProError wcProDtlnote::DtlnotetextFontGet (ProDtlnotetext text,ProName font)
	{
		return ProDtlnotetextFontGet (text,font);
	}

	ProError wcProDtlnote::DtlnotetextUlineSet (ProDtlnotetext text,ProBoolean underline)
	{
		return ProDtlnotetextUlineSet (text,underline);
	}

	ProError wcProDtlnote::DtlnotetextUlineGet (ProDtlnotetext text,ProBoolean *underline)
	{
		return ProDtlnotetextUlineGet (text,underline);
	}

	ProError wcProDtlnote::DtlnotetextStringSet (ProDtlnotetext text,ProLine string)
	{
		return ProDtlnotetextStringSet (text,string);
	}

	ProError wcProDtlnote::DtlnotetextStringGet (ProDtlnotetext text,ProLine string)
	{
		return ProDtlnotetextStringGet (text,string);
	}

	ProError wcProDtlnote::DtlnotelineAlloc (ProDtlnoteline *line)
	{
		return ProDtlnotelineAlloc (line);
	}

	ProError wcProDtlnote::DtlnotelineFree (ProDtlnoteline line)
	{
		return ProDtlnotelineFree (line);
	}

	ProError wcProDtlnote::DtlnotelineTextAdd (ProDtlnoteline line,ProDtlnotetext text)
	{
		return ProDtlnotelineTextAdd (line,text);
	}

	ProError wcProDtlnote::DtlnotelineTextsSet (ProDtlnoteline line,ProDtlnotetext *texts)
	{
		return ProDtlnotelineTextsSet (line,texts);
	}

	ProError wcProDtlnote::DtlnotelineTextsCollect (ProDtlnoteline line,ProDtlnotetext **text)
	{
		return ProDtlnotelineTextsCollect (line,text);
	}

	ProError wcProDtlnote::DtlnotedataJustifSet(ProDtlnotedata notedata,ProHorizontalJustification hjust,ProVerticalJustification vjust )
	{
		return ProDtlnotedataJustifSet(notedata,hjust,vjust );
	}

	ProError wcProDtlnote::DtlnotedataJustifGet(ProDtlnotedata notedata,ProHorizontalJustification *hjust,ProVerticalJustification *vjust )
	{
		return ProDtlnotedataJustifGet(notedata,hjust,vjust );
	}

	ProError wcProDtlnote::DtlnotedataReadonlySet(ProDtlnotedata notedata,ProBoolean read_only )
	{
		return ProDtlnotedataReadonlySet(notedata,read_only );
	}

	ProError wcProDtlnote::DtlnotedataReadonlyGet(ProDtlnotedata notedata,ProBoolean *read_only )
	{
		return ProDtlnotedataReadonlyGet(notedata,read_only );
	}

	ProError wcProDtlnote::DtlnoteLineEnvelopeGet(ProDtlnote *note,int line,ProVector envel[4])
	{
		return ProDtlnoteLineEnvelopeGet(note,line,envel);
	}

	ProError wcProDtlnote::DtlnotedataIsDisplayed(ProDtlnotedata data,ProBoolean *is_displayed)
	{
		return ProDtlnotedataIsDisplayed(data,is_displayed);
	}

	ProError wcProDtlnote::DtlnotedataDisplayedSet(ProDtlnotedata data,ProBoolean displayed)
	{
		return ProDtlnotedataDisplayedSet(data,displayed);
	}

};