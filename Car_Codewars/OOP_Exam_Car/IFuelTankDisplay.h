#pragma once
#include <iostream>

using namespace std;

class IFuelTankDisplay
{
protected:
	double fillLevel = 0.0;
	bool isOnReserve = false;
	bool isComplete = false;
};
