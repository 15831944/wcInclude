/*--------------  C L A S S  wcProGraphic  --------

   A Wrapper Class for ProE object: ProGraphic
   Created By: Michael Lucatz
   Date:       31/07/2007 15:58:51
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProGraphic.h>

class wcProGraphic: public wcProObject
{
public:
	wcProGraphic(void);
	~wcProGraphic(void);
public:

// Draws an arc on the screen.
ProError GraphicsArcDraw ( ProPoint3d center,double radius,ProVector vector1,ProVector vector2 );

// Draws filled or unfilled polygons in the window.
ProError GraphicsPolygonDraw ( ProPoint2d* point_array,int num_points,ProColortype fill_color );

// Draws text on the screen.
ProError GraphicsTextDisplay ( ProPoint3d point,wchar_t* text );

//  Changes the color used to draw any subsequent graphics.
ProError GraphicsColorSet ( ProColortype new_color,ProColortype *p_old_color );

//  Changes the color used to draw any subsequent graphics.
ProError GraphicsColorModify ( ProColor* new_color,ProColor *p_old_color );

// Retrieves the current text attributes. If the current text attributes have
ProError TextAttributesCurrentGet (ProTextAttribute* attribute);

//    Sets the font identifier of Pro/ENGINEER text output.
ProError TextFontIdCurrentSet ( int font_id );

//    Sets the height of Pro/ENGINEER text output.
ProError TextHeightCurrentSet ( double height );

//    Sets the width factor of Pro/ENGINEER text output.
ProError TextWidthFactorCurrentSet ( double width_factor );

//    Sets the rotational angle of Pro/ENGINEER text output.
ProError TextRotationAngleCurrentSet ( double rotation_angle );

//    Sets the slant angle of Pro/ENGINEER text output.
ProError TextSlantAngleCurrentSet( double slant_angle );

//   Unsets the text attributes set using the function<b>ProText*CurrentSet()</b>. After unsetting the attributes,
ProError TextAttributesCurrentUnset ( void );

// Returns the identifier for the specified text font name.
ProError TextFontNameToId (ProLine font_name,int* font_id);

// Retrieves the font name for the specified font identifier.
ProError TextFontNameGet (int font_id,ProLine font_name);

//   Sets the drawing mode.
ProError GraphicsModeSet ( ProDrawMode new_mode,ProDrawMode* old_mode );

// Reports the mouse position when the user presses one of the mouse
ProError MousePickGet ( ProMouseButton expected_button,ProMouseButton* button_pressed,ProPoint3d position );

// Reports the current mouse position immediately, regardless of
ProError MouseTrack ( int options,ProMouseButton* button_pressed,ProPoint3d position );

// Draws a dynamic rectangle from the specified point (in screen
ProError MouseBoxInput ( ProPoint3d point,ProOutline outline );

};
