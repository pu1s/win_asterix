#include <cstdlib>
#include <iostream>

#include <lib_asterix.h>
using namespace std;

int main()
{
	asterix_footer();
#ifdef _WIN32
	system("pause");
#endif
	return 0;
}