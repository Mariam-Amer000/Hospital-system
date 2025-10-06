#include "Medical_Record.h"

void Medical_Record::set_doctor_specialization(string doctor_specialization)
{
    this->doctor_specialization = doctor_specialization;
}

void Medical_Record::set_doctor_name(string doctor_name)
{
    this->doctor_name = doctor_name;
}

void Medical_Record::set_doctor_national_id(int docotor_national_id)
{
    this->docotor_national_id = docotor_national_id;
}

string Medical_Record::get_doctor_Specialization() const
{
    return doctor_specialization;
}

string Medical_Record::get_doctor_name() const
{
    return doctor_name;
}

int Medical_Record::get_docotor_national_id() const
{
    return docotor_national_id;
}
void Medical_Record::display() const
{
    cout << "Doctor Name: " << doctor_name << endl;
    cout << "Doctor ID: " << docotor_national_id << endl;
    cout << "Doctor Specialization: " << doctor_specialization << endl;
    cout << "Symptoms : " << endl;
    for (int i = 0; i < symptoms.size(); i++) {
        cout << i + 1 << "- " << symptoms.at(i) << endl;
    }
    cout << "***************************" << endl;
    cout << "Medicins" << endl;
    for (int i = 0; i < medicins.size(); i++) {
        cout << i + 1 << "- " << medicins.at(i) << endl;
    }
}

void Medical_Record::add_symptom(string symptom)
{
    symptoms.push_back(symptom);
}

void Medical_Record::remove_symptom(int index)
{
	symptoms.erase(symptoms.begin() + index);
}

void Medical_Record::update_symptom(int index, string new_symptom)
{
	symptoms.at(index) = new_symptom;
}

void Medical_Record::add_medicin(string medicin)
{
    medicins.push_back(medicin);
}

void Medical_Record::remove_medicin(int index)
{
	medicins.erase(medicins.begin() + index);
}

void Medical_Record::update_medicin(int index, string new_medicin)
{
	medicins.at(index) = new_medicin;
}

void Medical_Record::dispaly_symptoms() const
{
    for(int i= 0; i < symptoms.size(); i++) 
    {
        cout << i + 1 << "- " << symptoms.at(i) << endl;
	}
}

void Medical_Record::dispaly_medicins() const
{
    for (int i = 0; i < medicins.size(); i++)
    {
        cout << i + 1 << "- " << medicins.at(i) << endl;
	}
}

Medical_Record::Medical_Record()
{
}

Medical_Record::Medical_Record(string doctor_specialization, string doctor_name, int docotor_national_id)
    :doctor_specialization(doctor_specialization), doctor_name(doctor_name), docotor_national_id(docotor_national_id)
{
}

Medical_Record::~Medical_Record()
{
}
