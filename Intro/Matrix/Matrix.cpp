#include "Matrix.h"

int Matrix::counter = 0;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


Matrix::Matrix(unsigned int _rows, unsigned int _columns)
	:rows(_rows),
	 cols(_columns)
{
	this-> matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
	{ 
		matrix[i] = new int[cols];
	}
	
	for (int i = 0; i < this->rows;  i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			matrix[i][j] = (1 + rand() % 9);
		}
	}

	counter++;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
	cout << "Constructed as DEFAULT: " << setw(5) << counter;
	PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
}

Matrix::~Matrix()
{
	for (int i = 0; i < this->rows; i++)
	{
		delete[] matrix[i];	
	}
	delete[] matrix;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
	cout << "DESTRUCTED: " << setw(17) << counter;
	PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

	counter--;
}

const unsigned int Matrix::GetRows() const
{
	return rows;
}

const unsigned int Matrix::GetCols() const
{
	return cols;
}

//const int** Matrix::GetMatrix() const
//{
//	/*int** matrix = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		matrix[i] = new int[cols];
//	}*/
//
//	/*for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			return matrix;
//		}
//	}*/
//
//	return matrix;
//}
//
//int** Matrix::GetMatrix()
//{
//	/*this->matrix = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		matrix[i] = new int[cols];
//	}*/
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			return matrix;
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
		}
		cout << endl;
	}

	
}

void Matrix::PrintCounter()
{
	if (this->GetCounter() > 3)
		cout << "th-object";
	if (this->GetCounter() == 3)
		cout << "rd-object";
	if (this->GetCounter() == 2)
		cout << "nd-object";
	if (this->GetCounter() == 1)
		cout << "st-object";

}

//ostream& operator<<(ostream& out, const Matrix& obj)
//{
//	return out << obj.GetMatrix();
//
//}

istream& operator>>(istream& in, Matrix& obj)
{
	cout << "ROWS: ";
	in >> obj.rows;
	cout << "COLUMNS: ";
	in >> obj.cols;

	return in;
}
