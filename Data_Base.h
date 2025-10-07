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
	vector<string>all_ids;
	Data_manager dm;
public:
	//add
	void add_doctor(Doctor d);
	void add_staff(Staff s);
	void add_patient(Patient p);
	void add_specialization(const string& specialization);
	void add_id(const string& id);

	// get size
	int get_doctors_size()const;
	int get_staffs_size()const;
	int get_patients_size()const;
	int get_specializations_size()const;
	int get_ids_size()const;

	//remove
	void remove_doctor(const string& id);
	void remove_staff(const string& id);
	void remove_patient(const string& id);
	void remove_specialization(const string& specialization);
	void remove_id(const string& id);

	//display
	void display_doctors()const;
	void display_staff()const;
	void display_patients()const;
	void display_specializations()const;
	void display_ids()const;

	//Find 
	Doctor* Find_doctor(const string& id);
	Staff* Find_staff(const string& id);
	Patient* Find_patient(const string& id);
	string get_specialization(int index);
	string Find_id(const string& id);

	//load
	void load_Doctors();
	void load_Staffs();
	void load_Patients();
	void load_Specializations();

	//doctors with specialization
	void display_doctors_with_their_specialization(const string& specialization)const;
};

