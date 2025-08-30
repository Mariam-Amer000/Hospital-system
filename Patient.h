#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;


class Patient : public Person {
private:
    string disease;
    vector<string> medicalHistory;

public:
    Patient(string name, char gender, int age, int id ,string disease);

    void setDisease(string d);
    string getDisease() const;

    void addReport(string repo);
    void showHistory() const;

    void display() const override;
};
#endif // PATIENT_H
