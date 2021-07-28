#include "String_HW.h"
#include <Windows.h>

int StringHW::counter = 0;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));



StringHW::StringHW(unsigned int _size): size(_size)
{
	this->str = new char[size] {};
	counter++;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
	cout << "Constructed as DEFAULT: " << setw(5) << counter;
	PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
}

StringHW::StringHW(const char* _str)
{
	this->size = strlen(_str) + 1;
	this->str = new char[size];
	for (int i = 0; i < size; i++)
		this->str[i] = _str[i];
	counter++;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
	cout << "Constructed as NON_DEFAULT: " << counter;
	PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

}

StringHW::StringHW(const StringHW& other)
{
	this->size = other.size;
	this->str = new char[size] {};
	for (int i = 0; i < size; i++)
		this->str[i] = other.str[i];
	counter++;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
	cout << "Copy constructor: " << setw(11) << counter;
	PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

}

StringHW::~StringHW()
{
	delete[] this->str;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
	cout << "DESTRUCTED: " << setw(17) << counter;
	PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

	counter--;
}

const unsigned int StringHW::GetSize() const
{
	return size;
}

const char* StringHW::GetStr() const
{
	return str;
}

char* StringHW::GetStr()
{
	return str;
}


StringHW& StringHW::operator=(const StringHW& other)
{
	if (this == &other) 
		return *this;
	delete[] this->str;
	this->size = other.size;
	this->str = new char[size];
	for (int i = 0; i < size; i++)
		this->str[i] = other.str[i];
	cout << "Equality oveloaded operator: " << setw(9) << this << endl;
	return *this;
}

const char& StringHW::operator[](unsigned int index) const
{
	return str[index];
}

char& StringHW::operator[](unsigned int index)
{
	return str[index];
}

void StringHW::Show()
{
	cout << "\n------------------------------------------------\n";
	cout << "Size: " << setw(5) << size << endl;
	cout << "String: " << setw(5) << str;
	cout << "\n------------------------------------------------\n";
}

ostream& operator<<(ostream& out, const StringHW& string)
{
	return out << string.GetStr();
}

StringHW operator+(const StringHW& first, const StringHW& second)
{
	StringHW concat(first.GetSize() + second.GetSize() - 1);
	for (int i = 0; i < first.GetSize(); i++)
		concat[i] = first[i];
	for (int i = 0; i < second.GetSize(); i++)
		concat.GetStr()[i + first.GetSize() - 1] = second.GetStr()[i];
	return concat;
}
