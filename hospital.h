#pragma once
#include<iostream>
#include<vector>
#include "Patient.h"
#include "Employee.h"
#include "DataManager.h"

class hospital
{
private:
 DataManager dataManager;

public:

// Add a person
	void addPatient();
	void addDoctor();
	void addStaff();

// Update a person
	void updateStaff(int id);
	void updateDoctor(int id);
	void updatePatient(int id);

// Search for a person
	void searchEmployee(int id);
	void searchPatient(int id);

// Remove a person
	void removePatient(int Doc_ID);
	void removeEmployee(int emp_ID);


};

	