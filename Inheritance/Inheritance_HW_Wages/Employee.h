#pragma once
#include <iostream>
//#include "HourlyRated.h"
//#include "MonthlyRated.h"

using namespace std;

class Employee
{
protected:
	string lName;
	string fName;
	double wage;

public:
	Employee();
	Employee(string, string, double);
	~Employee();

	string GetLName();
	string GetFName();
	double GetWage();

	void SetWage(double);
	/*void SetWage(HourlyRated&);
	void SetWage(MonthlyRated&);*/

	void PrintEmployee() const;

	friend ostream& operator<<(ostream&, const Employee&);
};
