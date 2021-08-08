#pragma once
#include <iostream>

using namespace std;

class Animal
{
private:
	unsigned int speed;
	const unsigned int maxSpeed;


public:
	/*Animal(const unsigned int _maxSpeed=250);
	~Animal();*/

	virtual void sound() = 0;

	/*Pure virtual function(чисто виртуальный метод) -мы НЕ знаем как именно перемещется 
	  транспортное  средство, пока не узнаем, какое именно это транспортное средство.
	  Поэтому, определение этой функции неизвестно = 0*/


};
