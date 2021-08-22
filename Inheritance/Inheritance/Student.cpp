#include "Student.h"


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

Student::Student(	const string& _firstName,
					const string& _lastName,
					unsigned int _age,

					const string& _specialization, 
					const string& _group,
					double _rating):Human(_firstName, _lastName, _age)
{
	SetSpecialization(_specialization);
	SetGroup(_group);
	SetRaing(_rating);

	cout << "STUDENT DEFAULT CONSTRUCTOR:    " << this << endl;
}

Student::~Student()
{
	cout << "STUDENT DESTRUCTED:     " << this << endl;
}

const string& Student::GetSpecialization() const
{
	return specialization;

}

const string& Student::GetGroup() const
{
	return group;

}

double Student::GetRating() const
{
	return rating;
}

void Student::SetSpecialization(const string& _specialization)
{
	this->specialization = _specialization;
}

void Student::SetGroup(const string& _group)
{
	this->group = _group;
}

void Student::SetRaing(double _rating)
{
	this->rating = _rating;
}

void Student::Print() const
{
	Human::Print();
	cout <<setw(10) <<  "Specialization: " << specialization << ", group: " << group << ", rating: " << rating;
}

