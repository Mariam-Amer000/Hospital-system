#include "Staff.h"

Staff::Staff()
{
}

Staff::Staff(string name, int age, int id, char gender, double salary, bool have_access)
{
	Employee(name, age, id, gender, salary,  have_access);
}

Staff::~Staff()
{
}
