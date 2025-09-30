#include "Data_manager.h"

void Data_manager::save_doctor(Doctor d, string file_name)
{
	ofstream file(file_name, ios::app);
	if (file.is_open()) 
	{
		file << d.get_national_id() << ","
			<< d.get_name() << "," 
			<< d.get_age() << "," 
			<< d.get_gender() << "," 
			<< d.get_salary() << "," 
			<< d.get_access() << "," 
			<< d.get_specialization() << "," 
			<< d.get_max_patient_number() << "," 
			<< d.get_patient_number() << endl;
	}
	else
	{
		cout << "Error in open file" << endl;
	}
}

void Data_manager::save_staff(Staff s, string file_name)
{
	ofstream file(file_name, ios::app);
	if (file.is_open()) 
	{
		file << s.get_national_id() << ","
			<< s.get_name() << ","
			<< s.get_age() << ","
			<< s.get_gender() << ","
			<< s.get_salary() << ","
			<< s.get_access() << "," << endl;
	}
	else
	{
		cout << "Error in open file" << endl;
	}
}

void Data_manager::save_patient(Patient p, string file_name)
{
	ofstream file(file_name, ios::app);
	if (file.is_open())
	{
		file << p.get_national_id() << ","
			<< p.get_name() << ","
			<< p.get_age() << ","
			<< p.get_gender() << "," << endl;
	}
	else
	{
		cout << "Error in open file" << endl;
	}

}

void Data_manager::save_specialization(string specialization, string file_name)
{
	ofstream file(file_name, ios::app);
	if (file.is_open())
	{
		file << specialization << endl;
	}
	else
	{
		cout << "Error in open file" << endl;
	}
}

void Data_manager::load_doctors(vector<Doctor> &Doctors_list, string file_name)
{
	ifstream file(file_name, ios::in);
	if (file.is_open()) 
	{
		string line;
		while (getline(file, line)) 
		{
			stringstream ss(line);
			string name, national_id, age_str, gender_str, salary_str, access_str,
				   specialization, max_patient_number_str, patient_number_str;

			getline(ss, national_id, ','); //string
			getline(ss, name, ','); //string
			getline(ss, age_str, ','); //int
			getline(ss, gender_str, ','); //char
			getline(ss, salary_str, ',');	//double
			getline(ss, access_str, ',');//bool
			getline(ss, specialization, ','); //string
			getline(ss, max_patient_number_str, ',');//int
			getline(ss, patient_number_str, ',');	//int

			int age = stoi(age_str);
			int max_patient_number = stoi(max_patient_number_str);
			int patient_number = stoi(patient_number_str);
			double salary = stod(salary_str);
			char gender = gender_str[0];
			bool have_access = (access_str == "1" || access_str == "true");
			Doctor d(name, age, national_id, gender, salary, have_access, specialization, max_patient_number);
			d.set_patient_number(patient_number);
			Doctors_list.push_back(d);
		}
	}
	else
	{
		cout << "Error in open file" << endl;
	}
}

void Data_manager::load_staffs(vector<Staff> &Staffs_list, string file_name)
{
	ifstream file(file_name, ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			stringstream ss(line);
			string name, national_id, age_str, gender_str, salary_str, access_str;

			getline(ss, national_id, ','); //string
			getline(ss, name, ','); //string
			getline(ss, age_str, ','); //int
			getline(ss, gender_str, ','); //char
			getline(ss, salary_str, ',');	//double
			getline(ss, access_str, ',');//bool

			int age = stoi(age_str);;
			double salary = stod(salary_str);
			char gender = gender_str[0];
			bool have_access = (access_str == "1" || access_str == "true");
			Staff s(name, age, national_id, gender, salary, have_access);
			Staffs_list.push_back(s);
		}
	}
	else
	{
		cout << "Error in open file" << endl;
	}
}

void Data_manager::load_patients(vector<Patient> &Patients_list, string file_name)
{
	ifstream file(file_name, ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			stringstream ss(line);
			string name, national_id, age_str, gender_str;

			getline(ss, national_id, ','); //string
			getline(ss, name, ','); //string
			getline(ss, age_str, ','); //int
			getline(ss, gender_str, ','); //char

			int age = stoi(age_str);;
			char gender = gender_str[0];
			Patient p(name, age, national_id, gender);
			Patients_list.push_back(p);
		}
	}
	else
	{
		cout << "Error in open file" << endl;
	}
}

void Data_manager::load_specializations(vector<string> &specializations_list, string file_name)
{
	ifstream file(file_name, ios::in);
	if (file.is_open())
	{
		string line;
		while(getline(file,line))
		{
			specializations_list.push_back(line);
		}
	}
	else
	{
		cout << "Error in open file" << endl;
	}
}
