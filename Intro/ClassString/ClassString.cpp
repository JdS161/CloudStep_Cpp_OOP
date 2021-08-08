#include "..\String_HW\String_HW.h"
#include "ClassString.h"


String::String(unsigned int _size): size(_size)
{
	//->size = _size;
	this->str = new char[_size] {};
	cout << "DefConstructor: \t" << this << endl;
}

String::String(const char* _str) :size(strlen(_str) + 1), str(new char[size] {}) //Constant char pointer - is a string constant
{
	/*this->size = strlen(_str) + 1;
	this->str = new char[size];*/
	for (int i = 0; i < size; i++)
		this->str[i] = _str[i];
	cout << "1arg Constructor: \t" << this << endl;

}

String::String(const String& other) : size(other.size), str(new char[size] {})
{
	this->size = other.size;
	this->str = new char[size] {};
	for (int i = 0; i < size; i++)
		this->str[i] = other.str[i];
	cout << "CopyConstructor: \t" << this << endl;
}



String::~String()
{
	delete[] this->str;	
	cout << "Destructor: \t\t" << this << endl;
}

unsigned int String::GetSize() const
{
	return size;
}

const char* String::GetStr() const
{
	return str;
}

char* String::GetStr()
{
	return str;
}

String& String::operator=(const String& other)
{
	//0) Checking wether the object is not those we've already have
	if (this == &other) return *this;
	//1) Delete previous value
	delete[] this->str;
	//2) Releasing DeepCopy
	this->size = other.size;
	this->str = new char[size] {};
	for (int i = 0; i < size; i++)
		this->str[i] = other.str[i];
	cout << "CopyConstructor: \t" << this << endl;
	return *this;
}

String& String::operator+=(const String& other)
{
	return *this = *this + other;
}

//Operator [] (indexing operator - SUBSCRIPT OPERATOR) returns value by index
const char& String::operator[](unsigned int i) const
{
	return str[i];
}

char& String::operator[](unsigned int i)
{
	return str[i];
}

void String::Print() const
{
	cout << "Size: \t" << size << endl;
	cout << "Str: \t" << str << endl;
}

ostream& operator<<(ostream& os, const String& obj)
{
	return os << obj.GetStr();
}

String operator+(const String& left, const String& right)
{
	//1) Creating a string which gets result:
	String cat(left.GetSize() + right.GetSize() - 1);
	for (int i = 0; i < left.GetSize(); i++)
		cat[i] = left[i];
		//cat.GetStr()[i] = left.GetStr()[i];
	for (int i = 0; i < right.GetSize(); i++)
		cat.GetStr()[i + left.GetSize() - 1] = right.GetStr()[i];
	return cat;
}
