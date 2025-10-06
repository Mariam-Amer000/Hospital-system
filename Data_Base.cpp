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
		for (int i = 0; i < Doctors.size(); i++) 
		{
			cout << "Doctor " << i + 1 << " :" << endl;
			Doctors.at(i).display();
			cout << "------------------------" << endl;
		}
	}
}
void Data_Base::display_staff() const
{
	if (Staffs.empty())cout << "There is no Staff yet" << endl;
	else
	{
		for (int i = 0; i < Staffs.size(); i++) 
		{
			cout << "Staff " << i + 1 << " :" << endl;
			Staffs.at(i).display();
			cout << "------------------------" << endl;
		}
	}
}
void Data_Base::display_patients() const
{
	if (Patients.empty())cout << "There is no Patients yet" << endl;
	else
	{
		for (int i = 0; i < Patients.size(); i++) 
		{
			cout << "Patient " << i + 1 << " :" << endl;
			Patients.at(i).display();
			cout << "------------------------" << endl;
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
			cout << i + 1 << " : " << specializations.at(i) << endl;
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

void Data_Base::display_doctors_with_specialization(string specialization) const
{
	for (int i = 0; i < Doctors.size(); i++)
	{
		if(Doctors.at(i).get_specialization()== specialization)
		{
			cout << i + 1 << "- " << Doctors.at(i).get_name() << "have " << Doctors.at(i).get_patient_number() << "Patient" << endl;
			cout << "------------------------" << endl;
		}
	}
}




