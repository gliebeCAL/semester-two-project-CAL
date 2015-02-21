#include <iostream>

using namespace std;

string FirstReverse(string str)
{
	// code goes here

	// a string needs to be declared to hold the newly reversed string
	string str2 = "";

	// This loop goes until it is at the end of the given string.
	// 1. It starts at the begining of the original string
	// 2. It places this character from the string into the new string
	// 3. This is itterated until there are no more characters in the given string
	for (int iii = 0; iii < str.length(); iii++)
	{
		str2 = str[iii] + str2;
	}

	return str2;
}

int main()
{
	string str = "";

	cin >> str;

	cout << "\n\n\nThe result is: " << FirstReverse(str) << endl;

	return 0;
}
