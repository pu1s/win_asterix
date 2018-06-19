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
	asx::_formatter f((unsigned char)asx::_frmt_param::FRMT_PARAM_DEFAULT | (unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWPOS, 5);
	
	asx::types::basic_point::formatter fyyy((unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWPOS);
	asx::types::basic_point aut;
	
	cout << aut.to_string() << endl;
}
