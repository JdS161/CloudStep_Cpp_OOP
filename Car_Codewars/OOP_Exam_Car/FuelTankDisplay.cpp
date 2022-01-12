#pragma once
#include "IFuelTankDisplay.h"
#include "FuelTank.cpp"

class FuelTankDisplay :  public IFuelTankDisplay
{
public:
	FuelTank* display;
	FuelTankDisplay(FuelTank* _display)
	{
		this->display = _display;
	}
	~FuelTankDisplay()
	{

	}

	double GetFuelLevel()
	{
		return display->GetFuelLevel();
	}
	bool GetIsOnReserve()
	{
		return display->GetIsOnReserve();
	}
	bool GetIsComplete()
	{
		return display->GetIsComplete();
	}
private:

};
