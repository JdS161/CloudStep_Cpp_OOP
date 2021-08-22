#pragma once
#include <iostream>
#include "Element.h"

using namespace std;


class ForwardList
{
private:
	Element* head;

public:
	ForwardList();
	~ForwardList();

	//ADDING ELEMENTS	
	void PushFront(int);

	//METHODS
	void Print() const;

};
