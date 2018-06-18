#include <cstdlib>
#include <iostream>

#include <lib_asterix.h>
using namespace std;

int main()
{
#ifdef _WIN32
	system("pause");
#endif
	cout << "Hello Asterix!!!" << endl;
	return 0;
}