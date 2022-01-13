#include "HourlyRated.h"

HourlyRated::HourlyRated()
{
	lName = "EMPTY";
	fName = "EMPTY";
	this->hourly = true;	
	hourlyWage = 0;
}

HourlyRated::HourlyRated(string _lName, string _fName, double _hourlyWage)
{
	this->lName = _lName;
	this->fName = _fName;
	SetWage(_hourlyWage);
	this->hourly = true;
}

HourlyRated::HourlyRated(Employee& other, double _hourlyWage)
{
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	SetWage(_hourlyWage);
	SetHourly(true);
}

HourlyRated::HourlyRated(Employee& other)
{
	this->lName = other.GetLName();
	this->fName = other.GetFName();
	this->hourlyWage = 0;
	this->hourly = true;
}

HourlyRated::~HourlyRated()
{
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
