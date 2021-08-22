#include "Element.h"

Element::Element(int _data, Element* _pNext): data(_data), pNext(_pNext)
{
	cout << "ELEMENT CONSTRUCTOR:   " << this << endl;
}

Element::~Element()
{
	cout << "ELEMENT DESTRUCTOR:    " << this << endl;
}
