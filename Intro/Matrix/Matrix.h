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
	Matrix(const Matrix&);
	Matrix(Matrix&&);

	~Matrix();


	//GET/SET methods
	const unsigned int	GetRows() const;
	const unsigned int	GetCols() const;
	int**				GetMatrix() const;					//TO BE DONE
	int**				GetMatrix();						//TO BE DONE

	void				SetRows(unsigned int);
	void				SetCols(unsigned int);
	static int GetCounter()
	{
		return counter;
	}
	 
	//Operators overload

	friend ostream& operator<< (ostream& out, const Matrix& second);		//TO BE DONE
	friend istream& operator>> (istream& in, Matrix& second);

	const char&& operator[](unsigned int i) const;
	char&& operator[](unsigned int i);

	void MatrixAddition(Matrix&&, Matrix&&);
	void MatrixSubtraction();
	void MatrixMultiplication();
	void MatrixDivision();

	void MatrixPrint() const;
	void PrintCounter();
	


};

