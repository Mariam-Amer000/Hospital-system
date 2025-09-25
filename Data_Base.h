#pragma once
#include<iostream>
#include<vector>
#include"Doctor.h"
#include"Patient.h"
#include"Staff.h"
using namespace std;
class Data_Base
{
private:
	vector<Doctor>Doctors;
	vector<Staff>Staffs;
	vector<Patient>Patients;
	vector<string>specializations;
public:
	//add
	void add_doctor(Doctor d);
	void add_staff(Staff s);
	void add_patient(Patient p);
	void add_specialization(string specialization);
	//remove
	void remove_doctor(int id);
	void remove_staff(int id);
	void remove_patient(int id);
	void remove_specialization(string specialization);
	//display
	void display_doctors()const;
	void display_staff()const;
	void display_patient()const;
	void display_specialization()const;
	//Search 
	Doctor Find_doctor(int id);
	Staff Find_staff(int id);
	Patient Find_patient(int id);
	//update 
	void update_doctor(int id);
	void update_staff(int id);
	void update_patient(int id);
	void update_specialization();
};

