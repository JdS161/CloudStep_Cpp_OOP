#pragma once
#include <iostream>

using namespace std;

class IFuelTank
{
protected:
	double fillLevel = 0.0;
	bool isOnReserve = false;
	bool isComplete = false;

public:
	virtual void Consume(double liters) = 0;
	virtual void Refuel(double liters) = 0;

};
