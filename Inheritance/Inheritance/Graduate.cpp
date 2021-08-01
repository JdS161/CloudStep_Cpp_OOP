#include "Graduate.h"

Graduate::Graduate(
					const string& _firstName,
					const string& _lastName,
					unsigned int _age,
					const string& _specialization, 
					const string& _group,
					double _rating,
					const string& _diplomaTheme):

	Student(_firstName, _lastName, _age, _specialization, _group, _rating)

												
{
	SetDiplomaTheme(_diplomaTheme);
	cout << "GRADUATE DEFAULT CONSTRUCTOR: " << this << endl;
}

Graduate::~Graduate()
{
	cout << "GADUATE DESTRUCTOR: " << this << endl;
}

const string& Graduate::GetDiplomaTheme() const
{
	return diplomaTheme;
}

void Graduate::SetDiplomaTheme(const string& _diplomaTheme)
{
	this->diplomaTheme = _diplomaTheme;
}

void Graduate::PrintGraduate() const
{
	Student::PrintStudent();
	cout << "Diploma theme: " << diplomaTheme << endl;
}
