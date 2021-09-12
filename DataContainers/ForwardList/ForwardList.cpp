#include "ForwardList.h"

int Element::count = 0;

ForwardList::ForwardList()
{
	head = nullptr;
	//if 'head' points to NULL - thus the list is empty (has no elements), 
	//thus 'head' point to nothing

	cout << "LIST CONSTRUCTOR:   " << this << endl;
}

ForwardList::ForwardList(const initializer_list<int>& il) :ForwardList()
{
	cout << typeid(il.begin()).name() << endl;
	for (int const* it = il.begin(); it != il.end(); it++)
	{
		this->PushBack(*it);
	}
}

ForwardList::ForwardList(const ForwardList& _other) : ForwardList()
{
	//DeepCopy
	for (Element* temp = _other.head; temp; temp = temp->pNext)
	{
		PushBack(temp->data);
	}
}

ForwardList::~ForwardList()
{
	while (head)
	{
		PopFront();
	}
	cout << "LIST DESTRUCTOR:    " << this << endl;
}

ForwardList& ForwardList::operator=(const ForwardList& _other)
{
	//1) Remove old object's value
	while (head)
	{
		PopFront();
	}
	//2) Performing pobitivoe copy
	for (Element* temp = _other.head; temp; temp = temp->pNext)
	{
		PushBack(temp->data);
	}
	return *this;

}

void ForwardList::PushFront(int _data)
{
	//1) Create new element
	Element* New = new Element(_data);
	//2) Stick element to list
	New->pNext = head;
	//3) Define new element as a head element of the list
	head = New;
	size++;
}

void ForwardList::PushBack(int _data)
{
	if (head == nullptr)
	{
		return PushFront(_data);
		
	}
	Element* temp = head;
	while (temp->pNext)
	{
		temp = temp->pNext;
	}
	/*Element* New = new Element(_data);
	temp->pNext = New;*/
	temp->pNext = new Element(_data);
	size++;
}

void ForwardList::Insert(int _index, int _data)
{
	if (_index == 0)
	{
		return PushFront(_data);
	}
	if (_index >= size)
	{
		return PushBack(_data);
	}
	Element* temp = head;
	for (int i = 0; i < _index-1; i++)
	{
		temp = temp->pNext;
	}
	Element* New = new Element(_data);
	New->pNext = temp->pNext;
	temp->pNext = New;
	size++;
}

void ForwardList::PopFront()
{
	//1) Remember address of removing element
	Element* toDel = head;
	//2)Exclude element from list
	head = head->pNext;
	//3) Removing element from memory
	delete toDel;
	size--;
}

void ForwardList::PopBack()
{
	//1) Find tail of the list
	Element* temp = head;
	while (temp->pNext->pNext)
	{
		temp = temp->pNext;
	}
	//2) Remove element from memory
	delete temp->pNext;
	//3) "Forget" about the last element
	temp->pNext = nullptr;
	size--;
}

void ForwardList::Print() const
{
	Element* temp = head;
	/*while (temp)
	{
		cout << temp << "\t" << temp->data << "\t" << temp->pNext << endl;
		temp = temp->pNext;
	}*/
	for (Element* temp = head; temp; temp = temp->pNext)
	{
		cout << temp << "\t" << temp->data << "\t" << temp->pNext << endl;
	}
		
	cout << "Total elements in list = " << size << endl;
	cout << "Total amount of elements = " << Element::count << endl;
}
