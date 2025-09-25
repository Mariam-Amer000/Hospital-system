#include "Data_Base.h"

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

void Data_Base::remove_doctor(int id)
{
	bool found = 0;
	if (Doctors.empty())cout << "There is no doctors yet" << endl;
	else 
	{
		for (int i = 0; i < Doctors.size(); i++) 
		{
			if (Doctors[i].get_national_id() == id) 
			{
				Doctors.erase(Doctors.begin() + i);
				cout << "Remove Done for " << id << endl;
				found = 1;
				break;
			}
		}
		if (!found)cout << "There is no doctor wiht this id : " << id << endl;
	}
}
void Data_Base::remove_staff(int id)
{
	bool found = 0;
	if (Staffs.empty())cout << "There is no staff yet" << endl;
	else
	{
		for (int i = 0; i < Staffs.size(); i++)
		{
			if (Staffs[i].get_national_id() == id)
			{
				Staffs.erase(Staffs.begin() + i);
				cout << "Remove Done for " << id << endl;
				found = 1;
				break;
			}
		}
		if (!found)cout << "There is no Staff wiht this id : " << id << endl;
	}
}
void Data_Base::remove_patient(int id)
{
	bool found = 0;
	if (Patients.empty())cout << "There is no Patient yet" << endl;
	else
	{
		for (int i = 0; i < Patients.size(); i++)
		{
			if (Patients[i].get_national_id() == id)
			{
				Patients.erase(Patients.begin() + i);
				cout << "Remove Done for " << id << endl;
				found = 1;
				break;
			}
		}
		if (!found)cout << "There is no Patient wiht this id : " << id << endl;
	}
}
void Data_Base::remove_specialization(string specialization)
{
	bool found = 0;
	if (specializations.empty())cout << "There is no specializations yet" << endl;
	else
	{
		for (int i = 0; i < specializations.size(); i++)
		{
			if (specializations[i]==specialization)
			{
				specializations.erase(specializations.begin() + i);
				cout << "Remove Done for " << specialization << endl;
				found = 1;
			}
		}
		if (!found)cout << "There is no Specialization with this name: " << specialization << endl;
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
void Data_Base::display_patient() const
{
	if (Patients.empty())cout << "There is no Patients yet" << endl;
	else
	{
		for (int i = 0; i < Patients.size(); i++) {
			Patients.at(i).display();
		}
	}
}
void Data_Base::display_specialization() const
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

Doctor Data_Base::Find_doctor(int id)
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
				return Doctors[i];
			}
		}
		if (!found) 
		{ 
			cout << "There is no doctor wiht this id : " << id << endl;
			return;
		}
	}
}
Staff Data_Base::Find_staff(int id)
{
	bool found = 0;
	if (Doctors.empty()) {
		cout << "There is no Staff yet" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < Staffs.size(); i++)
		{
			if (Staffs[i].get_national_id() == id)
			{
				found = 1;
				return Staffs[i];
			}
		}
		if (!found)
		{
			cout << "There is no Staff wiht this id : " << id << endl;
			return;
		}
	}
}
Patient Data_Base::Fine_patient(int id)
{
	bool found = 0;
	if (Doctors.empty()) {
		cout << "There is no Patients yet" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < Patients.size(); i++)
		{
			if (Patients[i].get_national_id() == id)
			{
				found = 1;
				return Patients[i];
			}
		}
		if (!found)
		{
			cout << "There is no Patient wiht this id : " << id << endl;
			return;
		}
	}
}
