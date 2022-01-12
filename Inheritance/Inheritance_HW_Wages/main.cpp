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
	//first.PrintEmployee();

	HourlyRated second = HourlyRated("Smith", "Richard", 35);
	//second.PrintHourlyWagedEmployee();

	HourlyRated third = HourlyRated(first, 20);
	////third = first;
	//third.PrintHourlyWagedEmployee();

	MonthlyRated forth = MonthlyRated("Musk", "Elon",  5600);
	//forth.PrintMonthlyRated();

	EmployeePool pool = EmployeePool();
	pool.AddEmployee(first);
	pool.AddEmployee(second);
	pool.AddEmployee(third);
	pool.AddEmployee(forth);

	pool.PrintEmployeePool();

	cout << "Total wage = " << pool.TotalPoolWage() << endl;

	return 0;
}