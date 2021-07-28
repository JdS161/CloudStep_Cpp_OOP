#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class StringHW
{
private:
	unsigned int	size;
	char*		str;

public:
	StringHW(unsigned int _size = 80);
	StringHW(const char*);
	~StringHW();

	//GET/SET METHODS
	const unsigned int GetSize()const;
	const char* GetStr() const;
	char* GetStr();

	//OPERATORS OVERLOAD
	friend ostream& operator<<(ostream&, const StringHW&);
	friend StringHW operator+(const StringHW&, const StringHW&);
	StringHW& operator=(const StringHW&);
	const char& operator[](unsigned int) const;
	char& operator[](unsigned int);
	
	
	
	void Show();


};
