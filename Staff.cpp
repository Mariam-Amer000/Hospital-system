#include "Staff.h"

Staff::Staff()
{
}

Staff::Staff(const string& name, int age, const string& id, char gender, double salary, bool have_access)
	: Employee(name, age, id, gender, salary, have_access)
{
}

Staff::~Staff()
{
}
