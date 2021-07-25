#include "ClassString.h"

void main()
{
	String str;
	str.Print();

	//String str = 5;	//Implicit conversion ftom INt to String
	String str2(5);		//Explicit constructor could be called only that way
						//and couldn't be called via =
	str2.Print();

	String str3 = "Hello";
	str3.Print();

	String str4 = str3;
	str4.Print();



}