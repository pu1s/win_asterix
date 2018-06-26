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
#include "format.h"

#include <string>
#include <sstream>
#include <iomanip>
 
namespace asx
{
	namespace types
	{
		struct basic_point_item
		{
			typedef asx::asx_formatter_tag formatter;
			basic_point_item() noexcept;
		public:
			formatter format;
		public:
			virtual std::string CDECL to_string(const unsigned char&& params = 0) noexcept = 0;
			
			virtual ~basic_point_item();
		};

		template <typename _Point_Item_Type>
		struct point_item : public basic_point_item
		{
		private:
			_Point_Item_Type _item;
			public:
			point_item() noexcept   
				: _item(_Point_Item_Type())
			{
				  
			}
			point_item(const point_item& other) noexcept : point_item()
			{
				//*this = other;
				this->_item = other._item;
				this->format = other.format;
			}

			point_item(point_item&& other) noexcept : point_item()
			{
				//*this = other;
				this->_item = other._item;
				this->format = other.format;
			}

			point_item& operator = (const point_item& other)	noexcept
			{
				this->_item = other._item;
				this->format = other.format;
				return *this;
			}
			point_item& operator = (point_item&& other)	noexcept
			{
				*this = std::move(other);
				return *this;
			}

			std::string CDECL to_string(const unsigned char&& params = 0) noexcept override
			{
				std::stringstream	_tmp_str;
				if (params == 0)
				{
					_tmp_str << std::endl;
				}
				return _tmp_str.str();
			}
		};


	}

}