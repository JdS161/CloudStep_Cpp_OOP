#pragma once
#include <iostream>

using namespace std;

class IEngine
{
protected:
	bool isRunning = false;

public:
	virtual void Consume(double liters) = 0;
	virtual void Start() = 0;
	virtual void Stop() = 0;

};