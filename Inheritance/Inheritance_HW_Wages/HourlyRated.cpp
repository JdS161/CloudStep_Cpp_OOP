#include "HourlyRated.h"

HourlyRated::HourlyRated()
{
	lName = "EMPTY";
	fName = "EMPTY";
	hourlyWage = 0;
	//cout << "HRW_DEFAULT_CONSTRUCTOR: \t" << this << endl;
}

HourlyRated::HourlyRated(string _lName, string _fName, double _hourlyWage)
{
	this->lName = _lName;
	this->fName = _fName;
	SetWage(_hourlyWage);
	//this->hourlyWage = _hourlyWage;
	//cout << "HRW_CONSTRUCTOR: \t" << this << endl;
}

HourlyRated::HourlyRated(Employee& other, double _hourlyWage)
{
	//*this = other;
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	SetWage(_hourlyWage);
	//this->hourlyWage = _hourlyWage;
	//cout << "HRW_COPY_CONSTRUCTOR_2: \t" << this << endl;

}

HourlyRated::HourlyRated(Employee& other)
{
	//*this = other;
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	this->hourlyWage = 0;
	//cout << "HRW_COPY_CONSTRUCTOR_1: \t" << this << endl;
}

HourlyRated::~HourlyRated()
{
	//cout << "HRW_DESTRUCTOR: \t" << this << endl;
}

double HourlyRated::GetHourlyWage()
{
	return hourlyWage;
}

void HourlyRated::SetHourlyWage(double _hourlyWage)
{
	double temp = _hourlyWage * 168;
	SetWage(temp);
}

string HourlyRated::GetEmployeeLName()
{
	return GetLName();
}

string HourlyRated::GetEmployeeFName()
{
	return GetFName();
}

void HourlyRated::PrintHourlyWagedEmployee() const
{
	cout << "Hourly rated Employee: " << lName << " " << fName << "\t Wage: " << hourlyWage << endl;

}
