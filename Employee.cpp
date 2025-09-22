#include "Employee.h"

void Employee::set_salary(double salary)
{
    if (salary < 2000) {
        this->salary = 0;
    }
    else this->salary = salary;
}

double Employee::get_salary() const
{
    return salary;
}

void Employee::display() const
{
    Person::display();
    cout << "Salary : " << salary << endl;
}

Employee::Employee()
{
}

Employee::Employee(string name, int age, int id, char gender, double salary):Person(name,age,id,gender)
{
    set_salary(salary);
}
