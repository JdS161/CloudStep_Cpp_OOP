#pragma once
#include <iostream>
#include <Windows.h>

#include "Shape.h"


using namespace std;

class Triangle : public Shape
{
private:

public:
	Triangle(Color);
	~Triangle();
	virtual double GetHeight() const = 0;


};

class EquilateralTriangle : public Triangle
{
private:
	double side;


public:
	EquilateralTriangle(double, Color);
	~EquilateralTriangle();


	double GetSide() const;
	double GetHeight() const;
	double GetArea() const;
	double GetPerimeter() const;

	double SetSide(double);


	void Draw() const;
};
