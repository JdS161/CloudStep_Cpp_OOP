#include "MonthlyRated.h"

MonthlyRated::MonthlyRated()
{
	lName = "EMPTY";
	fName = "EMPTY";
	monthlyWage = 0;
	//cout << "MRW_DEFAULT_CONSTRUCTOR: \t" << this << endl;
}

MonthlyRated::MonthlyRated(string _lName, string _fName, double _monthyWage)
{
	this->lName = _lName;
	this->fName = _fName;
	SetWage(_monthyWage);
	//this->monthlyWage = _monthyWage;
	//cout << "MRW_CONSTRUCTOR: \t" << this << endl;
}

MonthlyRated::MonthlyRated(Employee& other)
{
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	this->monthlyWage = 0;
	//cout << "MRW_COPY_CONSTRUCTOR_1: \t" << this << endl;

}

MonthlyRated::MonthlyRated(Employee& other, double _monthlyWage)
{
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	this->monthlyWage = _monthlyWage;
	//cout << "MRW_COPY_CONSTRUCTOR_2: \t" << this << endl;
}

MonthlyRated::~MonthlyRated()
{
	//cout << "MRW_DESTRUCTOR: \t" << this << endl;
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

//void MonthlyRated::SetEmployeeWage(double _monthlyWage)
//{
//	SetWage(_monthlyWage);
//}

void MonthlyRated::PrintMonthlyRated() const
{
	cout << "Monthly rated Employee: " << lName << " " << fName << "\t Wage: " << monthlyWage << endl;
}
