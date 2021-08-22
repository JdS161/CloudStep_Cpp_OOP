#include "Square.h"
#include <Windows.h>

#define COORD_X 20
#define COORD_Y 220


Square::Square(double _side, Color _color) : Shape(_color)
{
	SetSide(_side);
}

Square::~Square()
{
	cout << "SQURE DESTRUCTED:     " << this << endl;
}

double Square::GetSide() const
{
	return this->side;
}

void Square::SetSide(double _side)
{
	if (_side <= 0) _side = 1;
	this->side = _side;
}

double Square::GetArea() const
{
	return side*side;
}

double Square::GetPerimeter() const
{
	return side * 4;
}

void Square::Draw() const
{
	//#define SIMPLE_DRAW
#ifdef SIMPLE_DRAW
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, GetColor());
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			cout << "* ";
		}cout << endl;
	}cout << endl;

	SetConsoleTextAttribute(hConsole, Color::CONSOLE_DEFAULT);
#endif // SIMPLE_DRAW



	// 1. Получаем обрбаботчик окна(handler to window)
	HWND hwnd = GetConsoleWindow();
	hwnd = FindWindow(NULL, L"Inheritance - Microsoft Visual Studio");
	// 2. Получаем онтекст устройства
	HDC hdc = GetDC(hwnd); //HDC - handler to device Context
	// 3. Создаем карандаш и кисть, которыми будем рисовать
	HPEN hPen = CreatePen(PS_SOLID, 5, RGB(0,255,0)); // PS_SOLID - сплошная линия, 5 - толщина линии в пикселях
	//pen - рисует контур фигуры
	HBRUSH hBrush = CreateSolidBrush(RGB(0,255,0));
	// 4.Берем созданные карандаш и кисть:
	SelectObject(hdc, hPen);
	SelectObject(hdc, hBrush);
	// 5. Рисуем квадрат
	::Rectangle(hdc, COORD_X, COORD_Y, COORD_X+GetSide(), COORD_Y+GetSide());

	//Освобождаем ресурсы
	DeleteObject(hBrush);
	DeleteObject(hPen);
	ReleaseDC(hwnd, hdc);

}