//#include "ICar.h"
#include "Car.cpp"


int main()
{
    Car carTest1;
    cout << "TEST1 START&STOP:" << endl;
    /*It(TestMotorStartAndStop)
    {
        Car car;

        Assert::That(car.getEngineIsRunning(), Equals(false));

        car.EngineStart();

        Assert::That(car.getEngineIsRunning(), Equals(true));

        car.EngineStop();

        Assert::That(car.getEngineIsRunning(), Equals(false));
    }
    */

    if (!carTest1.GetEngineIsRunning())
    {
        carTest1.EngineStart();
        cout << "Engine is RUNNING now!"<<endl;
    }
    if (carTest1.GetEngineIsRunning())
    {
        carTest1.EngineStop();
        cout << "Engine is STOPPED now!" << endl;
    }

    cout << endl << "TEST2 FUEL CONSUMPTION:" << endl;
    /*
    It(TestFuelConsumptionOnIdle)
    {
        Car car(1);

        car.EngineStart();

        for (int i = 0; i < 3000; i++)
        {
            car.RunningIdle();
        }

        Assert::That(car.fuelTankDisplay->getFillLevel(), Equals(0.10));
    }
    */
    Car carTest2(1);
    cout << "Start Idle with 1 liter of gasoline:" << endl;
    carTest2.EngineStart();

    for (int i = 0; i < 3000; i++)
    {
        carTest2.RunningIdle();
    }

    cout << "Fuel level after 3000 sec in Idle = " << carTest2.fuelTankDisplay->GetFuelLevel()<< endl;
    cout << endl << "TEST3 FUEL TANK DISPLAY FILLING COMPLETION INDICATION:" << endl;

    /*
    It(TestFuelTankDisplayIsComplete)
    {
        Car car(60);

        Assert::That(car.fuelTankDisplay->getIsComplete(), Equals(true));
    }
    */
    Car carTest3(60);
    cout << "Displaying of completion of fueling of the tank:" << endl;
    if (carTest3.fuelTankDisplay->GetIsComplete())
    {
        cout << "Fuel tank is filled!" << endl;
    }
    else
    {
        cout << "Fuel tank is not filled!" << endl;
    }
    cout << endl << "TEST4 FUEL TANK DISPLAY ON RESERVE INDICATION:" << endl;

    /*
    It(TestFuelTankDisplayIsOnReserve)
    {
        Car car(4);

        Assert::That(car.fuelTankDisplay->getIsOnReserve(), Equals(true));
    }*/
    Car carTest4(4);
    cout << "Displaying of completion of reserve state:" << endl;
    if (carTest4.fuelTankDisplay->GetIsOnReserve())
    {
        cout << "Fuel tank on reserve is displaying!" << endl;
    }
    else
    {
        cout << "Fuel tank on reserve is not displaying!" << endl;
    }

    cout << endl << "TEST5 REFUELING OF THE CAR:" << endl;
    /*
    It(TestRefuel)
    {
        Car car(5);

        car.Refuel(40);

        Assert::That(car.fuelTankDisplay->getFillLevel(), Equals(45));
    }*/

    Car carTest5(5);
    cout << "Initial fuel level = 5 liters, and we'll add 40 liters more:" << endl;
    carTest5.Refuel(40);

    cout << "Current fuel level = " << carTest5.fuelTankDisplay->GetFuelLevel() << endl;


	return 0;
}