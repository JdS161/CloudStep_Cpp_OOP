#pragma once
#include <iostream>
#include "ICar.h"
#include "Engine.cpp"
#include "FuelTank.cpp"
#include "FuelTankDisplay.cpp"

using namespace std;

class Car : public ICar
{
protected:
	const double fuelConsumtion = 0.0003;

public:

	Engine* engine;
	FuelTank* fuelTank;
	FuelTankDisplay* fuelTankDisplay;

	Car()
	{
		engine = new Engine;
		fuelTank = new FuelTank(20);
		fuelTankDisplay = new FuelTankDisplay(fuelTank);
	}

	Car(double _liters)
	{
		engine = new Engine;
		fuelTank = new FuelTank(_liters);
		fuelTankDisplay = new FuelTankDisplay(fuelTank);
	}

	~Car()
	{
		/*delete engine;
		delete[] fuelTank;
		delete[] fuelTankDisplay;*/
	}

	void EngineStart()
	{
		if (fuelTank->GetFuelLevel() > 0)
		{
			engine->Start();
			engineIsRunning = true;
		}
	}

	void Refuel(double _liters)
	{
		fuelTank->Refuel(_liters);
	}

	void EngineStop()
	{
		engine->Stop();
		engineIsRunning = false;	
	}

	void RunningIdle()
	{
		if (GetEngineIsRunning())
		{
			fuelTank->Consume(fuelConsumtion);
		}
		if (fuelTank->GetFuelLevel() == 0)
		{
			EngineStop();
		}
	}
	
	bool GetEngineIsRunning()
	{
		return engineIsRunning;
	}

};