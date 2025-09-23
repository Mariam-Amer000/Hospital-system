#pragma once
#include<vector>
#include<iostream>
using namespace std;
class Medical_Record
{
private:
	string doctor_specialization;
	string doctor_name;
	int docotor_national_id;
	vector<string> symptoms;
	vector<string>medicins;
public:
	//setter
	void set_doctor_specialization(string doctor_specialization);
	void set_doctor_name(string doctor_name);
	void set_doctor_national_id(int docotor_national_id);

	//getter
	string get_doctor_Specialization() const;
	string get_doctor_name()const;
	int get_docotor_national_id()const;

	//other 
	void display()const;
	void add_symptom(string symptoms);
	void add_medicin(string medicin);
	Medical_Record();
	Medical_Record(string doctor_Specialization, string doctor_name, int docotor_national_id);
	~Medical_Record();
};

