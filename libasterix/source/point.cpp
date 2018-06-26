#include "../include/point.h"
#include <functional>
#include <algorithm>

asx::types::basic_point_item::basic_point_item() noexcept
{
#ifdef ASX_DEBUG
	DBG_MESSAGE("Basic point ctor!");
#endif // ASX_DEBUG	
}


asx::types::basic_point_item::~basic_point_item()
{
#ifdef ASX_DEBUG
	DBG_MESSAGE("Basic point dtor!");
#endif // ASX_DEBUG	
}