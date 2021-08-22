#pragma once
#include <iostream>
#include <iomanip>
#include "Human.h"


using namespace std;

class Student : public Human
{
private:

	string specialization;
	string group;
	double rating;

public:
	Student(const string&, const string&, unsigned int, 
			const string&, const string&, double);
	~Student();


	//	GET/SET methods

	const string& GetSpecialization() const;
	const string& GetGroup() const;
	double GetRating() const;

	void SetSpecialization(const string&);
	void SetGroup(const string&);
	void SetRaing(double);



	void Print() const;

};
