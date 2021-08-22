#include "Shape.h"

//using namespace Geometry

Shape::Shape(Color _color) : color(_color)
{
}

Shape::~Shape()
{
	cout << "SHAPE DESTRUCTED:     " << this << endl;
}

Color Shape::GetColor() const
{
	return this->color;
}

void Shape::SetColor(Color _color)
{
	this->color = _color;
}
