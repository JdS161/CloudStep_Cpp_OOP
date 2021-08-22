#pragma once
#include "Shape.h"

//using namespace Geometry;


class Square : public Shape
{
private:
	double side;

public:
	Square(double, Color);
	~Square();

	double GetSide() const;
	void SetSide(double);


	double GetArea() const;
	double GetPerimeter() const;
	void Draw() const;
};

