#include <cstdlib>
#include <iostream>

#include <lib_asterix.h>
#include "main.h"
using namespace std;

int main()
{
	asterix_footer();
	NewFunction();
#ifdef _WIN32
	system("pause");
#endif
	return 0;
}

void NewFunction()
{
	asx::_custom_formatter f((unsigned char)asx::FRMT_CUSTOM_PARAM::FRMT_PARAM_DEFAULT | (unsigned char)asx::FRMT_CUSTOM_PARAM::FRMT_PARAM_SHOWPOS, 5);
	
}
