#pragma once
#include <iostream>
#include "Employee.h"

class HourlyRated : public Employee
{
private:
	double hourlyWage;

public:
	HourlyRated();
	HourlyRated(string, string, double);
	HourlyRated(Employee&, double);
	HourlyRated(Employee&);
	~HourlyRated();

	double GetHourlyWage();

	void SetHourlyWage(double);
	string GetEmployeeLName();
	string GetEmployeeFName();
	void PrintHourlyWagedEmployee() const;
};
