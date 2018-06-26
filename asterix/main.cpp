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
	asx::_formatter f((unsigned char)asx::FRMT_CUSTOM_PARAM::FRMT_PARAM_DEFAULT | (unsigned char)asx::FRMT_CUSTOM_PARAM::FRMT_PARAM_SHOWPOS, 5);
	
	asx::types::basic_point_item::formatter fyyy((unsigned char)asx::FRMT_CUSTOM_PARAM::FRMT_PARAM_SHOWPOS);
	asx::types::point_item<int> aut;
	asx::types::point_item<int> ttt(aut);
	auto ff = fyyy.get_format_parameters();
	ttt = aut;
	cout << aut.to_string() << endl;
}
