#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

class StringHW
{
private:
	unsigned int	size;
	char*		str;

	static int counter;

public:
	StringHW(unsigned int _size = 80);
	StringHW(const char*);
	StringHW(const StringHW&);
	~StringHW();

	//GET/SET METHODS
	const unsigned int GetSize()const;
	const char* GetStr() const;
	char* GetStr();
	static int GetCounter()
	{
		return counter;
	}

	//OPERATORS OVERLOAD
	friend ostream& operator<<(ostream&, const StringHW&);
	friend StringHW operator+(const StringHW&, const StringHW&);
	StringHW& operator=(const StringHW&);
	const char& operator[](unsigned int) const;
	char& operator[](unsigned int);
	
	
	
	void Show();
	void PrintCounter()
	{
		if (this->GetCounter() > 3)
			cout << "th-object";
		if (this->GetCounter() ==3)
			cout << "rd-object";
		if (this->GetCounter() == 2)
			cout << "nd-object";
		if (this->GetCounter() == 1)
			cout << "st-object";

	}

};


