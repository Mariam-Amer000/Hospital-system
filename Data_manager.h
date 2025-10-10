#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"Doctor.h"
#include"Staff.h"
#include"Patient.h"
#include<sstream>
using namespace std;
class Data_manager
{
private:
	const string doctors_file = "doctors.txt";
	const string staffs_file = "staffs.txt";
	const string patients_file = "patients.txt";
	const string specializations_file = "specializations.txt";
	const string ids_file = "ids.txt";
public:
	// i will use append mode to save data
	void save_doctor(const Doctor& d);
	void save_staff(const Staff& s);
	void save_patient(const Patient& p);
	void save_specialization(const string& specialization);
	void save_id(const string& id);

	// save data with out mode
	void save_all_doctors(const vector<Doctor>& Doctors_list);
	void save_all_staffs(const vector<Staff>& Staffs_list);
	void save_all_patients(const vector<Patient>& Patients_list);
	void save_all_specializations(const vector<string>& specializations_list);
	void save_all_ids(const vector<string>& ids_list);

	// load data
	void load_doctors( vector<Doctor>&Doctors_list);
	void load_staffs( vector<Staff>&Staffs_list);
	void load_patients( vector<Patient>&Patients_list);
	void load_specializations( vector<string>&specializations_list);
	void load_ids(vector<string>& ids_list);
};

