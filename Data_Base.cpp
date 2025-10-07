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
void Data_Base::add_specialization(const string& specialization)
{
	specializations.push_back(specialization);
}
void Data_Base::add_id(const string& id)
{
	all_ids.push_back(id);
}

int Data_Base::get_doctors_size() const
{
	return Doctors.size();
}
int Data_Base::get_staffs_size() const
{
	return Staffs.size();
}
int Data_Base::get_patients_size() const
{
	return Patients.size();
}
int Data_Base::get_specializations_size() const
{
	return specializations.size();	
}
int Data_Base::get_ids_size() const
{
	return all_ids.size();	
}

void Data_Base::remove_doctor(const string& id)
{
	for (int i = 0; i < Doctors.size(); i++) 
	{
		if (Doctors[i].get_national_id() == id) 
		{
			Doctors.erase(Doctors.begin() + i);
			return;
		}
	}
}
void Data_Base::remove_staff(const string& id)
{
	for (int i = 0; i < Staffs.size(); i++)
	{
		if (Staffs[i].get_national_id() == id)
		{
			Staffs.erase(Staffs.begin() + i);
			return;
		}
	}
}
void Data_Base::remove_patient(const string& id)
{
	for (int i = 0; i < Patients.size(); i++)
	{
		if (Patients[i].get_national_id() == id)
		{
			Patients.erase(Patients.begin() + i);

			return;
		}
	}
}
void Data_Base::remove_specialization(const string& specialization)
{
	for (int i = 0; i < specializations.size(); i++)
	{
		if (specializations[i]==specialization)
		{
			specializations.erase(specializations.begin() + i);
			return;
		}
	}
}
void Data_Base::remove_id(const string& id)
{
	for(int i= 0; i < all_ids.size(); i++)
	{
		if (all_ids[i] == id)
		{
			all_ids.erase(all_ids.begin() + i);
			return;
		}
	}
}

void Data_Base::display_doctors() const
{
	for (int i = 0; i < Doctors.size(); i++) 
	{
		cout << "Doctor " << i + 1 << " :" << endl;
		Doctors.at(i).display();
		cout << "------------------------" << endl;
	}
}
void Data_Base::display_staff() const
{
	for (int i = 0; i < Staffs.size(); i++) 
	{
		cout << "Staff " << i + 1 << " :" << endl;
		Staffs.at(i).display();
		cout << "------------------------" << endl;
	}
}
void Data_Base::display_patients() const
{
	for (int i = 0; i < Patients.size(); i++) 
	{
		cout << "Patient " << i + 1 << " :" << endl;
		Patients.at(i).display();
		cout << "------------------------" << endl;
	}
}
void Data_Base::display_specializations() const
{
	for (int i = 0; i < specializations.size(); i++)
	{
		cout << i + 1 << " : " << specializations.at(i) << endl;
	}
}
void Data_Base::display_ids() const
{
	for (int i = 0; i < all_ids.size(); i++) {
		cout << i + 1 << " : " << all_ids.at(i) << endl;
	}
}

Doctor* Data_Base::Find_doctor(const string& id)
{
	for (int i = 0; i < Doctors.size(); i++)
	{
		if (Doctors[i].get_national_id() == id)
		{
			return &Doctors[i];
		}
	}
	return nullptr;
}
Staff* Data_Base::Find_staff(const string& id)
{

	for (int i = 0; i < Staffs.size(); i++)
	{
		if  (Staffs[i].get_national_id() == id)
		{
			return &Staffs[i];
		}
	}
	return nullptr;
}
Patient* Data_Base::Find_patient(const string& id)
{
	for (int i = 0; i < Patients.size(); i++)
	{
		if (Patients[i].get_national_id() == id)
		{
			return &Patients[i];
		}
	}
	return nullptr;
}
string Data_Base::get_specialization(int index)
{
	return specializations.at(index);
}
bool Data_Base::Find_id(const string& id)
{
	for(int i= 0; i < all_ids.size(); i++)
	{
		if (all_ids[i] == id)
		{
			return true;
		}
	}
	return false;
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

void Data_Base::display_doctors_with_their_specialization(const string& specialization) const
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




