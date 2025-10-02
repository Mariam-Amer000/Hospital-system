#include "Data_Base.h"
#include "Hospital.h"

void Data_Base::add_doctor(Doctor d)
{
	Doctors.push_back(d);
}
void Data_Base::add_staff(Staff s)
{
	Staffs.push_back(s);
}
void Data_Base::add_patient(Patient p)
{
	Patients.push_back(p);
}
void Data_Base::add_specialization(string specialization)
{
	specializations.push_back(specialization);
}

void Data_Base::remove_doctor(string id)
{
	if (Doctors.empty())cout << "There is no doctors yet" << endl;
	else 
	{
		for (int i = 0; i < Doctors.size(); i++) 
		{
			if (Doctors[i].get_national_id() == id) 
			{
				Doctors.erase(Doctors.begin() + i);
				cout << "Remove Done for " << id << endl;
				return;
			}
		}
		cout << "There is no doctor wiht this id : " << id << endl;
	}
}
void Data_Base::remove_staff(string id)
{

	if (Staffs.empty())cout << "There is no staff yet" << endl;
	else
	{
		for (int i = 0; i < Staffs.size(); i++)
		{
			if (Staffs[i].get_national_id() == id)
			{
				Staffs.erase(Staffs.begin() + i);
				cout << "Remove Done for " << id << endl;
				return;
			}
		}
		cout << "There is no Staff wiht this id : " << id << endl;
	}
}
void Data_Base::remove_patient(string id)
{
	if (Patients.empty())cout << "There is no Patient yet" << endl;
	else
	{
		for (int i = 0; i < Patients.size(); i++)
		{
			if (Patients[i].get_national_id() == id)
			{
				Patients.erase(Patients.begin() + i);
				cout << "Remove Done for " << id << endl;
				return;
			}
		}
		cout << "There is no Patient wiht this id : " << id << endl;
	}
}
void Data_Base::remove_specialization(string specialization)
{
	if (specializations.empty())cout << "There is no specializations yet" << endl;
	else
	{
		for (int i = 0; i < specializations.size(); i++)
		{
			if (specializations[i]==specialization)
			{
				specializations.erase(specializations.begin() + i);
				cout << "Remove Done for " << specialization << endl;
				return;
			}
		}
		cout << "There is no Specialization with this name: " << specialization << endl;
	}
}

void Data_Base::display_doctors() const
{
	if (Doctors.empty())cout << "There is no doctors yet" << endl;
	else
	{
		for (int i = 0; i < Doctors.size(); i++) {
			Doctors.at(i).display();
		}
	}
}
void Data_Base::display_staff() const
{
	if (Staffs.empty())cout << "There is no Staff yet" << endl;
	else
	{
		for (int i = 0; i < Staffs.size(); i++) {
			Staffs.at(i).display();
		}
	}
}
void Data_Base::display_patients() const
{
	if (Patients.empty())cout << "There is no Patients yet" << endl;
	else
	{
		for (int i = 0; i < Patients.size(); i++) {
			Patients.at(i).display();
		}
	}
}
void Data_Base::display_specializations() const
{
	if (specializations.empty())cout << "There is no specializations yet" << endl;
	else
	{
		for (int i = 0; i < specializations.size(); i++)
		{
			cout << i + 1 << ' ' << specializations.at(i) << endl;
		}
	}
}

Doctor* Data_Base::Find_doctor(string id)
{
	if (Doctors.empty()) {
		return nullptr;
	}
	else
	{
		for (int i = 0; i < Doctors.size(); i++)
		{
			if (Doctors[i].get_national_id() == id)
			{
				return &Doctors[i];
			}
		}
	}
	return nullptr;
}
Staff* Data_Base::Find_staff(string id)
{
	if (Staffs.empty()) {
		return nullptr;
	}
	else
	{
		for (int i = 0; i < Staffs.size(); i++)
		{
			if  (Staffs[i].get_national_id() == id)
			{
				return &Staffs[i];
			}
		}
	}
	return nullptr;
}
Patient* Data_Base::Find_patient(string id)
{
	if (Patients.empty()) {
		return nullptr;
	}
	else
	{
		for (int i = 0; i < Patients.size(); i++)
		{
			if (Patients[i].get_national_id() == id)
			{
				return &Patients[i];
			}
		}
	}
	return nullptr;
}
string Data_Base::get_specialization(int index)
{
	return specializations.at(index);
}
void Data_Base::update_doctor(string id)
{
	bool found = 0;
	if (Doctors.empty()) {
		cout << "There is no doctors yet" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < Doctors.size(); i++)
		{
			if (Doctors[i].get_national_id() == id)
			{
				found = 1;
			}
		}
		if (!found)
		{
			cout << "There is no doctor wiht this id : " << id << endl;
			return;
		}
		else 
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
					for (int i = 0; i < Doctors.size(); i++)
					{
						if (Doctors[i].get_national_id() == id)
						{
							Doctors[i].set_national_id(new_id);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
					}
					case 2:
					{
						string new_name;
						cout << "Enter new name: ";
						cin >> new_name;
						for (int i = 0; i < Doctors.size(); i++)
						{
							if (Doctors[i].get_national_id() == id)
							{
								Doctors[i].set_name(new_name);
								cout << "Update Done" << endl;
								break;
							}
						}
						break;
					}
					case 3:
					{
						int new_age;
						cout << "Enter new age: ";
						cin >> new_age;
						for (int i = 0; i < Doctors.size(); i++)
						{
							if (Doctors[i].get_national_id() == id)
							{
								Doctors[i].set_age(new_age);
								cout << "Update Done" << endl;
								break;
							}
						}
						break;
					}
					case 4:
					{
						char new_gender;
						cout << "Enter new age: ";
						cin >> new_gender;
						for (int i = 0; i < Doctors.size(); i++)
						{
							if (Doctors[i].get_national_id() == id)
							{
								Doctors[i].set_gender(new_gender);
								cout << "Update Done" << endl;
								break;
							}
						}
						break;
					}
					case 5:
					{
						double new_salary;
						cout << "Enter new salary: ";
						cin >> new_salary;
						for (int i = 0; i < Doctors.size(); i++)
						{
							if (Doctors[i].get_national_id() == id)
							{
								Doctors[i].set_salary(new_salary);
								cout << "Update Done" << endl;
								break;
							}
						}
						break;
					}
					case 6:
					{
						string new_specialization;
						cout << "Enter new specialization: ";
						cin >> new_specialization;
						for (int i = 0; i < Doctors.size(); i++)
						{
							if (Doctors[i].get_national_id() == id)
							{
								Doctors[i].set_specialization(new_specialization);
								cout << "Update Done" << endl;
								break;
							}
						}
						break;
					}
					case 7:
					{
						int new_max_patient_number;
						cout << "Enter new max_patient_number: ";
						cin >> new_max_patient_number;
						for (int i = 0; i < Doctors.size(); i++)
						{
							if (Doctors[i].get_national_id() == id)
							{
								Doctors[i].set_max_patient_number(new_max_patient_number);
								cout << "Update Done" << endl;
								break;
							}
						}
						break;
					}
					case 8:
					{
						bool new_have_access;
						cout << "Enter new have_access (1 for true, 0 for false): ";
						cin >> new_have_access;
						for (int i = 0; i < Doctors.size(); i++)
						{
							if (Doctors[i].get_national_id() == id)
							{
								Doctors[i].set_have_access(new_have_access);
								cout << "Update Done" << endl;
								break;
							}
						}
						break;
					}
					case 0:
						break;
				default:
					break;
				}
			} while (choise!=0);
		}
	}
}

void Data_Base::update_staff(string id)
{
	bool found = 0;
	if (Staffs.empty()) {
		cout << "There is no staff yet" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < Staffs.size(); i++)
		{
			if (Staffs[i].get_national_id() == id)
			{
				found = 1;
			}
		}
		if (!found)
		{
			cout << "There is no staff wiht this id : " << id << endl;
			return;
		}
		else
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
					for (int i = 0; i < Staffs.size(); i++)
					{
						if (Staffs[i].get_national_id() == id)
						{
							Staffs[i].set_national_id(new_id);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 2:
				{
					string new_name;
					cout << "Enter new name: ";
					cin >> new_name;
					for (int i = 0; i < Staffs.size(); i++)
					{
						if (Staffs[i].get_national_id() == id)
						{
							Staffs[i].set_name(new_name);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 3:
				{
					int new_age;
					cout << "Enter new age: ";
					cin >> new_age;
					for (int i = 0; i < Staffs.size(); i++)
					{
						if (Staffs[i].get_national_id() == id)
						{
							Staffs[i].set_age(new_age);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 4:
				{
					char new_gender;
					cout << "Enter new age: ";
					cin >> new_gender;
					for (int i = 0; i < Staffs.size(); i++)
					{
						if (Staffs[i].get_national_id() == id)
						{
							Staffs[i].set_gender(new_gender);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 5:
				{
					double new_salary;
					cout << "Enter new salary: ";
					cin >> new_salary;
					for (int i = 0; i < Staffs.size(); i++)
					{
						if (Staffs[i].get_national_id() == id)
						{
							Staffs[i].set_salary(new_salary);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 0:
					break;
				default:
					break;
				}
			} while (choise != 0);
		}
	}
}

void Data_Base::update_patient(string id)
{
	bool found = 0;
	if (Patients.empty()) {
		cout << "There is no patient yet" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < Patients.size(); i++)
		{
			if (Patients[i].get_national_id() == id)
			{
				found = 1;
			}
		}
		if (!found)
		{
			cout << "There is no patient wiht this id : " << id << endl;
			return;
		}
		else
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
					for (int i = 0; i < Patients.size(); i++)
					{
						if (Patients[i].get_national_id() == id)
						{
							Patients[i].set_national_id(new_id);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 2:
				{
					string new_name;
					cout << "Enter new name: ";
					cin >> new_name;
					for (int i = 0; i < Patients.size(); i++)
					{
						if (Patients[i].get_national_id() == id)
						{
							Patients[i].set_name(new_name);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 3:
				{
					int new_age;
					cout << "Enter new age: ";
					cin >> new_age;
					for (int i = 0; i < Patients.size(); i++)
					{
						if (Patients[i].get_national_id() == id)
						{
							Patients[i].set_age(new_age);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 4:
				{
					char new_gender;
					cout << "Enter new age: ";
					cin >> new_gender;
					for (int i = 0; i < Patients.size(); i++)
					{
						if (Patients[i].get_national_id() == id)
						{
							Patients[i].set_gender(new_gender);
							cout << "Update Done" << endl;
							break;
						}
					}
					break;
				}
				case 0:
					break;
				default:
					break;
				}
			} while (choise != 0);
		}
	}
}

void Data_Base::update_specialization(int index, string new_name)
{
	specializations.at(index) = new_name;
}

void Data_Base::load_Doctors()
{
	dm.load_doctors(Doctors,"Doctors.txt");
}

void Data_Base::load_Staffs()
{
	dm.load_staffs(Staffs, "Staff.txt");
}

void Data_Base::load_Patients()
{
	dm.load_patients(Patients, "Patient.txt");
}

void Data_Base::load_Specializations()
{
	dm.load_specializations(specializations, "Specializations.txt");
}




