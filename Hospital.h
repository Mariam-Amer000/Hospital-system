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
	//update 
	void update_doctor();
	void update_staff();
	void update_patient();
	void update_specialization();
	//display
	void show_all_doctors();
	void show_all_staff();
	void show_all_patient();
	void show_all_specialization();
	//find
	void find_doctor();
	void find_staff();
	void find_patient();
	//update
	void update_doctor();
	void update_staff();
	void update_patient();
	void update_specialization();
};
