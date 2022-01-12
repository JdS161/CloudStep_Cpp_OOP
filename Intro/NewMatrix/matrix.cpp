#include "matrix.h"

Matrix::Matrix(int _rows, int _cols): rows(_rows), cols(_cols)
{
	/*this->matrix = new int*[_rows];
	for (int i = 0; i < _rows; i++)
	{
		matrix[i] = new int[cols];
	}

	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			matrix[i][ j] = (1 + rand() % 9);
		}
	}*/
	this->matrix = new int[rows * cols];
}
Matrix::Matrix(const Matrix& other)
{
	this->rows = other.rows;
	this->cols = other.cols;
	this->matrix = other.matrix;

	cout << "COPY_CONSTRUCTOR " << this << endl;
}

Matrix::~Matrix()
{
	delete[] matrix;
}

int& Matrix::operator()(int _rows, int _cols)
{
	return matrix[cols * _rows + _cols];
	
	
	// TODO: insert return statement here
}

int Matrix::operator()(int _rows, int _cols) const
{
	return matrix[cols * _rows + _cols];
}

void Matrix::ShowMatrix() const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "  " << matrix[i][j];
		}
		cout << endl;
	}
}
