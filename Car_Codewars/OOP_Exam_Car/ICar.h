#pragma once
#include <iostream>

using namespace std;

class ICar
{
protected:
	bool engineIsRunning = false;

public:
	virtual void EngineStart() = 0;
	virtual void EngineStop() = 0;
	virtual void Refuel(double liters) = 0;
	virtual void RunningIdle() = 0;

};
