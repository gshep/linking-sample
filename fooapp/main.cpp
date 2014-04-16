#include <iostream>
#include <vector>

#include "bar.h"
#include "version.h"

using namespace std;

int main()
{
	cout << "Hello World!" << endl;
	vector<char> barDescription(Bar::getDescription(0));
	Bar::getDescription(&barDescription[0]);
	string descString(&barDescription[0]);

	cout << descString.c_str() << endl;

	Version_s version;
	int result(get_version(&version));

	cout << "version::get_version result = " << result << endl;
	cout << "But I uses liversion "
		 << version.major << "."
		 << version.minor << "."
		 << version.bugfix << endl;
    cout << "number = " << get_number() << endl;

	return 0;
}
