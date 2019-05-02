/*--------------  C L A S S  wcProMode  --------

   A Wrapper Class for ProE object: ProMode
   Created By: Michael Lucatz
   Date:       31/03/2006 23:24:54
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProMode.h>

class wcProMode: public wcProObject
{
public:
	wcProMode(void);
	~wcProMode(void);
public:

//  Retrieves the current mode of Pro/ENGINEER.
ProError ModeCurrentGet ( ProMode* p_mode );

};
