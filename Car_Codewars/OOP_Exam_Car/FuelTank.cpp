#pragma once
#include <cmath>
#include "IFuelTank.h"

class FuelTank : public IFuelTank
{
protected:
	double fuelLevel = 0.0;
	const double maxLevel = 60.0;
	const double resereLevel = 5.0;
public:
	FuelTank(double _liters)
	{
		SetFuelLevel(_liters);
	}
	~FuelTank() 
	{
	}

	void SetFuelLevel(double _liters)
	{
		if (_liters >=60)
		{
			fuelLevel = 60.0;
			isComplete = true;
		}
		else if (_liters < 0)
		{
			fuelLevel = 0.0;
		}
		else
		{
			fuelLevel = _liters;
		}
	}
	double GetFuelLevel()
	{
		return round(fuelLevel * 100) / 100;
	}
	bool GetIsOnReserve()
	{
		return isOnReserve;
	}
	bool GetIsComplete()
	{
		return isComplete;
	}

	void Consume(double _liters)
	{
		if (_liters > 0)
		{
			fuelLevel -= _liters;
		}
		if (fuelLevel <= 0)
		{
			fuelLevel = 0;
		}
	}
	void Refuel(double _liters)
	{
		if (_liters <=0 )
		{
			fuelLevel += 0;
		}
		else  
		{
			fuelLevel += _liters;
		}
		if (fuelLevel > resereLevel)
		{
			isOnReserve = false;
		}if (fuelLevel < resereLevel)
		{
			isOnReserve = true;
		}

	}

};