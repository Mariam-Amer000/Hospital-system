#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	string name;
	int age,national_id;
	char gender;
public:
	//setter
	void set_name(string name);
	void set_age(int age);
	void set_national_id(int national_id);
	void set_gender(char gender);
	//getter
	string get_name();
	int get_age();
	int get_national_id();
	char get_gender();
	// another 
	virtual void display();
	Person();
	Person(string name, int age, int id, char gender);
	~Person();
};

