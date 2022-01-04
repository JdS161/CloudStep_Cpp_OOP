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
Matrix::Matrix(const Matrix& other)
{
	this->rows = other.rows;
	this->cols = other.cols;
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			this->matrix[i][j] = other.matrix[i][j];
		}
	}

	cout << "COPY CONSTRUCTOR: " << this << endl;
}
Matrix::Matrix(Matrix&& other)
{
	this->rows = other.rows;
	this->cols = other.cols;
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = other.matrix[i];
	}

	other.rows = 0;
	other.cols = 0;
	for (int i = 0; i < rows; i++)
	{
		other.matrix[i] = nullptr;
	}
	cout << "COPY CONSTRUCTOR: " << this << endl;
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
int** Matrix::GetMatrix() const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			return matrix;
		}
	}
}
int** Matrix::GetMatrix()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			return matrix;
		}
	}
}
void Matrix::SetRows(unsigned int _rows)
{
	this->rows = _rows;
}
void Matrix::SetCols(unsigned int _cols)
{
	this->cols = _cols;
}


//void Matrix::MatrixAddition(Matrix&& _matr1, Matrix&& _matr2)
//	/** :rows(GetRows(_matr1)),
//	 cols(GetCols(_matr1))*/
//{
//	Matrix sumMatrix{};// (GetRows(_matr1), GetCols(_matr1));
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			matrix(i,j) = _matr1(i,j) + _matr2(i,j);
//			cout << setw(5) << matrix[i][j];
//		}
//		cout << endl;
//	}
//}
void Matrix::MatrixAddition(Matrix&& _matr1, Matrix&& _matr2)
	/** :rows(GetRows(_matr1)),
	 cols(GetCols(_matr1))*/
{
	Matrix sumMatrix{};// (GetRows(_matr1), GetCols(_matr1));

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = _matr1[i][j] + _matr2[i][j];
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}

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

ostream& operator<<(ostream& out, const Matrix& obj)
{
	return out << obj.GetMatrix();
}

istream& operator>>(istream& in, Matrix& obj)
{
	cout << "ROWS: ";
	in >> obj.rows;
	cout << "COLUMNS: ";
	in >> obj.cols;

	return in;
}

const int&& Matrix::operator[](unsigned int i) const
{
	return matrix[i];
}

int&& Matrix::operator[](unsigned int i)
{
	return matrix[i];
}