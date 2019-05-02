#pragma once
#define PRO_USE_VAR_ARGS

#include<ProToolkit.h>
#include <ProMessage.h>
#include "wcProObject.h"

class wcProMessage:wcProObject
{
public:
	wcProMessage(void);
	wcProMessage(wchar_t*);

	~wcProMessage(void);

public:
	ProError MessageDisplay(		
	ProCharLine message_name,void * Param1);
	wchar_t *MessageFileName;
	void MessageClear(void);
	// Reads a line of keyboard input and returns the contents as a wide string. Specify default values in the call to ProMessageDisplay(), using the separator ||| in the format string in the message file. (See the Pro/TOOLKIT User's Guide section Contents of the Message File for the specific placement of the ||| separator.)
	ProError MessageRead(double range[2], double* answer);
	ProError MessageRead(int range[2], int* answer);
	ProError MessageRead(int max_buffer_length, wchar_t* buffer);
	ProError MessageRead(wchar_t* buffer);
	// Places the translated contents of a formatted message into the specified output buffer. This function works just like ProMessageDisplay(), except the message is written to a string instead of the message area.
	ProError MessageToBuffer(ProLine translated_msg, ProCharLine message_name,void * Param1);
	ProError MessageToBuffer(ProLine translated_msg, ProCharLine message_name);
};


