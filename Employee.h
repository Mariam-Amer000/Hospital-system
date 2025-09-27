#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	double salary;
	bool have_access = 0;
public:
	void set_salary(double salary);
	void set_have_access(bool b);

	double get_salary() const;
	bool get_access()const;

	void display() const override ;

	Employee();
	Employee(string name, int age, string id, char gender,double salary,bool have_access);
};

