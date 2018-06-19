#include <cstdlib>
#include <iostream>

#include <lib_asterix.h>
using namespace std;

int main()
{
	asterix_footer();
	asx::_formatter f((unsigned char)asx::_frmt_param::FRMT_PARAM_DEFAULT | (unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWPOS, 5);
	auto fp((unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWPOS | (unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWEXP);
	if (fp & (unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWPOS) {
		cout << "WOW" << endl;
	} ;

	asx::types::basic_point::formatter fyyy((unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWPOS);
	asx::types::basic_point aut;
	aut.format.set_format_parameters((unsigned char)asx::_frmt_param::FRMT_PARAM_SHOWPOS);
	cout << aut.to_string() << endl;
#ifdef _WIN32
	system("pause");
#endif
	return 0;
}