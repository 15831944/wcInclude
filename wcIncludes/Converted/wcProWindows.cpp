#include "wcProWindows.h"

wcProWindows::wcProWindows(void)
{
}

wcProWindows::~wcProWindows(void)
{
}

ProError wcProWindows::WindowSizeGet (int win_id,double *width, double *height)
{
	return ProWindowSizeGet (win_id,width, height);
}

ProError wcProWindows::WindowPositionGet (int win_id,double *x, double *y)
{
	return ProWindowPositionGet (win_id,x, y);
}

ProError wcProWindows::WindowClear ( int window_id )
{
	return ProWindowClear ( window_id );
}

ProError wcProWindows::WindowRepaint ( int window_id )
{
	return ProWindowRepaint ( window_id );
}

ProError wcProWindows::WindowRefresh ( int window_id )
{
	return ProWindowRefresh ( window_id );
}

ProError wcProWindows::WindowCurrentGet ( int* p_window_id )
{
	return ProWindowCurrentGet ( p_window_id );
}

ProError wcProWindows::WindowCurrentSet ( int window_id )
{
	return ProWindowCurrentSet ( window_id );
}

ProError wcProWindows::ObjectwindowCreate (ProName object_name,ProType object_type,int* p_window_id)
{
	return ProObjectwindowCreate (object_name,object_type,p_window_id);
}

ProError wcProWindows::AccessorywindowCreate (ProName object_name,ProType object_type,int* p_window_id)
{
	return ProAccessorywindowCreate (object_name,object_type,p_window_id);
}

ProError wcProWindows::BarewindowCreate (ProName object_name,ProType object_type,int* p_window_id)
{
	return ProBarewindowCreate (object_name,object_type,p_window_id);
}

ProError wcProWindows::WindowDelete ( int window_id )
{
	return ProWindowDelete ( window_id );
}

ProError wcProWindows::WindowCurrentMatrixGet ( ProMatrix matrix )
{
	return ProWindowCurrentMatrixGet ( matrix );
}

ProError wcProWindows::WindowsVisit (ProWindowVisitAction visit_func,ProAppData app_data)
{
	return ProWindowsVisit (visit_func,app_data);
}

ProError wcProWindows::WindowMdlGet (int window,ProMdl *r_mdl)
{
	return ProWindowMdlGet (window,r_mdl);
}

ProError wcProWindows::WindowPanZoomMatrixSet(int window,ProMatrix Matrix)
{
	return ProWindowPanZoomMatrixSet(window,Matrix);
}

ProError wcProWindows::WindowActivate( int window )
{
	return ProWindowActivate( window );
}

ProError wcProWindows::WindowCurrentClose( void )
{
	return ProWindowCurrentClose();
}

ProError wcProWindows::WindowRefit(int window_id)
{
	return ProWindowRefit(window_id);
}

ProError wcProWindows::WindowBrowserSizeGet ( int window_id ,double *percent )
{
	return ProWindowBrowserSizeGet ( window_id ,percent );
}

ProError wcProWindows::WindowBrowserSizeSet ( int window_id ,double percent )
{
	return ProWindowBrowserSizeSet ( window_id ,percent );
}

ProError wcProWindows::WindowURLShow(int window_id, wchar_t* url )
{
	return ProWindowURLShow (window_id, url);	
}

ProError wcProWindows::WindowURLGet(int window_id , wchar_t **url )
{
	return ProWindowURLGet ( window_id , url);
}