/*--------------  C L A S S  wcProWindows  --------

   A Wrapper Class for ProE object: ProWindows
   Created By: Michael Lucatz
   Date:       09/04/2006 12:39:00
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProWindows.h>

class wcProWindows: public wcProObject
{
public:
	wcProWindows(void);
	~wcProWindows(void);
public:

//  Returns the size of the Pro/ENGINEER window.
ProError WindowSizeGet (int win_id,double *width, double *height);

//   Returns the position of the upper, left corner of the Pro/ENGINEER window dialog from the upper, left corner
ProError WindowPositionGet (int win_id,double *x, double *y);

//  Clears the Pro/ENGINEER window.
ProError WindowClear ( int window_id );

//  Is the equivalent of the Pro/ENGINEER command View, Repaint.
ProError WindowRepaint ( int window_id );

//   Refreshes the screen.  The function does not clear highlights.  This is the most efficient function to use if you
ProError WindowRefresh ( int window_id );

//   Retrieves the current window identifier.
ProError WindowCurrentGet ( int* p_window_id );

//   Sets the current window to the one specified by the<i>window_id argument.
ProError WindowCurrentSet ( int window_id );

//   Retrieves a window and attaches the object to it.
ProError ObjectwindowCreate (ProName object_name,ProType object_type,int* p_window_id);

//   Retrieves a window and attaches the object to it.
ProError AccessorywindowCreate (ProName object_name,ProType object_type,int* p_window_id);

//   Retrieves a window and attaches the object to it.
ProError BarewindowCreate (ProName object_name,ProType object_type,int* p_window_id);

//   Closes a window and breaks the object-to-window attachment.
ProError WindowDelete ( int window_id );

//   Retrieves the pan and zoom matrix of the current window.
ProError WindowCurrentMatrixGet ( ProMatrix matrix );

//  Visits all the Pro/ENGINEER windows.
ProError WindowsVisit (ProWindowVisitAction visit_func,ProAppData app_data);

//   Retrieves the Pro/ENGINEER model that owns the specified window.
ProError WindowMdlGet (int window,ProMdl *r_mdl);

//   Sets the matrix for the current window.
ProError WindowPanZoomMatrixSet(int window,ProMatrix Matrix);

//  Activates the specified window.
ProError WindowActivate( int window );

//  Closes the currently active window.
ProError WindowCurrentClose( void );

//  Refits the display of an  object in the windowspecified by the window_id.
ProError WindowRefit(int window_id);

//   Get information about the visible size of the embeddedbrowser in this window.
ProError WindowBrowserSizeGet ( int window_id ,double *percent );

//   Set the visible size of the embedded browserin this window.
ProError WindowBrowserSizeSet ( int window_id ,double percent );

//	Set the URL displayed in the window's embedded browser.
ProError WindowURLShow (int window_id,  wchar_t* url );

//	Get the URL displayed in the window's embedded browser.
ProError WindowURLGet ( int window_id , wchar_t **url );

};
