#pragma once
#include <iostream>

using namespace std;

class Element
{
private:
	static int count;
	int data;
	Element* pNext;

public:
	Element(int, Element* _pNext=nullptr);
	~Element();

	friend class ForwardList;

};
//int Element::count = 0;
