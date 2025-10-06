#pragma once
#include<vector>
#include<iostream>
#include"Medical_Record.h"
using namespace std;
#include "Person.h"
class Patient :
    public Person
{
private:
    vector<Medical_Record>history;
public:
    void add_medical_record(const Medical_Record& m);
    void update_medical_record();
    void remove_medical_record();
    void show_history()const;

    void display()const override;
    void show_last_visit();

    Patient();
    Patient(const string& name, int age, const string& id, char gender);
    ~Patient();
};

