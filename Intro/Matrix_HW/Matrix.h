#pragma once
#include <iostream>

using namespace std;

class Matrix
{
private:
	int rows;
	int cols;
	int** matrix;

public:
	Matrix();
	Matrix(int, int);
	Matrix(const Matrix&);
	Matrix(const Matrix&&);

	~Matrix();

	int GetRows()const;
	int GetCols()const;


	const int* operator[](int) const;
	int* operator[](int);
	Matrix& operator=(const Matrix&);
	Matrix& operator=(Matrix&&);
	friend Matrix operator+(const Matrix&, const Matrix&);
	friend Matrix operator-(const Matrix&, const Matrix&);
	friend Matrix operator*(const Matrix&, const Matrix&);
	friend Matrix operator/(const Matrix&, const Matrix&);


	void PrintMatrix() const;
	

};
