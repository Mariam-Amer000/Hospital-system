#pragma once
#include <iostream>
#include "person.h"
using namespace std;
class Employee : public person
{
private:
	double salary;

public:
	//cons & des
	Employee():person(),salary(0.0){}
	Employee(string name, char gender, int age, int id,double salary) :person(), salary(salary) {}
	~Employee(){}

	//setter & getters
	double getSalary() { return salary; }
	void setSalary(double s) { salary = s; }
	//
	void display() const  override {
		person::display();
		cout << "Salary is " << salary;
	}
};

