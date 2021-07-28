#include "String_HW.h"

StringHW::StringHW(unsigned int _size): size(_size)
{
	this->str = new char[size] {};
	cout << "Constructed as DEFAULT: " << setw(14) << this << endl;
}

StringHW::StringHW(const char* _str)
{
	this->size = strlen(_str) + 1;
	this->str = new char[size];
	for (int i = 0; i < size; i++)
		this->str[i] = _str[i];
	cout << "Constructed as NON_DEFAULT: " << setw(10) << this << endl;
}

StringHW::~StringHW()
{
	delete[] this->str;
	cout << "DESTRUCTED: " << setw(26) << this << endl;

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
	cout << "\n--------------------------------------\n";
	cout << "Size: " << setw(5) << size << endl;
	cout << "String: " << setw(5) << str;
	cout << "\n--------------------------------------\n";
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
	return StringHW();
}
