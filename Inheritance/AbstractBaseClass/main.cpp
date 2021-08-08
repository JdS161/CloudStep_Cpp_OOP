#include "Animal.h"
#include "Cat.h"
#include "Dog.h"


void main()
{
	// Animal animal; //Can not instantiate abstrac class

	Cat cat;
	cat.sound();

	Dog dog;
	dog.sound();

}