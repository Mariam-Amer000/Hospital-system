#include "patient.h"

#include <iostream>
using namespace std;

Patient::Patient(string name, char gender, int age, int id ,string disease)
:Person(name,gender,age,id),disease(disease){}

void Patient::setDisease(string d) { disease = d; }
string Patient::getDisease() const { return disease; }

void Patient::display() const {
    cout << "information about Patient "<< endl;
	cout << "Name is : " << name << endl;
	cout << "Gender is : " << gender << endl;
	cout << "Age is : " << age << endl;
	cout << "ID is : " << id << endl;
}

