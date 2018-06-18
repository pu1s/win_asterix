#include "..\include\format.h"

asx::asx_formatter_tag::asx_formatter_tag() noexcept
{
	p_format_parameters		= new UCHAR();
	p_format_precision		= new unsigned int();
}

asx::asx_formatter_tag::asx_formatter_tag(const UCHAR&& params) noexcept : asx_formatter_tag()
{
	p_format_parameters = (UCHAR*)&params;
}

asx::asx_formatter_tag::asx_formatter_tag(const UCHAR && params, const unsigned int & precision) noexcept : asx::asx_formatter_tag::asx_formatter_tag()
{
	p_format_parameters = (UCHAR*)&params;
	assert(!(precision >= 10) && !(precision <= 0));
	p_format_precision = (unsigned int*)&precision;
}

void asx::asx_formatter_tag::set_format_parameters(const UCHAR && params) noexcept
{
	assert(!(p_format_parameters == nullptr));
	p_format_parameters = (UCHAR*)&params;
}

void asx::asx_formatter_tag::set_format_precision(const unsigned int && precision) noexcept
{
	assert(!(p_format_precision == nullptr));
	p_format_precision = (unsigned int*)&precision;
}

asx::asx_formatter_tag::~asx_formatter_tag()
{
	delete p_format_parameters;
	delete p_format_precision;
}
