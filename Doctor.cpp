#include "Doctor.h"

void Doctor::set_max_patient_number(int max_patient_number)
{
    if (max_patient_number > 0 && max_patient_number < 15)this->max_patient_number = max_patient_number;
    else this->max_patient_number = 0;
}

void Doctor::set_specialization(const string& specialization)
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

int Doctor::get_current_patient_id() const
{
    return patient_ids.front();
}

void Doctor::display() const
{
    cout << "-----------------------------------\n";
    Employee::display();
    cout << "Specialization : " << specialization << endl;
    cout << "Max patient number : " << max_patient_number << endl;
    cout << "Current patient number : " << patient_number << endl;
    cout << "Patient Queue: ";
    queue<int> temp = patient_ids;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << "\n-----------------------------------\n";
}

void Doctor::add_patient_queue(int patient_id) {
    if (patient_number < max_patient_number) {
        patient_ids.push(patient_id);
        patient_number++;
    }
    else {
        cout << "Doctor reached max patient capacity!" << endl;
    }
}

void Doctor::remove_patient_queue() {
    if (!patient_ids.empty()) {
        patient_ids.pop();
        patient_number--;
    }
    else {
        cout << "No patients in queue." << endl;
    }
}

Doctor::Doctor()
{
}

Doctor::Doctor(const string& name, int age, const string& id, char gender, double salary, bool have_access, const string& specialization, int max_patient_number)
    :Employee(name,age,id,gender,salary,  have_access),specialization(specialization)
{
    set_max_patient_number(max_patient_number);
}

Doctor::~Doctor()
{
}
