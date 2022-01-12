#include "EmployeePool.h"

EmployeePool::EmployeePool()
{
	employees = vector<Employee>();
}

EmployeePool::~EmployeePool()
{
}

void EmployeePool::AddEmployee(Employee& _employee)
{
	employees.emplace_back(_employee);
}

void EmployeePool::AddEmployee(HourlyRated& _hourlyRatedEmployee)
{
	employees.emplace_back(_hourlyRatedEmployee);
}

void EmployeePool::AddEmployee(MonthlyRated& _monthlyRatedEmployee)
{
	employees.emplace_back(_monthlyRatedEmployee);
}

void EmployeePool::PrintEmployeePool() const
{
	for (Employee n : employees)
	{
		cout << n << endl;
	}
}

double EmployeePool::TotalPoolWage(/*EmployeePool& _pool*/) 
{
	for (Employee n : employees)
	{
		if (typeid(n) == typeid(HourlyRated))
		{
			totalWage += (n.GetWage() * 168);
		}
		if (typeid(n) == typeid(MonthlyRated))
		{
			totalWage += n.GetWage();
		}
	}

	return totalWage;
}
