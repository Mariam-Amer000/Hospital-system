#include "person.h"

void Person::set_name(string name){ this->name = name; }
void Person::set_gender(char gender) { this->gender = gender; }
void Person::set_age(int age) { this->age = age; }
void Person::set_id(int id) { this->id = id; }

string Person::get_name() const {return name;}
char Person::get_gender() const {return gender;}
int Person::get_age() const {return age;}
int Person::get_id()  const { return id; }

void Person::display() const
{
	cout << "information about" << name << endl;
	cout << "Name is : " << name << endl;
	cout << "Gender is : " << gender << endl;
	cout << "Age is : " << age << endl;
	cout << "ID is : " << id << endl;
}

Person::Person()
{
	name = "UnKnown";
	gender = '*';
	age = 0;
	id = 0;
}

Person::Person(string name, char gender, int age, int id)
	:name(name), gender(gender), age(age), id(id){}
	
	
Person::~Person(){}
