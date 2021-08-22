#include "ForwardList.h"

ForwardList::ForwardList()
{
	head = nullptr;
	//if 'head' points to NULL - thus the list is empty (has no elements), 
	//thus 'head' point to nothing

	cout << "LIST CONSTRUCTOR:   " << this << endl;
}

ForwardList::~ForwardList()
{
	cout << "LIST DESTRUCTOR:    " << this << endl;
}

void ForwardList::PushFront(int _data)
{
	//1) Create new element
	Element* New = new Element(_data);
	//2) Stick element to list
	New->pNext = head;
	//3) Define new element as a head element of the list
	head = New;
}

void ForwardList::Print() const
{
	Element* temp = head;
	while (temp)
	{
		cout << temp << "\t" << temp->data << "\t" << temp->pNext << endl;
		temp = temp->pNext;
	}
}
