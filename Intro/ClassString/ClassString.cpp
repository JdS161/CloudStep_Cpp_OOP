#include "ClassString.h"

//String::String(unsigned int _size = 80)
//{
//	this->size = _size;
//	this->str = new char[_size] {};
//	cout << "DefConstructor: \t" << this << endl;
//
//}

String::String()
{
	unsigned int _size = 80;
	this->size = _size;
	this->str = new char[_size] {};
	cout << "DefConstructor: \t" << this << endl;
}

String::String(unsigned int _size = 80)
{
	this->size = _size;
	this->str = new char[_size] {};
	cout << "DefConstructor: \t" << this << endl;
}

String::String(const char* _str)
{
	this->size = strlen(_str) + 1;
	this->str = new char[size];
	for (int i = 0; i < size; i++)
		this->str[i] = _str[i];
	cout << "1arg Constructor: \t" << this << endl;

}

String::~String()
{
	delete[] this->str;	
	cout << "Destructor: \t" << this << endl;
}



void String::Print() const
{
	cout << "Size: \t" << size << endl;
	cout << "Str: \t" << str << endl;
}


