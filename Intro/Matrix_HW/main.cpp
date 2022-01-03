#include "Matrix.h"


void main()
{
	Matrix first(4, 6);
	cout << "FIRST MATRIX:\n" << endl;
	first.PrintMatrix();

	Matrix second(4, 6);	
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