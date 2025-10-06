#include "Patient.h"
#include <string>


void Patient::add_medical_record(const Medical_Record& m)
{
	history.push_back(m);
}

void Patient::update_medical_record()
{
	int selected_record, edit_option;
	cout << "Choose Recored to edit it" << endl;
	show_history();
	cin >> selected_record;
	system("cls");
	history.at(selected_record - 1).display();

	string new_symptom, new_medicin;
	string new_doctor_name, new_doctor_specialization, new_doctor_id;
	cout << "***** Choose what to edit *****" << endl;
	cout << "1- doctor name" << endl;
	cout << "2- doctor specialization" << endl;
	cout << "3- doctor id" << endl;
	cout << "4- add symptom" << endl;
	cout << "5- remove symptom " << endl;
	cout << "6- add medicin" << endl;
	cout << "7- remove medicin" << endl;
	cout << "0- back" << endl;
	cin >> edit_option;
	switch (edit_option)
	{

		case 1:
		{
			cout << "Enter new doctor name" << endl;
			cin >> new_doctor_name;
			history.at(selected_record - 1).set_doctor_name(new_doctor_name);
			break;
		}
		case 2:
		{
			//„Õ «ÃÂ «Œ·ÌÂ Ì⁄—÷·Ì «· Œ’’«  «·„ «ÕÂ ⁄·‘«‰ «Œ «— „‰Â« 
			cout << "Enter new doctor specialization" << endl;
			cin >> new_doctor_specialization;
			history.at(selected_record - 1).set_doctor_specialization(new_doctor_specialization);
			break;
		}
		case 3:
		{
			cout << "Enter new doctor id" << endl;
			cin >> new_doctor_id;
			history.at(selected_record - 1).set_doctor_national_id(stoi(new_doctor_id));
			break;
		}
		case 4:
		{
			cin.ignore();
			cout << "Enter new symptom" << endl;
			getline(cin, new_symptom);
			history.at(selected_record - 1).add_symptom(new_symptom);
			break;
		}
		case 5:
		{
			int chose_symptom;
			cout << "choose symptom to remove it" << endl;
			history.at(selected_record- 1).dispaly_symptoms();
			cin >> chose_symptom;
			history.at(selected_record - 1).remove_symptom(chose_symptom - 1);
			break;
		}
		case 6:
		{
			cin.ignore();	
			cout << "Enter new medicin" << endl;
			getline(cin, new_medicin);
			history.at(selected_record - 1).add_medicin(new_medicin);
			break;
		}
		case 7:
		{
			int chose_medicin;
			cout << "choose medicin to remove it" << endl;
			history.at(selected_record - 1).dispaly_medicins();
			cin >> chose_medicin;
			history.at(selected_record - 1).remove_medicin(chose_medicin - 1);
			break;
		}
	default:
		break;
	}
}

void Patient::remove_medical_record()
{
	cout << "chose recored to remove it" << endl;
	show_history();
	int chooise;
	cin >> chooise;
	history.erase(history.begin() + chooise - 1);	
}

void Patient::show_history() const
{
	if (history.empty())cout << "No history this is the first visit" << endl;
	else 
	{
		for (int i = 0; i < history.size(); i++) {
			cout << "***** " << i + 1 << " *****" << endl;
			history.at(i).display();
		}
	}
}

void Patient::show_last_visit()
{
	if (history.empty())cout << "No history this is the first visit" << endl;
	else
	{
		history.back().display();
	}
}

void Patient::display() const
{
	Person::display();
	show_history();
}



Patient::Patient()
{
}

Patient::Patient(const string& name, int age, const string& id, char gender): Person(name, age, id, gender)
{
}

Patient::~Patient()
{
}
