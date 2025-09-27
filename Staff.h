#pragma once
#include "Employee.h"
class Staff :
    public Employee
{
private:
public:
    Staff();
    Staff(string name, int age, string id, char gender, double salary, bool have_access);
    ~Staff();
};

