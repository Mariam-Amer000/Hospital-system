#include "Hospital.h"
#include<string>
#include<iostream>
using namespace std;
void Hospital::main_menu()
{
	cout << "***** Main Menu *****" << endl;
	cout << "1- Doctor" << endl;
	cout << "2- Staff" << endl;
	cout << "0- Exit" << endl;
}
void Hospital::Doctor_menu()
{
	cout << "***** Doctor Menu *****" << endl;
	cout << "1- Doctor information" << endl;
	cout << "2- current patients number" << endl;
	cout << "3- current patient history" << endl;
	cout << "0- Back to the main menu" << endl;
}
void Hospital::Staff_menu()
{
	cout << "***** Staff Menu *****" << endl;
	cout << "1- Doctor HUP" << endl;
	cout << "2- Staff HUP" << endl;
	cout << "3- Patient HUP" << endl;
	cout << "4- Specialization HUP" << endl;
	cout << "0- Back to the main menu" << endl;

}
void Hospital::Doctor_HUB()
{
	cout << "***** Doctor HUB *****" << endl;
	cout << "1- Add Doctor" << endl;
	cout << "2- Remove Doctor" << endl;
	cout << "3- Update Doctor" << endl;
	cout << "4- Find Doctor" << endl;
	cout << "5- show all Doctors" << endl;
	cout << "0- Back to the main menu" << endl;
}
void Hospital::Staff_HUB()
{
	cout << "***** Staff HUB *****" << endl;
	cout << "1- Add Staff" << endl;
	cout << "2- Remove Staff" << endl;
	cout << "3- Update Staff" << endl;
	cout << "4- Find Staff" << endl;
	cout << "5- show all Staffs" << endl;
	cout << "0- Back to the main menu" << endl;
}
void Hospital::Patient_HUB()
{
	cout << "***** Patien HUB *****" << endl;
	cout << "1- Add Patienf" << endl;
	cout << "2- Remove Patien" << endl;
	cout << "3- Update Patien" << endl;
	cout << "4- Find Patienf" << endl;
	cout << "5- show all Patients" << endl;
	cout << "0- Back to the main menu" << endl;
}
void Hospital::Specialization_HUB()
{
	cout<< "***** Specialization HUB *****" << endl;
	cout << "1- Add Specialization" << endl;
	cout << "2- Remove Specialization" << endl;
	cout << "3- Update Specialization" << endl;
	cout << "4- Show all Specializations" << endl;
	cout << "0- Back to the main menu" << endl;
}

Doctor Hospital::add_doctor()
{
	string name,  national_id;
	int age, max_patient_number, chooise,patient_number = 0;
	char gender;
	double salary;
	bool have_access = 0;
	Doctor d;
	//national ID
	do
	{
		bool is_digit = 1;
		cout << "Enter National ID: ";
		cin >> national_id;
		//id validation 
		for (int i = 0; i < national_id.size(); i++) {
			if (!isdigit(national_id[i]))
			{
				is_digit = 0;
				break;
			}
		}
		if (national_id.size() == 14 && is_digit){}
		else 
		{
			national_id = "0";
			cout << "Pleas Write Valied National ID" << endl;
		}
	} while (national_id == "0");

	Doctor* foundDoctor = db.Find_doctor(national_id);
	if (foundDoctor)
	{
		cout << "Doctor found" << endl;
		d = *foundDoctor;
		d.display();
	}
	else
	{
		d.set_national_id(national_id);
		cin.ignore();
		do
		{
			cout << "Enter doctor name: ";
			getline(cin, name);
			d.set_name(name);
		} while (d.get_name() == "0");
		do
		{
			cout << "Enter age: ";
			cin >> age;
			d.set_age(age);
		} while (d.get_age() == 0);
		do
		{
			cout << "Enter gender (M/F): ";
			cin >> gender;
			d.set_gender(gender);
		} while (d.get_gender() == '0');
		do
		{
			cout << "Enter salary: ";
			cin >> salary;
			d.set_salary(salary);
		} while (d.get_salary() == 0);

		cout << "Choose specialization: " << endl;
		db.display_specializations();
		cin >> chooise;
		d.set_specialization(db.get_specialization(chooise - 1));

		do
		{
			cout << "Enter max patients: ";
			cin >> max_patient_number;
			d.set_max_patient_number(max_patient_number);
		} while (d.get_max_patient_number() != 0);

		cout << "Have acces or not" << endl;
		cin >> have_access;
		d.set_have_access(have_access);
		db.add_doctor(d);
		dm.save_doctor(d, "doctors.txt");
	}
	return d;
}
Staff Hospital::add_staff()
{
	string name, national_id;
	int age;
	char gender;
	double salary;
	bool have_access = 0;
	Staff s;
	do
	{
		bool is_digit = 1;
		cout << "Enter National ID: ";
		cin >> national_id;
		//id validation 
		for (int i = 0; i < national_id.size(); i++) {
			if (!isdigit(national_id[i]))
			{
				is_digit = 0;
				break;
			}
		}
		if (national_id.size() == 14 && is_digit){}
		else
		{
			national_id = "0";
			cout << "Pleas Write Valied National ID" << endl;
		}
	} while (national_id == "0");
	Staff* found_staff = db.Find_staff(national_id);
	if (found_staff)
	{
		cout << "Staff found" << endl;
		s = *found_staff;
		s.display();
	}
	else
	{
		s.set_national_id(national_id);
		cin.ignore();
		do
		{
			cout << "Enter Staff name: ";
			getline(cin, name);
			s.set_name(name);
		} while (s.get_name() == "0");
		do
		{
			cout << "Enter age: ";
			cin >> age;
			s.set_age(age);
		} while (s.get_age() == 0);
		do
		{
			cout << "Enter gender (M/F): ";
			cin >> gender;
			s.set_gender(gender);
		} while (s.get_gender() == '0');
		do
		{
			cout << "Enter salary: ";
			cin >> salary;
			s.set_salary(salary);
		} while (s.get_salary() == 0);

		cout << "Have acces or not" << endl;
		cin >> have_access;
		s.set_have_access(have_access);
		db.add_staff(s);
	}
	return s;
}
Patient Hospital::add_patient()
{
	string name, national_id;
	int age;
	char gender;
	Patient p;
	do
	{
		bool is_digit = 1;
		cout << "Enter National ID: ";
		cin >> national_id;
		//id validation 
		for (int i = 0; i < national_id.size(); i++) {
			if (!isdigit(national_id[i]))
			{
				is_digit = 0;
				break;
			}
		}
		if (national_id.size() == 14 && is_digit){}
		else
		{
			national_id = "0";
			cout << "Pleas Write Valied National ID" << endl;
		}
	} while (national_id == "0");
	Patient* found_patient = db.Find_patient(national_id);
	if (found_patient)
	{
		cout << "Patient found" << endl;
		p = *found_patient;
		p.display();
	}
	else
	{
		p.set_national_id(national_id);
		cin.ignore();
		do
		{
			cout << "Enter Pateint name: ";
			getline(cin, name);
			p.set_name(name);
		} while (p.get_name() == "0");
		do
		{
			cout << "Enter age: ";
			cin >> age;
			p.set_age(age);
		} while (p.get_age() == 0);
		do
		{
			cout << "Enter gender (M/F): ";
			cin >> gender;
			p.set_gender(gender);
		} while (p.get_gender() == '0');
		db.add_patient(p);
	}
	return p;
}
string Hospital::add_specialization()
{
	string specialization;
	cout << "Enter new specialization: ";
	cin.ignore();	
	getline(cin, specialization);
	db.add_specialization(specialization);
	dm.save_specialization(specialization, "Specializations.txt");
	return specialization;
}

void Hospital::remove_doctor()
{
	string national_id;
	cout << "Enter doctor national ID to remove: ";
	cin >> national_id;	
	db.remove_doctor(national_id);
}
void Hospital::remove_patient()
{
	string	national_id;
	cout << "Enter patient national ID to remove: ";
	cin >> national_id;
	db.remove_patient(national_id);
}
void Hospital::remove_staff()
{
	string national_id;
	cout << "Enter staff national ID to remove: ";
	cin >> national_id;
	db.remove_staff(national_id);
}
void Hospital::remove_specialization()
{
	cout << "choose specialization to remove: " << endl;
	db.display_specializations();
	int chooise;
	cin >> chooise;
	string specialization = db.get_specialization(chooise - 1);
	db.remove_specialization(specialization);
}

void Hospital::show_all_doctors()
{
	db.display_doctors();
}
void Hospital::show_all_staff()
{
	db.display_staff();
}
void Hospital::show_all_patient()
{
	db.display_patients();
}
void Hospital::show_all_specialization()
{
	db.display_specializations();
}

Doctor* Hospital::find_doctor(string national_id)
{
	Doctor* d = db.Find_doctor(national_id);
	return d;
}
Staff* Hospital::find_staff(string national_id)
{
	Staff* s = db.Find_staff(national_id);
	return s;
}
Patient* Hospital::find_patient(string national_id)
{
	Patient* p = db.Find_patient(national_id);
	return p;
}

void Hospital::update_Doctor() //ÂÌ”„⁄ ⁄·Ï ÿÊ· ›Ì «·œ« « »Ì“ „‰ €Ì— „« «⁄„· ÃÊ«Â«  ⁄œÌ·  «‰Ì 
{
	string national_id;
	cout << "Enter doctor national ID to update: ";
	cin >> national_id;
	Doctor* found = find_doctor(national_id);
	if (found)
	{
		int choise;
		do
		{
			cout << "choose " << endl;
			cout << "1- National id" << endl;
			cout << "2- Name" << endl;
			cout << "3- Age" << endl;
			cout << "4- Gender" << endl;
			cout << "5- salary" << endl;
			cout << "6- specialization" << endl;
			cout << "7- max_patient_number" << endl;
			cout << "8- Haveing access" << endl;
			cout << "0- Back" << endl;
			cout << "Enter your choice: ";
			cin >> choise;
			switch (choise) 
			{
			case 1:
			{
				string new_id;
				cout << "Enter new id: ";
				cin >> new_id;
				found->set_national_id(new_id);
				break;
			}
			case 2:
			{
				string new_name;
				cout << "Enter new name: ";
				cin >> new_name;
				found->set_name(new_name);
				break;
			}
			case 3:
			{
				int new_age;
				cout << "Enter new age: ";
				cin >> new_age;
				found->set_age(new_age);
				break;
			}
			case 4:
			{
				char new_gender;
				cout << "Enter new age: ";
				cin >> new_gender;
				found->set_gender(new_gender);
				break;
			}
			case 5:
			{
				double new_salary;
				cout << "Enter new salary: ";
				cin >> new_salary;
				found->set_salary(new_salary);
				break;
			}
			case 6:
			{
				string new_specialization;
				cout << "Enter new specialization: ";
				cin >> new_specialization;
				found->set_specialization(new_specialization);
				break;
			}
			case 7:
			{
				int new_max_patient_number;
				cout << "Enter new max_patient_number: ";
				cin >> new_max_patient_number;
				found->set_max_patient_number(new_max_patient_number);
				break;
			}
			case 8:
			{
				bool new_have_access;
				cout << "Enter new have_access (1 for true, 0 for false): ";
				cin >> new_have_access;
				found->set_have_access(new_have_access);
				break;
			}
			case 0:
			default :
				break;
			}
		} while (choise != 0);
	}
	else 
	{
		cout << "Doctor not found" << endl;
	}
}
void Hospital::update_Staff()
{
	string national_id;
	cout << "Enter doctor national ID to update: ";
	cin >> national_id;
	Doctor* found = find_doctor(national_id);
	if (found)
	{
		int choise;
		do
		{
			cout << "choose " << endl;
			cout << "1- National id" << endl;
			cout << "2- Name" << endl;
			cout << "3- Age" << endl;
			cout << "4- Gender" << endl;
			cout << "5- salary" << endl;
			cout << "6- Haveing access" << endl;
			cout << "0- Back" << endl;
			cout << "Enter your choice: ";
			cin >> choise;
			switch (choise)
			{
			case 1:
			{
				string new_id;
				cout << "Enter new id: ";
				cin >> new_id;
				found->set_national_id(new_id);
				break;
			}
			case 2:
			{
				string new_name;
				cout << "Enter new name: ";
				cin >> new_name;
				found->set_name(new_name);
				break;
			}
			case 3:
			{
				int new_age;
				cout << "Enter new age: ";
				cin >> new_age;
				found->set_age(new_age);
				break;
			}
			case 4:
			{
				char new_gender;
				cout << "Enter new age: ";
				cin >> new_gender;
				found->set_gender(new_gender);
				break;
			}
			case 5:
			{
				double new_salary;
				cout << "Enter new salary: ";
				cin >> new_salary;
				found->set_salary(new_salary);
				break;
			}
			case 6:
			{
				bool new_have_access;
				cout << "Enter new have_access (1 for true, 0 for false): ";
				cin >> new_have_access;
				found->set_have_access(new_have_access);
				break;
			}
			case 0:
			default:
				break;
			}
		} while (choise != 0);
	}
	else
	{
		cout << "Staff not found" << endl;
	}
}
void Hospital::update_Patient()
{
	string national_id;
	cout << "Enter doctor national ID to update: ";
	cin >> national_id;
	Doctor* found = find_doctor(national_id);
	if (found)
	{
		int choise;
		do
		{
			cout << "choose " << endl;
			cout << "1- National id" << endl;
			cout << "2- Name" << endl;
			cout << "3- Age" << endl;
			cout << "4- Gender" << endl;
			cout << "0- Back" << endl;
			cout << "Enter your choice: ";
			cin >> choise;
			switch (choise)
			{
			case 1:
			{
				string new_id;
				cout << "Enter new id: ";
				cin >> new_id;
				found->set_national_id(new_id);
				break;
			}
			case 2:
			{
				string new_name;
				cout << "Enter new name: ";
				cin >> new_name;
				found->set_name(new_name);
				break;
			}
			case 3:
			{
				int new_age;
				cout << "Enter new age: ";
				cin >> new_age;
				found->set_age(new_age);
				break;
			}
			case 4:
			{
				char new_gender;
				cout << "Enter new age: ";
				cin >> new_gender;
				found->set_gender(new_gender);
				break;
			}
			case 0:
			default:
				break;
			}
		} while (choise != 0);
	}
	else
	{
		cout << "Staff not found" << endl;
	}
}
void Hospital::update_Specialization()
{
	int chooise;
	string new_name;
	db.display_specializations();
	cout << "enter the number of the choosen one";
	cin >> chooise;
	cout << "Enter the new name";
	cin >> new_name;
	db.update_specialization(chooise - 1, new_name);
}

void Hospital::load_all()
{
	db.load_Specializations();
	db.load_Doctors();
	db.load_Staffs();
	db.load_Patients();
}

