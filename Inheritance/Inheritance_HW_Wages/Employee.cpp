#include "Employee.h"

Employee::Employee()
{
	this->lName = "EMPTY";
	this->fName = "Empty";
	this->wage = 0;
	//cout << "EMPLOYEE_DEFAULT_CONSTRUCTOR: \t" << this << endl;

}

Employee::Employee(string _lName, string _fName, double _wage)
{
	this->lName = _lName;
	this->fName = _fName;
	this->wage = _wage;
	//cout << "EMPLOYEE_CONSTRUCTOR: \t" << this << endl;
}

Employee::~Employee()
{
	//cout << "EMPLOYEE_DESTRUCTOR: \t" << this << endl;
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

void Employee::SetWage(double _wage)
{
	this->wage = _wage;
}
//
//void Employee::SetWage(HourlyRated& _externalData)
//{
//	this->wage = _externalData.GetHourlyWage();
//}
//
//void Employee::SetWage(MonthlyRated& _externalData)
//{
//	this->wage = _externalData.GetMonthlyWage();
//}

void Employee::PrintEmployee() const
{
	cout << "Employee: " << lName << " " << fName << endl;
}

ostream& operator<<(ostream& out, const Employee& _employee)
{
	return out << "Employee: \t" << _employee.lName << " " << _employee.fName << "\t" <<_employee.wage << endl;
}
