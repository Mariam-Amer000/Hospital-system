#pragma once
#include<iostream>
#include<vector>
#include"Doctor.h"
#include"Patient.h"
#include"Staff.h"
#include"Data_manager.h"
using namespace std;
class Data_Base
{
private:
	vector<Doctor>Doctors;
	vector<Staff>Staffs;
	vector<Patient>Patients;
	vector<string>specializations;
	Data_manager dm;
public:
	//add
	void add_doctor(Doctor d);
	void add_staff(Staff s);
	void add_patient(Patient p);
	void add_specialization(string specialization);
	//remove
	void remove_doctor(string id);
	void remove_staff(string id);
	void remove_patient(string id);
	void remove_specialization(string specialization);
	//display
	void display_doctors()const;
	void display_staff()const;
	void display_patients()const;
	void display_specializations()const;
	//Search 
	Doctor* Find_doctor(string id);
	Staff* Find_staff(string id);
	Patient* Find_patient(string id);
	string get_specialization(int index);
	//update 
	//void update_doctor(string id);
	//void update_staff(string id);
	//void update_patient(string id);
	void update_specialization(int index, string new_nam);
	//load
	void load_Doctors();
	void load_Staffs();
	void load_Patients();
	void load_Specializations();
	//doctors with specialization
	void display_doctors_with_specialization(string specialization)const;
};

