#include "..\include\format.h"

asx::asx_formatter_tag::asx_formatter_tag() noexcept
{
	p_format_parameters		= new ASX_UCHAR();
	p_format_precision		= new ASX_UINT();
}

asx::asx_formatter_tag::asx_formatter_tag(const ASX_UCHAR&& params) noexcept : asx_formatter_tag()
{
	p_format_parameters = (ASX_UCHAR*)&params;
}

asx::asx_formatter_tag::asx_formatter_tag(const ASX_UCHAR && params, const ASX_UINT & precision) noexcept : asx::asx_formatter_tag::asx_formatter_tag()
{
	p_format_parameters = (ASX_UCHAR_PTR)&params;
	assert(!(precision >= 10) && !(precision <= 0));
	p_format_precision = (ASX_UINT_PTR)&precision;
}

void asx::asx_formatter_tag::set_format_parameters(const ASX_UCHAR && params) noexcept
{
	assert(!(p_format_parameters == nullptr));
	p_format_parameters = (ASX_UCHAR_PTR)&params;
}

void asx::asx_formatter_tag::set_format_precision(const ASX_UINT && precision) noexcept
{
	assert(!(p_format_precision == nullptr));
	p_format_precision = (ASX_UINT_PTR)&precision;
}

asx::asx_formatter_tag::~asx_formatter_tag()
{
	delete p_format_parameters;
	delete p_format_precision;
}
