#pragma once
#include <iostream>
#include "Human.h"

using namespace std;

class Teacher : public Human
{
private:
	string specialization;
	unsigned int experience;

public:
	Teacher(const string&, const string&, unsigned int,
			const string&, unsigned int);
	~Teacher();

	//	GET/SET methods:
	const string& GetSpecialization() const;
	unsigned int GetExperience() const;

	void SetSpecialization(const string&);
	void SetExperience(unsigned int);

	void Print() const;


};
