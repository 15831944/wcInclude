#include "wcProGraphic.h"

wcProGraphic::wcProGraphic(void)
{
}

wcProGraphic::~wcProGraphic(void)
{
}

ProError wcProGraphic::GraphicsArcDraw ( ProPoint3d center,double radius,ProVector vector1,ProVector vector2 )
{
	return ProGraphicsArcDraw ( center,radius,vector1,vector2 );
}

ProError wcProGraphic::GraphicsPolygonDraw ( ProPoint2d* point_array,int num_points,ProColortype fill_color )
{
	return ProGraphicsPolygonDraw ( point_array,num_points,fill_color );
}

ProError wcProGraphic::GraphicsTextDisplay ( ProPoint3d point,wchar_t* text )
{
	return ProGraphicsTextDisplay ( point,text );
}

ProError wcProGraphic::GraphicsColorSet ( ProColortype new_color,ProColortype *p_old_color )
{
	return ProGraphicsColorSet ( new_color,p_old_color );
}

ProError wcProGraphic::GraphicsColorModify ( ProColor* new_color,ProColor *p_old_color )
{
	return ProGraphicsColorModify ( new_color,p_old_color );
}

ProError wcProGraphic::TextAttributesCurrentGet (ProTextAttribute* attribute)
{
	return ProTextAttributesCurrentGet (attribute);
}

ProError wcProGraphic::TextFontIdCurrentSet ( int font_id )
{
	return ProTextFontIdCurrentSet ( font_id );
}

ProError wcProGraphic::TextHeightCurrentSet ( double height )
{
	return ProTextHeightCurrentSet ( height );
}

ProError wcProGraphic::TextWidthFactorCurrentSet ( double width_factor )
{
	return ProTextWidthFactorCurrentSet ( width_factor );
}

ProError wcProGraphic::TextRotationAngleCurrentSet ( double rotation_angle )
{
	return ProTextRotationAngleCurrentSet ( rotation_angle );
}

ProError wcProGraphic::TextSlantAngleCurrentSet( double slant_angle )
{
	return ProTextSlantAngleCurrentSet( slant_angle );
}

ProError wcProGraphic::TextAttributesCurrentUnset ( void )
{
	return ProTextAttributesCurrentUnset ();
}

ProError wcProGraphic::TextFontNameToId (ProLine font_name,int* font_id)
{
	return ProTextFontNameToId (font_name,font_id);
}

ProError wcProGraphic::TextFontNameGet (int font_id,ProLine font_name)
{
	return ProTextFontNameGet (font_id,font_name);
}

ProError wcProGraphic::GraphicsModeSet ( ProDrawMode new_mode,ProDrawMode* old_mode )
{
	return ProGraphicsModeSet ( new_mode,old_mode );
}

ProError wcProGraphic::MousePickGet ( ProMouseButton expected_button,ProMouseButton* button_pressed,ProPoint3d position )
{
	return ProMousePickGet ( expected_button,button_pressed,position );
}

ProError wcProGraphic::MouseTrack ( int options,ProMouseButton* button_pressed,ProPoint3d position )
{
	return ProMouseTrack ( options,button_pressed,position );
}

ProError wcProGraphic::MouseBoxInput ( ProPoint3d point,ProOutline outline )
{
	return ProMouseBoxInput ( point,outline );
}

