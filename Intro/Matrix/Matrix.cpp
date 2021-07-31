#include "Matrix.h"

int Matrix::counter = 0;

Matrix::Matrix(unsigned int _rows, unsigned int _columns)
	:rows(_rows),
	 cols(_columns)
{
	this-> matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
	{ 
		matrix[i] = new int[cols]/* {}*/;
	}
	
	for (int i = 0; i < this->rows;  i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			matrix[i][j] = (1 + rand() % 9);
		}
	}

	counter++;
	cout << "Constructed AS DEFAULT: " << counter << setw(10) << this << endl;;
}

Matrix::~Matrix()
{
	for (int i = 0; i < this->rows; i++)
	{
		delete[] matrix[i];	
	}
	delete[] matrix;

	cout << "DESTRUCTED: " << counter << setw(10) << this << endl;
	counter--;
}

//int** Matrix::GetMatrix()
//{
//	int** matrix = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		matrix[i] = new int[this->columns];
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			return matrix[i][j];
//		}
//	}
//	//return nullptr;
//}

void Matrix::MatrixPrint() const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(5) << matrix[i][j];
		}cout << endl;
	}

	
}
