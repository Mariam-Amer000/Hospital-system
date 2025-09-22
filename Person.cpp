#include "Person.h"

//void Person::set_name(string name)
//{
// ÇáİßÑå ßæíÓå ÈÓ áæ ÇáãÓÊÎÏã ÏÎá ãÓÇİå İí ÇáÇæá Çæ ÇáÇÎÑÇæ ÍÊì áæ ÇÓÊÎÏã ÇßÊÑ ãä ãÓÇİå Èíä ÇáßáãÇÊ ÇáÏäíÇ åÊÈæÙ
//    int word_count = 1;
//    for (char letter : name)
//    {
//        if (isspace(letter))word_count++;
//    }
//}
void Person::set_name(string name)
{
    //ÇÊÇßÏäÇ Çä ÇáÇÓã ÑÈÇÚí æßãÇä ßá ÇÓã ãä ÇáÇÑÈÚå Èíäå æÈíä ÇáÊÇäí ãÓÇİå æÇÍÏå ÈÓ
    string full_name;
    int word_count = 0;
    bool inside_word = false;
    for (char letter : name)
    {
        if (isspace(letter)) 
        {
            if (inside_word)
            {
                word_count++;
                full_name += ' ';
                inside_word = false;
            }
          
        }
        else
        {
            full_name += letter;
            inside_word = true;
        }
        
    }
    if (inside_word)word_count++;
    if (word_count == 4)this->name = full_name;
    else this->name = "0";
}
//mariam mohamed ali ali 
void Person::set_age(int age)
{
    if (age >= 0 && age <= 120) { this->age = age; }
    else { this->age = 0; }
}

void Person::set_national_id(int national_id)
{
    this->national_id = national_id;
}

void Person::set_gender(char gender)
{
    this->gender = gender;
}

string Person::get_name()
{
    return name;
}

int Person::get_age()
{
    return age;
}

int Person::get_national_id()
{
    return national_id;
}

char Person::get_gender()
{
    return gender;
}

void Person::display() const
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "National Id : " << national_id << endl;
    (gender == 'f' || gender == 'F') ? cout << "Gender : Female" << endl : cout << "Gender : Male" << endl;
}

Person::Person()
{
}

Person::Person(string name, int age, int id, char gender) : national_id(id), gender(gender)
{
    //should implement validation here 
    set_name(name);
    set_age(age);
}

Person::~Person()
{
}
