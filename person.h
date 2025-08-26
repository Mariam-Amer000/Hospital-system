#pragma once
#include<iostream>
using namespace std;
class person
{
protected:
	string name;
	char gender;
	int age, id;
public:
	//setter
	void set_name(string name);
	void set_gender(char gender);
	void set_age(int age);
	void set_id(int id);

	//getter
	string get_name() const;
	char get_gender() const;
	int get_age() const;
	int get_id() const;
	//
	virtual void display() const;
	//cons and des
	person();	
	person(string name, char gender, int age, int id);
	~person();
};

