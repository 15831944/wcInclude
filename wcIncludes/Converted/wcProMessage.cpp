#include ".\wcpromessage.h"

wcProMessage::wcProMessage(void)
{
}

wcProMessage::wcProMessage(wchar_t *PFN)
{	
	MessageFileName=PFN;
}
wcProMessage::~wcProMessage(void)
{
}

//Prints a text message to the Pro/ENGINEER message area, then scrolls previous messages to make room for the new message. The function looks for the message name in the specified message file, which provides a mapping between the message name and the actual text of the message to be displayed.
ProError wcProMessage::MessageDisplay(ProCharLine message_name,	void * Param1)
{
	return ProMessageDisplay(MessageFileName,message_name,Param1);
}

//Scrolls the text in the message area up one line after a call to ProMessageDisplay(). This command produces only one carriage return; if called multiple times the command is ignored.
void wcProMessage::MessageClear()
{
	ProMessageClear();
}

// Reads a double-precision, floating-point number from the keyboard. If the user types an invalid string, or a value outside the range of values, the function asks the user to enter the value again. Specify default values in the call to ProMessageDisplay(), using the separator ||| in the format string in the message file. (See the Pro/TOOLKIT User's Guide section Contents of the Message File for the specific placement of the ||| separator.)
ProError wcProMessage::MessageRead(double range[2], double* answer)
{
	return ProMessageDoubleRead(range,answer);
}

// Reads an integer from the keyboard. If the user types an invalid string, or a value outside the range of values, the function asks the user to enter the value again. Specify default values in the call to ProMessageDisplay(), using the separator ||| in the format string in the message file. (See the Pro/TOOLKIT User's Guide section Contents of the Message File for the specific placement of the ||| separator.)
ProError wcProMessage::MessageRead(int range[2], int* answer)
{
	return ProMessageIntegerRead(range,answer);
}

// Reads a line of keyboard input and returns the contents as a wide string. Specify default values in the call to ProMessageDisplay(), using the separator ||| in the format string in the message file. (See the Pro/TOOLKIT User's Guide section Contents of the Message File for the specific placement of the ||| separator.)
ProError wcProMessage::MessageRead(int max_buffer_length, wchar_t* buffer)
{
	return ProMessageStringRead(max_buffer_length,buffer);
}
ProError wcProMessage::MessageRead( wchar_t* buffer)
{
	return ProMessageStringRead(127,buffer);
}

// Places the translated contents of a formatted message into the specified output buffer. This function works just like ProMessageDisplay(), except the message is written to a string instead of the message area.
ProError wcProMessage::MessageToBuffer(ProLine translated_msg, ProCharLine message_name,void * Param1)
{
	return ProMessageToBuffer(translated_msg,MessageFileName, message_name,Param1);
}

ProError wcProMessage::MessageToBuffer(ProLine translated_msg, ProCharLine message_name)
{
	return ProMessageToBuffer(translated_msg,MessageFileName, message_name);
}