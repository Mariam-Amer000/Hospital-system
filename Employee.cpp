#include "Employee.h"

void Employee::set_salary(double salary)
{
    if (salary < 2000) {
        this->salary = 0;
    }
    else this->salary = salary;
}

void Employee::set_have_access(bool b)
{
    have_access = b;
}

double Employee::get_salary() const
{
    return salary;
}

bool Employee::get_access() const
{
    return have_access;
}

void Employee::display() const
{
    Person::display();
    cout << "Salary : " << salary << endl;
}

Employee::Employee()
{
}

Employee::Employee(string name, int age, int id, char gender, double salary, bool have_access) :Person(name, age, id, gender), have_access(have_access)
{
    set_salary(salary);
}
