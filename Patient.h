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
    void show_history();
    void display()const override;
    void show_last_visit();
    Patient();
    Patient(string name, int age, int id, char gender);
    ~Patient();
};

