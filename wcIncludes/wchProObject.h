#pragma once
#define RET_IF_BAD(x)if(x != PRO_TK_NO_ERROR)return false
#define THRW_IF_BAD(x,tx)if(x != PRO_TK_NO_ERROR)throw tx;

class wcProObject
{
public:
	wcProObject::wcProObject(void)
	{
	}

	wcProObject::~wcProObject(void)
	{
	}
};
