#pragma once
#include <iostream>
#include "Element.h"

using namespace std;


class ForwardList
{
private:
	Element* head;
	size_t size;

public:
	ForwardList();
	ForwardList(const initializer_list<int>& il);
	ForwardList(const ForwardList&);
	~ForwardList();

	//OPERATORS

	ForwardList& operator=(const ForwardList&);

	//ADDING ELEMENTS	
	void PushFront(int);
	void PushBack(int);
	void Insert(int, int);

	//REMOVING ELEMENTS
	void PopFront();
	void PopBack();

	//METHODS
	void Print() const;

};
