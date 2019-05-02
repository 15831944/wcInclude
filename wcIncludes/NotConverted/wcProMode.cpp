#include "wcProMode.h"

wcProMode::wcProMode(void)
{
}

wcProMode::~wcProMode(void)
{
}

ProError wcProMode::ModeCurrentGet ( ProMode* p_mode )
{
	return ProModeCurrentGet ( p_mode );
}

