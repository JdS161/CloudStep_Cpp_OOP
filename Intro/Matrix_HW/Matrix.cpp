#include "Matrix.h"
#include <ctime>


Matrix::Matrix()
{
	this->rows = 0;
	this->cols = 0;
	this->matrix = 0;
}

Matrix::Matrix(int _rows, int _cols)
{
	this->rows = _rows;
	this->cols = _cols;
	this->matrix = new int* [rows] {};
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols]{};
	}
	cout << "\nCONSTRUCTOR: \t" << this << endl;
}


Matrix::Matrix(const Matrix& other)
{
	
	*this = other;
	cout << "\nCOPY COONSTRUCTOR: \t" << this << endl;
}

Matrix::Matrix(const Matrix&& other)
{
	*this = std::move(other);
}

Matrix::~Matrix()
{
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	matrix = nullptr;
	rows = 0;
	cols = 0;
	cout << "\nDESTRUCTOR: \t" << this << endl;
}

int Matrix::GetRows() const
{
	return rows;
}

int Matrix::GetCols() const
{
	return cols;
}

const int* Matrix::operator[](int i)const
{
	return matrix[i];
}

int* Matrix::operator[](int i)
{
	return matrix[i];
}

Matrix& Matrix::operator=(const Matrix& other)
{
	if (this == &other)
	{
		return *this;
	}
	this->rows = other.rows;
	this->cols = other.cols;
	this->matrix = new int* [rows] {};
	for (int i = 0; i < rows; i++)
	{
		this->matrix[i] = new int[cols] {};
		memcpy(this->matrix[i], other.matrix[i], cols * sizeof(int));
	}
	cout << "COPY ASSIGNMENT:\t" << this << endl;
	return *this;
}

Matrix& Matrix::operator=(Matrix&& other)
{
	this->rows = other.rows;
	this->cols = other.cols;
	this->matrix = other.matrix;
	other.matrix = nullptr;
	other.rows = 0;
	other.cols = 0;
	return *this;
}


Matrix operator+(const Matrix& _left, const Matrix& _right)
{
	/*if (_left.GetCols() !=_right.GetCols() || _left.GetRows() != _right.GetRows())
	{ 
		return Matrix();
	}*/

	Matrix temp(_left.GetRows(), _left.GetCols());
	for (int i = 0; i < _left.GetRows(); i++)
	{
		for (int j = 0; j < _left.GetCols(); j++)
		{
			temp[i][j] = _left[i][j] + _right[i][j];
		}
	}
	return temp;
}


Matrix operator-(const Matrix& _left, const Matrix& _right)
{
	Matrix temp(_right.GetRows(), _right.GetCols());
	for (int i = 0; i < _right.GetRows(); i++)
	{
		for (int j = 0; j < _right.GetCols(); j++)
		{
			temp[i][j] = _right[i][j] - _left[i][j];
		}
	}
	return temp;
}

Matrix operator*(const Matrix& _left, const Matrix& _right)
{
	Matrix temp(_left.GetRows(), _left.GetCols());
	for (int i = 0; i < _left.GetRows(); i++)
	{
		for (int j = 0; j < _left.GetCols(); j++)
		{
			temp[i][j] = _left[i][j] * _right[i][j];
		}
	}
	return temp;
}

Matrix operator/(const Matrix& _left, const Matrix& _right)
{
	Matrix temp(_left.GetRows(), _left.GetCols());
	for (int i = 0; i < _left.GetRows(); i++)
	{
		for (int j = 0; j < _left.GetCols(); j++)
		{
			temp[i][j] = (double)_left[i][j]  / (double)_right[i][j];
		}
	}
	return temp;
}

void Matrix::PrintMatrix() const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << '\t';
		}cout << endl;
	}
}