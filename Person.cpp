#include "Person.h"
void Person::set_name(string name)
{
    stringstream ss(name);
    string word;
    vector<string>words;
    while (ss >> word) // åíŞÑÃ ßá ßáãÉ ãäİÕøáÉ ÈãÓÇİÉ
    {
        words.push_back(word);
    }
    if (words.size() >= 4)
    {
        this->name = words[0] + ' ' + words[1] + ' ' + words[2] + ' ' + words[3];
    }
    else
        this->name = "";
}
void Person::set_age(int age)
{
    if (age >= 0 && age <= 120) { this->age = age; }
    else { this->age = 0; }
}

void Person::set_national_id(string national_id)
{
    if(id_validation(national_id))this->national_id = national_id;
	else this->national_id = "0";
}

void Person::set_gender(char gender)
{
    if (gender == 'f' || gender == 'F' || gender == 'm' || gender == 'M')this->gender = toupper(gender);
    else this->gender = '0';
}

string Person::get_name()const
{
    return name;
}

int Person::get_age()const
{
    return age;
}

string Person::get_national_id()const
{
    return national_id;
}

char Person::get_gender()const
{
    return gender;
}

void Person::display() const
{
    cout << "Name : " << name << endl;
    cout << "National Id : " << national_id << endl;
    cout << "Age : " << age << endl;

    if (gender == 'f' || gender == 'F')
        cout << "Gender : Female" << endl;

    else if (gender == 'm' || gender == 'M') 
        cout << "Gender : Male" << endl;

}

bool Person::id_validation(string id)
{
	if (id.size() != 14) return false;
    else
    {
        for(char c : id)
        {
            if(!isdigit(c)) return false;
		}
    }
	return true;
}

Person::Person()
{
}

Person::Person(string name, int age, string id, char gender) 
{
    //should implement validation here 
	set_national_id(id);
    set_name(name);
    set_age(age);
    set_gender(gender);
}

Person::~Person()
{
}
