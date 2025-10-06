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

	//symptomes
	void add_symptom(string symptoms);
	void remove_symptom(int index);
	void update_symptom(int index, string new_symptom);
	void dispaly_symptoms()const;

	//medicins
	void add_medicin(string medicin);
	void remove_medicin(int index);
	void update_medicin(int index, string new_medicin);
	void dispaly_medicins()const;

	//other 
	void display()const;
	Medical_Record();
	Medical_Record(string doctor_Specialization, string doctor_name, int docotor_national_id);
	~Medical_Record();
};

