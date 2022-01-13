#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"
#include "HourlyRated.h"
#include "MonthlyRated.h"

using namespace std;

class EmployeePool
{	
	vector <Employee> employees;
	double totalWage;
public:
	EmployeePool();
	~EmployeePool();

	void AddEmployee(Employee&);
	void AddEmployee(HourlyRated&);
	void AddEmployee(MonthlyRated&);

	void PrintEmployeePool() const;

	double TotalPoolWage();
};
