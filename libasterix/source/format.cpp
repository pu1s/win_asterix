#include "..\include\format.h"


asx::custom_formatter_t::custom_formatter_t() noexcept
{
	p_format_parameters		= new asx_uchar();
	p_format_precision		= new asx_uint();
#ifdef ASX_DEBUG
	DBG_MESSAGE("asx_formatter_tag ctor!");
#endif // ASX_DEBUG	
}


asx::custom_formatter_t::custom_formatter_t(const asx_uchar&& params) noexcept : custom_formatter_t()
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
}

asx::custom_formatter_t::custom_formatter_t(const custom_formatter_t & obj) noexcept
{
	this->p_format_parameters = obj.p_format_parameters;
	this->p_format_precision = obj.p_format_precision;
}

asx::custom_formatter_t::custom_formatter_t(const asx_uchar && params, const asx_uint & precision) noexcept : asx::custom_formatter_t::custom_formatter_t()
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
	assert(!(precision >= 10) && !(precision <= 0));
	*p_format_precision = (asx_uint)precision;
}

void asx::custom_formatter_t::set_format_parameters(const asx_uchar && params) noexcept
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
}

void asx::custom_formatter_t::set_format_parameters(const asx_uchar & params) noexcept
{
	assert(!(p_format_parameters == nullptr));
	std::memcpy(p_format_parameters, &params, sizeof(const asx_uchar));
}

void asx::custom_formatter_t::set_format_precision(const asx_uint & precision) noexcept
{
	assert(!(p_format_precision == nullptr));
	*p_format_precision = (asx_uint)precision;
}

asx_uchar asx::custom_formatter_t::get_format_parameters() const noexcept
{
	assert(!(p_format_parameters == nullptr));
	return 	*p_format_parameters;
}

asx_uint asx::custom_formatter_t::get_format_precision() const noexcept
{
	assert(!(p_format_precision == nullptr));
	return *p_format_precision;
}

asx::custom_formatter_t::~custom_formatter_t()
{
	delete p_format_parameters;
	delete(p_format_precision);
#ifdef ASX_DEBUG
	DBG_MESSAGE("asx_formatter_tag dtor!");
#endif // ASX_DEBUG	
}

