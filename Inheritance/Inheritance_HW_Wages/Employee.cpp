#include "Employee.h"

Employee::Employee()
{
	this->lName = "EMPTY";
	this->fName = "Empty";
	this->wage = 0;	
}

Employee::Employee(string _lName, string _fName, double _wage)
{
	this->lName = _lName;
	this->fName = _fName;
	this->wage = _wage;
}

Employee::~Employee()
{
}

string Employee::GetLName()
{
	return lName;
}

string Employee::GetFName()
{
	return fName;
}

double Employee::GetWage()
{
	return wage;
}

bool Employee::GetHourly()
{
	return hourly;
}

bool Employee::GetMonthly()
{
	return monthly;
}

void Employee::SetWage(double _wage)
{
	this->wage = _wage;
}

void Employee::SetHourly(bool _hourly)
{
	this->hourly = true;
}

void Employee::SetMonthly(bool)
{
	this->monthly = true;
}

void Employee::PrintEmployee() const
{
	cout << "Employee: " << lName << " " << fName << endl;
}

ostream& operator<<(ostream& out, const Employee& _employee)
{
	return out << "Employee: \t" << _employee.lName << " " << _employee.fName << "\t" <<_employee.wage << endl;
}
