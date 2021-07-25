#include "ClassString.h"

//#define CONSTRUCTORS_CHECK


void main()
{

#ifdef CONSTRUCTORS_CHECK
	String str;
	str.Print();

	//String str = 5;	//Implicit conversion ftom INt to String
	String str2(5);		//Explicit constructor could be called only that way
						//and couldn't be called via =
	str2.Print();

	String str3 = "Hello";
	//str3 = str3;
	str3.Print();

	String str4 = str3;	//copy constructor
	str4.Print();

	String str5;
	str5 = str3;		//CopyAssignment
	str5.Print();
#endif // CONSTRUCTORS_CHECK

	String str1 = "Hello";
	cout << str1 << endl;
	String str2 = "World!";
	cout << str2 << endl;
	cout << "\n----------------------------------\n";
	String str3 = str1 + " " + str2;
	cout << "\n----------------------------------\n";
	cout << str3 << endl;
	cout << "\n----------------------------------\n";
	str1 += str2;
	cout << "\n----------------------------------\n";
	cout << str1 << endl;
	




}