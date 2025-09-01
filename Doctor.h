#pragma once
#include "Employee.h"
#include <queue>
#include <string>
using namespace std;

class Doctor : public Employee {
private:
    string specialization;
    int patient_number;
    queue<int> patient_queue;

public:
    // Constructors & Destructor
    Doctor();
    Doctor(string name, char gender, int age, int id, double salary, string spec, int patient_num);
    ~Doctor();

    // Setters & Getters
    void setSpecialization(string spec);
    void setPatient_number(int n);
    string getSpecialization() const;
    int getPatient_number() const;

    // Display function
    void display() const override;

    // Queue operations
    void enqueue(int patient_id);
    void dequeue();
};
