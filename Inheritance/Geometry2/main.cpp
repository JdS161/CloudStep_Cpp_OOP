#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"

void main()
{
	/*Shape shape(Color::CONSOLE_BLUE);
	cout << hex << shape.GetColor() << endl;*/


	Square square(100, Color::CONSOLE_GREEN);
	
	cout << "Side:		" << square.GetSide() << endl;
	cout << "Area:		" << square.GetArea() << endl;
	cout << "Perimeter:	" << square.GetPerimeter() << endl << endl;

	//square.Draw();


	EquilateralTriangle e3(100, Color::CONSOLE_GREEN);
	
	cout << "Side:		" << e3.GetSide() << endl;
	cout << "Area:		" << e3.GetArea() << endl;
	cout << "Perimeter:	" << e3.GetPerimeter() << endl << endl; 
	e3.Draw();
	//Rectangle rect;
}