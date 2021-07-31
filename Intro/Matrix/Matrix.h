#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <ctime>

using namespace std;
//srand(time(NULL));

class Matrix
{
private:
	unsigned int	rows;
	unsigned int	cols;
	int**			matrix;

	static int counter;
public:
	Matrix(unsigned int _rows = 5, unsigned int _columns = 5);
	//Matrix(const Matrix&);

	~Matrix();


	//GET/SET methods
	int** GetMatrix();

	static int GetCounter()
	{
		return counter;
	}

	//Operators overload



	void MatrixAddition();
	void MatrixSubtraction();
	void MatrixMultiplication();
	void MatrixDivision();

	void MatrixPrint() const;



};
