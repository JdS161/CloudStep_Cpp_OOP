#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class MonthlyRated:public Employee
{
private:
	double monthlyWage;

public:
	MonthlyRated();
	MonthlyRated(string, string, double);
	MonthlyRated(Employee&);
	MonthlyRated(Employee&, double);
	~MonthlyRated();

	double GetMonthlyWage();
	string GetEmployeeLName();
	string GetEmployeeFName();
	//void SetEmployeeWage(double);

	void PrintMonthlyRated() const;

};

