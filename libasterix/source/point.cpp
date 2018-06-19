#include "../include/point.h"

asx::types::basic_point::basic_point() noexcept
{
#ifdef ASX_DEBUG
	DBG_MESSAGE("Basic point ctor!");
#endif // ASX_DEBUG	
}

std::string asx::types::basic_point::to_string(formatter frmt) noexcept
{
	format = frmt;
	return "Basic Point";
}

asx::types::basic_point::~basic_point()
{
#ifdef ASX_DEBUG
	DBG_MESSAGE("Basic point dtor!");
#endif // ASX_DEBUG	
}