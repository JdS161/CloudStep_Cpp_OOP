#pragma once
#include "Employee.h"
#include "HourlyRated.h"
#include "MonthlyRated.h"
#include "EmployeePool.h"

int main()
{
	//На организации есть два типа сотрудников - с почасовой и помесячной оплатой.
	//	Необходимо расчитать зарплату для отдела из пяти сотрудников.

	Employee first = Employee("Doe", "John", 0);	
	HourlyRated second = HourlyRated("Smith", "Richard", 35);	
	HourlyRated third = HourlyRated(first, 20);	
	MonthlyRated forth = MonthlyRated("Musk", "Elon",  5600);	
	MonthlyRated fifth = MonthlyRated("Gates", "Bill", 5400);

	EmployeePool pool = EmployeePool();
	pool.AddEmployee(first);
	pool.AddEmployee(second);
	pool.AddEmployee(third);
	pool.AddEmployee(forth);
	pool.AddEmployee(fifth);

	pool.PrintEmployeePool();

	cout << "Total wage (per month)= " << pool.TotalPoolWage() << endl;

	return 0;
}