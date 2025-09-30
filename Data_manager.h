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
public:
	// i will use append mode to save data
	void save_doctor(Doctor d,string file_name);
	void save_staff(Staff s, string file_name);
	void save_patient(Patient p, string file_name);
	void save_specialization(string specialization, string file_name);

	void load_doctors(vector<Doctor>&Doctors_list, string file_name);
	void load_staffs(vector<Staff>&Staffs_list, string file_name);
	void load_patients(vector<Patient>&Patients_list, string file_name);
	void load_specializations(vector<string>&specializations_list, string file_name);
};

