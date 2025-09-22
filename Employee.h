#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	double salary;
public:
	void set_salary(double salary);
	double get_salary() const;

	void display() const override ;

	Employee();
	Employee(string name, int age, int id, char gender,double salary);
};

