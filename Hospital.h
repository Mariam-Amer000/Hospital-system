#pragma once
#include<iostream>
using namespace std;
#include"Data_Base.h"
class Hospital
{
private:
	Data_Base db;
public:
	//menu
	void main_menu();
	void Doctor_menu();
	void Staff_menu();
	void Doctor_HUB();
	void Staff_HUB();
	void Patient_HUB();
	//add
	void add_doctor();
	void add_staff();
	void add_patient();
	void add_specialization();
	//remove
	void remove_doctor();
	void remove_patient();
	void remove_staff();
	void remove_specialization();
	//display
	void show_all_doctors();
	void show_all_staff();
	void show_all_patient();
	void show_all_specialization();
	//find
	Doctor* find_doctor(string national_id);
	Staff* find_staff(string national_id);
	Patient* find_patient(string national_id);
	//update
	void update_Doctor();
	void update_Staff();
	void update_Patient();
	void update_Specialization();
};
