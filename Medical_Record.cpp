#include "Medical_Record.h"

void Medical_Record::set_doctor_specialization(const string& doctor_specialization)
{
    this->doctor_specialization = doctor_specialization;
}
void Medical_Record::set_doctor_name(const string& doctor_name)
{
    this->doctor_name = doctor_name;
}
void Medical_Record::set_doctor_national_id(int doctor_national_id)
{
    this->doctor_national_id = doctor_national_id;
}

string Medical_Record::get_doctor_Specialization() const
{
    return doctor_specialization;
}
string Medical_Record::get_doctor_name() const
{
    return doctor_name;
}
int Medical_Record::get_doctor_national_id() const
{
    return doctor_national_id;
}


void Medical_Record::add_symptom(const string& symptom)
{
    symptoms.push_back(symptom);
}
void Medical_Record::remove_symptom(int index)
{
	symptoms.erase(symptoms.begin() + index);
}
void Medical_Record::update_symptom(int index, const string& new_symptom)
{
	symptoms.at(index) = new_symptom;
}
void Medical_Record::dispaly_symptoms() const
{
    for (int i = 0; i < symptoms.size(); i++)
    {
        cout << i + 1 << "- " << symptoms.at(i) << endl;
    }
}

void Medical_Record::add_medicin(const string& medicin)
{
    medicins.push_back(medicin);
}
void Medical_Record::remove_medicin(int index)
{
	medicins.erase(medicins.begin() + index);
}
void Medical_Record::update_medicin(int index, const string& new_medicin)
{
	medicins.at(index) = new_medicin;
}
void Medical_Record::dispaly_medicins() const
{
    for (int i = 0; i < medicins.size(); i++)
    {
        cout << i + 1 << "- " << medicins.at(i) << endl;
	}
}


void Medical_Record::display() const
{
    cout << "\n===== Medical Record =====\n";
    cout << "Doctor Name: " << doctor_name << endl;
    cout << "Doctor ID: " << doctor_national_id << endl;
    cout << "Doctor Specialization: " << doctor_specialization << endl;

    cout << "\nSymptoms:\n";
    if (symptoms.empty()) cout << "No symptoms recorded.\n";
    else for (int i = 0; i < symptoms.size(); i++)
        cout << i + 1 << "- " << symptoms[i] << endl;

    cout << "\nMedicins:\n";
    if (medicins.empty()) cout << "No medicins recorded.\n";
    else for (int i = 0; i < medicins.size(); i++)
        cout << i + 1 << "- " << medicins[i] << endl;

    cout << "==========================\n";
}

Medical_Record::Medical_Record()
{
}
Medical_Record::Medical_Record(const string& doctor_specialization, const string& doctor_name, int doctor_national_id)
    :doctor_specialization(doctor_specialization), doctor_name(doctor_name), doctor_national_id(doctor_national_id)
{
}
Medical_Record::~Medical_Record()
{
}
