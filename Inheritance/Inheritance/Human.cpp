#include "Human.h"

int Human::counter = 0;
//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


Human::Human(	const string& _firstName, 
				const string& _lastName,
				unsigned int _age):			
										firstName(_firstName),
										lastName(_lastName),
										age(_age)
{
	counter++;
	//SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
	cout << "HUMAN DEFAULT CONSTRUCTOR: \t" << this <<endl ;
	/*PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));*/
}

Human::~Human()
{
	//SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
	cout << "HUMAN DESTRUCTOR: \t" << this <<endl;
	/*PrintCounter();
	cout << setw(10) << this << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));*/

	counter--;
	
}

const string& Human::GetFirstName() const
{
	return firstName;
}

const string& Human::GetLastName() const
{
	return lastName;
}

const unsigned int Human::GetAge() const
{
	return age;
}

void Human::SetFirstName(const string& _firstName)
{
	this->firstName = _firstName;
}

void Human::SetLastName(const string& _lastName)
{
	this->lastName = _lastName;
}

void Human::SetAge(unsigned int _age)
{
	this->age = _age;
}


void Human::PrintCounter()
{
	if (this->GetCounter() > 3)
		cout << "th-object";
	if (this->GetCounter() == 3)
		cout << "rd-object";
	if (this->GetCounter() == 2)
		cout << "nd-object";
	if (this->GetCounter() == 1)
		cout << "st-object";
}

void Human::Print() const
{
	cout << setw(10) << firstName << setw(10) << lastName << setw(10) << age << "   ";
}
 