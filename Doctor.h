#pragma once
#include "Employee.h"
class Doctor :
    public Employee
{
private:
    int max_patient_number;
    string specialization;
    int patient_number = 0;
    //patient queue
public:
    //setter
    void set_max_patient_number(int max_patient_number);
    void set_specialization(string specialization);
    void set_patient_number(int patient_number);
    //getter
    int get_max_patient_number()const;
    string get_specialization()const;
    int get_patient_number()const;
    //other
    void display()const override;
    Doctor();
    Doctor(string name, int age, int id, char gender, double salary,string specialization ,int max_patient_number);
    ~Doctor();
};

