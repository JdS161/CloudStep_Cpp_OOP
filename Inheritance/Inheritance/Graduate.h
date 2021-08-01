#pragma once
#include "Student.h"

class Graduate:public Student
{
private:
	string diplomaTheme;

public:
	Graduate(	const string&, const string&, unsigned int, 
				const string&, const string&, double,
				const string&);

	~Graduate();

	const string& GetDiplomaTheme() const;
	void SetDiplomaTheme(const string&);


	void PrintGraduate() const;


};
