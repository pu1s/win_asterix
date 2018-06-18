/*
MIT License

Copyright(c) 2018 Alexander Gorin pu1s@outlook.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#include "global.h"
#include <cassert>


#define ASX_UCHAR unsigned char
#define ASX_UINT unsigned int
#define ASX_UCHAR_PTR ASX_UCHAR*
#define ASX_UINT_PTR ASX_UINT*

namespace asx
{
	typedef
		enum  class  ASX_API asx_formatter_param_tag : ASX_UCHAR
	{
		FRMT_PARAM_DEFAULT = 0x0000, // Оставляет параметры стандартного ввода вывода независимо от того объявлены ли другие параметры
		FRMT_PARAM_SHOWPOS = 0x0001, // Включает возможность показывать знак плюс при положительном значении 
		FRMT_PARAM_FILLNUL = 0x0002, // Показывает нули слева от разделителя целой и дробной части
		FRMT_PARAM_SHOWEXP = 0x0004, // Представляет число в экспоненциальной форме
	}FRMT_PARAM;

	typedef
		struct ASX_API asx_formatter_tag
	{
		typedef ASX_UCHAR_PTR FRMT_PARAMS;
		typedef ASX_UINT_PTR FRMT_PRECISION;
	
	protected:
		FRMT_PARAMS			p_format_parameters;
		FRMT_PRECISION		p_format_precision;
	
	public:
		asx_formatter_tag() noexcept;
		explicit asx_formatter_tag(const ASX_UCHAR&& params) noexcept;
		explicit asx_formatter_tag(const ASX_UCHAR&& params, const ASX_UINT& precision) noexcept;
		void CDECL set_format_parameters(const ASX_UCHAR&&) noexcept;
		void CDECL set_format_precision(const ASX_UINT&&) noexcept;
		virtual  ~asx_formatter_tag();

		
	}FORMATTER, *_formatter_;
}
