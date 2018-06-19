
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
#include <cstdio>

#ifdef _WIN32

#endif


//
// Define Import & Export functions macro
//
#ifndef ASTERIX_EXPORT
#define ASTERIX_EXPORT
#endif // !ASTERIX_EXPORT

#ifdef ASTERIX_EXPORT
#ifdef __cplusplus
#define __asx_api__ __declspec(dllexport)
#else
#define __asx_api__ extern "C"
#endif
#else
#define __asx_api__ __declspec(dllimport)
#endif // ASTERIX_EXPORT

#ifdef _WIN32
#define CDECL __cdecl
#endif

// DEBUG
// Enable Debug Messaging
//#define ASX_DEBUG
// Debug messge macro
#define DBG_MESSAGE(message)\
{\
 	printf("Asterix Debug Message begin:\nFile: %s; \nLine: %d;  Function name: %s; \n%s \nAsterix Debug Message end.\n\r", (__FILE__), (__LINE__),(__FUNCTION__), (message));\
}




