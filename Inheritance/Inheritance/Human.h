#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

#define DELIMITER "\n-------------------------------------------------------\n"
class Human
{
private:

	string			firstName;
	string			lastName;
	unsigned int	age;

	static int		counter;

public:
	Human(const string&, const string&, unsigned int);
	~Human();


	// GET/SET methods

	const string& GetFirstName() const;
	const string& GetLastName() const;
	const unsigned int GetAge() const;
	static int GetCounter()
	{
		return counter;
	}

	void SetFirstName(const string& _firstName);
	void SetLastName(const string& _lastName);
	void SetAge(unsigned int _age);




	virtual void PrintHuman() const;

	void PrintCounter();


};
