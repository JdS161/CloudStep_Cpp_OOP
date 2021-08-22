#pragma once
#include <iostream>

using namespace std;
//using namespace Geometry;

//namespace Geometry
//{

	enum Color
	{
		//0xAF
		//0x - Hexadecimal
		//A	 - Backgroung color
		//F	 - Font color
		CONSOLE_DEFAULT = 0x07,
		CONSOLE_RED = 0xCC,
		CONSOLE_GREEN = 0xAA,
		CONSOLE_BLUE = 0x99,
	};
	// enum (Enumaration - перечисление)  - набор целочисленных констант. Очень удобно для 
	//										перечисления цветов, клавиш, вариантов case и т.д. 
	//										К сожалению, в языкке С++ перечисления могут хранить 
	//										лишь целочисленне константы  и не могут хранить константы 
	//										других типов, даже символьные.
	//										Перечисления также являются типами данных, и переменные		
	//										типа enum могут приниматьтолько одно из перечисленных значений


	class Shape
	{
	private:

	protected:
		Color color; //Любую фигуру можно нарисовать, и сделать это только каки-то определенным цветом

	public:
		Shape(Color _color = Color::CONSOLE_DEFAULT);
		virtual ~Shape();

		Color GetColor() const;
		void SetColor(Color);

		virtual double GetArea() const = 0;
		virtual double GetPerimeter() const = 0;
		virtual void Draw() const = 0;
	};

//}