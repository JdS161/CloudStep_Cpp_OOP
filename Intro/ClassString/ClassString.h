#pragma once
#include <iostream>

using namespace std;

class String
{
	unsigned int	size;		//size of the string in bytes
	char*			str;		//pointer to the srting in dynamic memory




public:
	//explicit String(unsigned int);
	String();
	explicit String(unsigned int);
	String(const char* _str);
	~String();
	


	//Methods
	void Print() const;


};
