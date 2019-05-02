/*--------------  C L A S S  wcProDtlnote  --------

   A Wrapper Class for ProE object: ProDtlnote
   Created By: Michael Lucatz
   Date:       02/04/2006 22:14:33
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProDtlnote.h>

class wcProDtlnote: public wcProObject
{
public:
	wcProDtlnote(void);
	~wcProDtlnote(void);
public:

//  Enables or disables the Pro/ENGINEER user to select drawing detail notes flagged as read-only.
ProError DrawingReadonlyselectionAllow(ProBoolean allow);

//  Creates a note.
ProError DtlnoteCreate(ProMdl owner,ProDtlsymdef *symbol,ProDtlnotedata notedata,ProDtlnote *note);

//  Gets a note data for the specified note.
ProError DtlnoteDataGet(ProDtlnote *note,ProDtlsymdef *symbol,ProDisplayMode mode,ProDtlnotedata *notedata);

//  Deletes a note.
ProError DtlnoteDelete(ProDtlnote *note,ProDtlsymdef *symbol);

//  Modifies a note.
ProError DtlnoteModify(ProDtlnote *note,ProDtlsymdef *symbol,ProDtlnotedata notedata);

//  Draw a note. Make note in the database appear on the drawing until the drawing is regenerated.
ProError DtlnoteDraw(ProDtlnote *note);

//  Erase a note. Makes the note disappear on the drawing until the drawing is regenerated.
ProError DtlnoteErase(ProDtlnote *note);

//  Show a note. Make note in the database appear on the drawing and continue to appear after the
ProError DtlnoteShow(ProDtlnote *note);

//  Remove a note. Make note in the database disappear on the drawing and continue to disappear after the
ProError DtlnoteRemove(ProDtlnote *note);

//  Collect notes in the specified drawing.
ProError DrawingDtlnotesCollect(ProDrawing drawing,ProDtlsymdef *symbol,int sheet,ProDtlnote **notes);

//  Visit notes in the specified drawing.
ProError DrawingDtlnoteVisit(ProDrawing drawing,ProDtlsymdef *symbol,int sheet,ProDtlitemVisitAction visit_action,ProDtlitemFilterAction filter_action,ProAppData appdata);

// To provide the model to which parameterized text in a detail note refers.
ProError DtlnoteModelrefGet( ProDtlnote *note,ProDtlsyminst *symbol_inst,int line_index,int text_index,ProMdl *model );

//  Return the solid model note that shown as a detail note.
ProError DtlnoteNoteGet (ProDtlnote *dtl_note,ProNote* solid_model_note);

//  Return the geometric tolerance shown in a detail note.
ProError DtlnoteGtolGet (ProDtlnote *dtl_note , ProGtol *gtol);

//  Allocate and initialize memory for note data.
ProError DtlnotedataAlloc(ProMdl owner,ProDtlnotedata *notedata);

//  Release memory allocated by ProDtlsyminstdataAlloc.
ProError DtlnotedataFree(ProDtlnotedata notedata);

//  Gets a note id.
ProError DtlnotedataIdGet(ProDtlnotedata notedata,int *id);

//  Adds a text line to note.
ProError DtlnotedataLineAdd(ProDtlnotedata notedata,ProDtlnoteline line);

//  Sets text lines to note.
ProError DtlnoteldataLinesSet(ProDtlnotedata notedata,ProDtlnoteline *line);

//  Collect text lines in the specified note.
ProError DtlnotedataLinesCollect(ProDtlnotedata notedata,ProDtlnoteline **lines);

//  Sets a mirror flag for the specified note.
ProError DtlnotedataMirrorSet(ProDtlnotedata notedata,ProBoolean mirror);

//  Gets a mirror flag for the specified note.
ProError DtlnotedataIsMirrored(ProDtlnotedata data,ProBoolean *mirrored);

//  Gets a color for the specified note.
ProError DtlnotedataColorGet(ProDtlnotedata notedata,ProColor *color);

//  Sets a color for the specified note.
ProError DtlnotedataColorSet(ProDtlnotedata notedata,ProColor *color);

//  Gets an attachment for the specified note.
ProError DtlnotedataAttachmentGet(ProDtlnotedata notedata,ProDtlattach *attachment);

//  Sets an attachment for the specified note.
ProError DtlnotedataAttachmentSet(ProDtlnotedata notedata,ProDtlattach attachment);

//  Collect leaders in the specified note.
ProError DtlnotedataLeadersCollect(ProDtlnotedata notedata,ProDtlattach **leaders);

//  Sets leaders for the note.
ProError DtlnotedataLeadersSet(ProDtlnotedata notedata,ProDtlattach *leaders);

//  Adds a leader to the note.
ProError DtlnotedataLeaderAdd(ProDtlnotedata data,ProDtlattach leader);

//  Gets the elbow length for the specified note.
ProError DtlnotedataElbowlengthGet(ProDtlnotedata data,ProBoolean *is_default,double *elbow_length);

//  Sets the elbow length for the specified note.
ProError DtlnotedataElbowlengthSet(ProDtlnotedata data,ProBoolean is_default,double elbow_length);

//  Gets an angle for the specified note.
ProError DtlnotedataAngleGet(ProDtlnotedata notedata,double *angle);

//  Sets an angle for the specified note.
ProError DtlnotedataAngleSet(ProDtlnotedata notedata,double angle);

// Allocate memory for the note text data.
ProError DtlnotetextAlloc (ProDtlnotetext *text );

// Free memory that is allocated by ProDtlnotetextAlloc.
ProError DtlnotetextFree(ProDtlnotetext text);

// Setup the text height, in screen units.
ProError DtlnotetextHeightSet (ProDtlnotetext text,double height);

// Get the text height, in screen units.
ProError DtlnotetextHeightGet (ProDtlnotetext text,double *height);

// Setup the text width_factor.
ProError DtlnotetextWidthSet (ProDtlnotetext text,double width_factor);

// Get the text width_factor.
ProError DtlnotetextWidthGet (ProDtlnotetext text,double *width_factor);

// Setup the text slant_angle.
ProError DtlnotetextSlantSet (ProDtlnotetext text,double slant_angle);

// Get the text slant_angle.
ProError DtlnotetextSlantGet (ProDtlnotetext text,double *slant_angle);

// Setup the text thickness.
ProError DtlnotetextThicknessSet (ProDtlnotetext text,double thickness);

// Get the text thickness.
ProError DtlnotetextThicknessGet (ProDtlnotetext text,double *thickness);

// Setup the text font.
ProError DtlnotetextFontSet (ProDtlnotetext text,ProName font);

// Get the text font.
ProError DtlnotetextFontGet (ProDtlnotetext text,ProName font);

// Setup the text underline attribute.
ProError DtlnotetextUlineSet (ProDtlnotetext text,ProBoolean underline);

// Get the text underline attribute.
ProError DtlnotetextUlineGet (ProDtlnotetext text,ProBoolean *underline);

// Setup the string field in the text.
ProError DtlnotetextStringSet (ProDtlnotetext text,ProLine string);

// Get the string field from the text.
ProError DtlnotetextStringGet (ProDtlnotetext text,ProLine string);

// Allocate memory for the note text line data.
ProError DtlnotelineAlloc (ProDtlnoteline *line);

// Free memory that was allocated by ProDtlnotelineAlloc.
ProError DtlnotelineFree (ProDtlnoteline line);

// Add text to the note text line data.
ProError DtlnotelineTextAdd (ProDtlnoteline line,ProDtlnotetext text);

// Setup the text for the note text line data.
ProError DtlnotelineTextsSet (ProDtlnoteline line,ProDtlnotetext *texts);

//   Returns text entities contained in the note line. Each textentity can have its own properties and parametric references.
ProError DtlnotelineTextsCollect (ProDtlnoteline line,ProDtlnotetext **text);

// Sets justification for the specified note.
ProError DtlnotedataJustifSet(ProDtlnotedata notedata,ProHorizontalJustification hjust,ProVerticalJustification vjust );

// Gets note justification values.
ProError DtlnotedataJustifGet(ProDtlnotedata notedata,ProHorizontalJustification *hjust,ProVerticalJustification *vjust );

// Sets read-only flag for the specified note.
ProError DtlnotedataReadonlySet(ProDtlnotedata notedata,ProBoolean read_only );

// Gets read-only flag for the specified note.
ProError DtlnotedataReadonlyGet(ProDtlnotedata notedata,ProBoolean *read_only );

// Get the envelope of a line in specified note.
ProError DtlnoteLineEnvelopeGet(ProDtlnote *note,int line,ProVector envel[4]);

//    Checks if the draft note is displayed.
ProError DtlnotedataIsDisplayed(ProDtlnotedata data,ProBoolean *is_displayed);

//    Marks the draft entity to be displayed
ProError DtlnotedataDisplayedSet(ProDtlnotedata data,ProBoolean displayed);

};
