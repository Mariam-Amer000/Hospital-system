#include "Doctor.h"

void Doctor::set_max_patient_number(int max_patient_number)
{
    if (max_patient_number > 0 && max_patient_number < 15)this->max_patient_number = max_patient_number;
    else this->max_patient_number = 0;
}

void Doctor::set_specialization(string specialization)
{
    this->specialization = specialization;
}

void Doctor::set_patient_number(int patient_number)
{
    this->patient_number = patient_number;
}

int Doctor::get_max_patient_number()const
{
    return max_patient_number;
}

string Doctor::get_specialization()const
{
    return specialization;
}

int Doctor::get_patient_number()const
{
    return patient_number;
}

void Doctor::display() const
{
    Employee::display();
    cout << "Specialization : " << specialization << endl;
    cout << "Max patient number : " << max_patient_number << endl;
    cout << "Current patient number : " << patient_number << endl;
}

Doctor::Doctor()
{
}

Doctor::Doctor(string name, int age, int id, char gender, double salary, string specialization, int max_patient_number)
    :Employee(name,age,id,gender,salary),specialization(specialization)
{
    set_max_patient_number(max_patient_number);
}

Doctor::~Doctor()
{
}
