#include "person.h"

void person::set_name(string name){ this->name = name; }
void person::set_gender(char gender) { this->gender = gender; }
void person::set_age(int age) { this->age = age; }
void person::set_id(int id) { this->id = id; }

string person::get_name() const {return name;}
char person::get_gender() const {return gender;}
int person::get_age() const {return age;}
int person::get_id()  const { return id; }

void person::display() const
{
	cout << "information about" << name << endl;
	cout << "Name is : " << name << endl;
	cout << "Gender is : " << gender << endl;
	cout << "Age is : " << age << endl;
	cout << "ID is : " << id << endl;
}

person::person()
{
	name = "UnKnown";
	gender = '*';
	age = 0;
	id = 0;
}

person::person(string name, char gender, int age, int id)
	:name(name), gender(gender), age(age), id(id){}
person::~person(){}
