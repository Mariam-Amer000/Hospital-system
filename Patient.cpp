#include "Patient.h"

void Patient::display() const
{
	Person::display();
	show_history();
}

void Patient::show_history() const
{
	if (history.empty())cout << "No history this is the first visit" << endl;
	else 
	{
		for (int i = 0; i < history.size(); i++) {
			cout << "***** " << i + 1 << " *****" << endl;
			history.at(i).display();
			cout << "***** " << i + 1 << " *****" << endl;
		}
	}
}

void Patient::show_last_visit()
{
	if (history.empty())cout << "No history this is the first visit" << endl;
	else
	{
		history.back().display();
	}
}

Patient::Patient()
{
}

Patient::Patient(string name, int age, int id, char gender): Person(name, age, id, gender)
{
}

Patient::~Patient()
{
}
