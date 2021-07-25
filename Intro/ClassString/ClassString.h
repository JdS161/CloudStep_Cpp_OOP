#pragma once
#include <iostream>

using namespace std;

class String
{
	unsigned int	size;		//size of the string in bytes
	char*			str;		//pointer to the srting in dynamic memory




public:
	
	explicit String(unsigned int _size = 80);
	String(const char* _str);
	String(const String&);

	~String();


	unsigned int GetSize() const;
	const char* GetStr() const;
	char* GetStr();
	

	//OPERATORS
	String& operator=(const String& other);
	String& operator+=(const String& other);
	const char& operator[](unsigned int i) const; //i - index
	char& operator[](unsigned int i); //i - index
	friend ostream& operator<<(ostream& os, const String& obj);
	friend String operator+ (const String& left, const String& right);
	
	
	//Methods
	void Print() const;


};



