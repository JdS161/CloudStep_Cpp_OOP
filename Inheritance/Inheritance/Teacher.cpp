#include "Teacher.h"


Teacher::Teacher(	const string& _firstName, 
					const string& _lastName, 
					unsigned int _age, 

					const string& _specialization,	
					unsigned int _experience)
	:Human(_firstName, _lastName, _age)
{
	SetSpecialization(_specialization);
	SetExperience(_experience);

	cout << "TEACHER DEFAULT CONSTRUCTOR:    " << this << endl;
}

Teacher::~Teacher()
{
	cout << "TEACHER DESTRUCTED:     " << this << endl;

}


const string& Teacher::GetSpecialization() const
{
	return specialization;
}

unsigned int Teacher::GetExperience() const
{
	return experience;
}

void Teacher::SetSpecialization(const string& _specialization)
{
	this->specialization = _specialization;
}

void Teacher::SetExperience(unsigned int _experience)
{
	this->experience = _experience;
}

void Teacher::Print() const
{
	Human::Print();
	cout << setw(10) << "Specialization: " << specialization << ", experience: " << experience << endl;
}
