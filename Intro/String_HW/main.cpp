#include "String_HW.h"

void main()
{
	StringHW str;
	str.Show();

	StringHW str1 = "Hello";
	cout << str1 << endl;
	//str2.Show();

	StringHW str2 = "World!";
	cout << str2 << endl;

	StringHW str3 = str1 + str2;
	cout << str3 << endl;
}