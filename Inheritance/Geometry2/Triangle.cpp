#include "Triangle.h"

Triangle::Triangle(Color _color) : Shape(_color)
{
}

Triangle::~Triangle()
{
}

EquilateralTriangle::EquilateralTriangle(double _side, Color _color) : Triangle(_color)
{
	SetSide(_side);
}

EquilateralTriangle::~EquilateralTriangle()
{
}

double EquilateralTriangle::GetSide() const
{
	return side;
}

double EquilateralTriangle::GetHeight() const
{
	return sqrt(3)/2 * side;
}

double EquilateralTriangle::GetArea() const
{
	return GetHeight()*side/2;
}

double EquilateralTriangle::GetPerimeter() const
{
	return side*3;
}

double EquilateralTriangle::SetSide(double _side)
{
	if (_side <= 0) side = 1;
	this->side = _side;

	return this->side;
}

void EquilateralTriangle::Draw() const
{
	HWND hwnd = GetDesktopWindow();
	HDC hdc = GetDC(hwnd);

	HPEN hPen = CreatePen(PS_SOLID, 5, color);
	HBRUSH hBrush = CreateSolidBrush(color);

	SelectObject(hdc,hPen);
	SelectObject(hdc,hBrush);

	unsigned int startX = 400;
	unsigned int startY = 400;

	POINT points[] =
	{
		{startX, startY + side},
		{startX + side, startY + side},
		{startX + side / 2, startY + side - GetHeight()}
	};

	Polygon(hdc, points, sizeof(points) / sizeof(POINT));

	DeleteObject(hBrush);
	DeleteObject(hPen);

	ReleaseDC(hwnd, hdc);
}
