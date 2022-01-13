#include "MonthlyRated.h"

MonthlyRated::MonthlyRated()
{
	lName = "EMPTY";
	fName = "EMPTY";
	monthlyWage = 0;
	monthly = true;
}

MonthlyRated::MonthlyRated(string _lName, string _fName, double _monthyWage)
{
	this->lName = _lName;
	this->fName = _fName;
	SetWage(_monthyWage);
	SetMonthly(true);
}

MonthlyRated::MonthlyRated(Employee& other)
{
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	this->monthlyWage = 0;
	this->monthly = true;
}

MonthlyRated::MonthlyRated(Employee& other, double _monthlyWage)
{
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	this->monthlyWage = _monthlyWage;
	this->monthly = true;
}

MonthlyRated::~MonthlyRated()
{
}

double MonthlyRated::GetMonthlyWage()
{
	return monthlyWage;
}

string MonthlyRated::GetEmployeeLName()
{
	return GetLName();
}

string MonthlyRated::GetEmployeeFName()
{
	return GetFName();
}

void MonthlyRated::PrintMonthlyRated() const
{
	cout << "Monthly rated Employee: " << lName << " " << fName << "\t Wage: " << monthlyWage << endl;
}
