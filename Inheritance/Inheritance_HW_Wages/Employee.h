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
	bool hourly = false;
	bool monthly = false;

public:
	Employee();
	Employee(string, string, double);
	~Employee();

	string GetLName();
	string GetFName();
	double GetWage();
	bool GetHourly();
	bool GetMonthly();
	void SetWage(double);
	void SetHourly(bool);
	void SetMonthly(bool);

	void PrintEmployee() const;

	friend ostream& operator<<(ostream&, const Employee&);
};
