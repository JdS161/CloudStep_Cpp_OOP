#pragma once
#include <iostream>

using namespace std;

class Matrix
{
private:
	int rows, cols;
	int* matrix;


public:
	Matrix(int, int);
	Matrix(const Matrix&);
	~Matrix();

	int& operator() (int, int);
	int operator() (int, int) const;


	void ShowMatrix() const;
};
