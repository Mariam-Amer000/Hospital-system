#pragma once
#include<iostream>
#include"Data_Base.h"
using namespace std;
class Hospital
{
private:
	Data_Base db;
public:
	void main_menu();
	void Doctor_menu();
	void Staff_menu();

	void add_doctor();
	void add_staff();
	void add_patient();

	void remove_doctor();
	void remove_patient();
	void remove_staff();
};

