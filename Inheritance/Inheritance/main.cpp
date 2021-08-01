#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "Graduate.h"

#define INHERITANCE
#define POLYMORPHISM


void main()
{
#ifdef INHERITANCE
	Human hum("Alex", "Smith", 18);
	hum.PrintHuman();
	cout << DELIMITER << endl;

	Student st("John", "Doe", 29, "RPO", "VBU_011", 90);
	st.PrintStudent();
	cout << DELIMITER << endl;

	Teacher teach("Michael", "Won", 48, "OOP", 20);
	teach.PrintTeacher();
	cout << DELIMITER << endl;

	Graduate grad("Tom", "White", 24, "RPO", "QWE321", 95, "Inheritance");
	grad.PrintGraduate();
	cout << DELIMITER << endl;
#endif // INHERITANCE

	Human* group[] =
	{
		new Student("John", "Doe", 29, "RPO", "VBU_011", 90),
		new Student("Joahn", "Doe", 29, "RPO", "VBU_011", 90),
		new Teacher("Michael", "Won", 48, "OOP", 20),
		new Graduate("Tom", "White", 24, "RPO", "QWE321", 95, "Inheritance")
	};

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		group[i]->PrintHuman();
		cout << DELIMITER << endl;
	}

}