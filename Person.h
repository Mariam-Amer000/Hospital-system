#pragma once
#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
class Person
{
private:
	string name, national_id;
	int age;
	char gender;
public:
	//setter
	void set_name(string name);
	void set_age(int age);
	void set_national_id(string national_id);
	void set_gender(char gender);

	//getter
	string get_name()const;
	int get_age()const;
	string get_national_id()const;
	char get_gender()const;

	// another 
	virtual void display() const;
	bool id_validation(string id);
	Person();
	Person(string name, int age, string id, char gender);
	virtual~Person();
};

