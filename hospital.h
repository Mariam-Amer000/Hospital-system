#pragma once
#include<iostream>
#include<vector>
#include"Patient.h"
class hospital
{
private:
	vector<Patient>listOfPatient;
public:
	void addPatient() {
		int age, id;
		string name;
		char gener;
		Patient p();
		cout << "Enter informantin" << endl;
		cout << "Name : ";
		cin >> name;
		p.setName(name);
	}
};

