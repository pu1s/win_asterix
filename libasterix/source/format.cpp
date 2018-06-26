#include "..\include\format.h"

asx::asx_formatter_tag::asx_formatter_tag() noexcept
{
	p_format_parameters		= new asx_uchar();
	p_format_precision		= new asx_uint();
#ifdef ASX_DEBUG
	DBG_MESSAGE("asx_formatter_tag ctor!");
#endif // ASX_DEBUG	
}

asx::asx_formatter_tag::asx_formatter_tag(const asx_uchar&& params) noexcept : asx_formatter_tag()
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
}

asx::asx_formatter_tag::asx_formatter_tag(const asx_formatter_tag & obj) noexcept
{
	this->p_format_parameters = obj.p_format_parameters;
	this->p_format_precision = obj.p_format_precision;
}

asx::asx_formatter_tag::asx_formatter_tag(const asx_uchar && params, const asx_uint & precision) noexcept : asx::asx_formatter_tag::asx_formatter_tag()
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
	assert(!(precision >= 10) && !(precision <= 0));
	*p_format_precision = (asx_uint)precision;
}

void asx::asx_formatter_tag::set_format_parameters(const asx_uchar && params) noexcept
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
}

void asx::asx_formatter_tag::set_format_parameters(const asx_uchar & params) noexcept
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
}

void asx::asx_formatter_tag::set_format_precision(const asx_uint & precision) noexcept
{
	assert(!(p_format_precision == nullptr));
	*p_format_precision = (asx_uint)precision;
}

asx::asx_formatter_tag::~asx_formatter_tag()
{
	delete p_format_parameters;
	delete(p_format_precision);
#ifdef ASX_DEBUG
	DBG_MESSAGE("asx_formatter_tag dtor!");
#endif // ASX_DEBUG	
}

