#include "Matrix.h"


void main()
{
	srand(time(NULL));

	Matrix first(5, 3);
	for (int i = 0; i < first.GetRows(); i++)
	{
		for (int j = 0; j < first.GetCols(); j++)
		{
			first[i][j] = 1 + rand() % 9;
		}
	}
	cout << "FIRST MATRIX:\n" << endl;
	first.PrintMatrix();

	Matrix second(5, 3);
	for (int i = 0; i < second.GetRows(); i++)
	{
		for (int j = 0; j < second.GetCols(); j++)
		{
			second[i][j] = 1 + rand() % 9;
		}
	}
	cout << "SECOND MATRIX:\n" << endl;
	second.PrintMatrix();

	Matrix third = first + second;
	cout << "SUM OF MATRIXES FIRST AND SECOND:\n" << endl;
	third.PrintMatrix();

	third = first - second;
	cout << "SUBTRACTION OF MATRIXES FIRST AND SECOND:\n" << endl;
	third.PrintMatrix();
	
	third = first * second;
	cout << "MULTIPLICATION OF MATRIXES FIRST AND SECOND:\n" << endl;
	third.PrintMatrix();
	
	third = first / second;
	cout << "DIVISION OF MATRIXES FIRST AND SECOND:\n" << endl;
	third.PrintMatrix();



}