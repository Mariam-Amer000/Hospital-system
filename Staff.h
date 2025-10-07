#pragma once
#include "Employee.h"
class Staff :
    public Employee
{
private:
public:
    Staff();
    Staff(const string& name, int age, const string& id, char gender, double salary, bool have_access);
    ~Staff();
};

