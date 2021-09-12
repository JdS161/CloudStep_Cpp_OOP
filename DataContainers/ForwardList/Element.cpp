#include "Element.h"

Element::Element(int _data, Element* _pNext): data(_data), pNext(_pNext)
{
	count++;
	cout << "ELEMENT CONSTRUCTOR:   " << this << endl;
}

Element::~Element()
{
	count--;
	cout << "ELEMENT DESTRUCTOR:    " << this << endl;
}
