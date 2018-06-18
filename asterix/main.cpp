#include <cstdlib>
#include <iostream>

#include <lib_asterix.h>
using namespace std;

int main()
{
	asterix_footer();
	asx::FORMATTER f((unsigned char)asx::FRMT_PARAM::FRMT_PARAM_DEFAULT | (unsigned char)asx::FRMT_PARAM::FRMT_PARAM_SHOWPOS, 5);
	auto fp((unsigned char)asx::FRMT_PARAM::FRMT_PARAM_SHOWPOS | (unsigned char)asx::FRMT_PARAM::FRMT_PARAM_SHOWEXP);
	if (fp & (unsigned char)asx::FRMT_PARAM::FRMT_PARAM_SHOWPOS) {
		cout << "WOW" << endl;
	} ;
#ifdef _WIN32
	system("pause");
#endif
	return 0;
}