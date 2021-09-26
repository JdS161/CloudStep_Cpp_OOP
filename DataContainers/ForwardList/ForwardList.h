#pragma once
#include <iostream>
#include "Element.h"

using namespace std;

//#define TEST

class ForwardList
{
private:
	Element* head;
	size_t size;

public:

	class Iterator
	{
		Element* temp;
	public:
		Iterator(Element* _temp = nullptr) : temp(_temp)
		{
			cout << "ItConstructor: " << this << endl;
		}
		~Iterator()
		{
			cout << "ItDestructor: " << this << endl;
		}
		Iterator operator++ () //prefix increment
		{
			temp = temp->pNext;
			return *this;
		}
		Iterator operator++(int)
		{
			Iterator old = *this;
			temp = temp->pNext;
			return old;
		}
		bool operator== (const Iterator& _other) const
		{
			return this->temp == _other.temp;
		}
		bool operator!= (const Iterator& _other) const
		{
			return this->temp != _other.temp;
		}
		const int& operator*()const
		{
			return this->temp->data;
		}
		int& operator*()
		{
			return this->temp->data;
		}
	};
	Iterator begin()
	{
		return this->head;
	}
	Iterator end()
	{
		return nullptr;
	}


#ifdef TEST
	class ReverseIterator
	{

	};
	ReverseIterator RevBegin()
	{
		return 
	}
	ReverseIterator RevEnd()
	{

	}
#endif // TEST



	
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
