#include "Data_manager.h"

void Data_manager::save_doctor(const Doctor& d)
{
	ofstream file(doctors_file, ios::app);
	if(file.is_open())
	{
		file << d.get_national_id() << ','
			<< d.get_name() << ','
			<< d.get_age() << ','
			<< d.get_gender() << ','
			<< d.get_salary() << ','
			<< d.get_access() << ','
			<< d.get_specialization() << ','
			<< d.get_max_patient_number() << ','
			<< d.get_patient_number() << '\n';
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for writing (Doctors): " << endl;
	}
}
void Data_manager::save_staff(const Staff& s)
{
	ofstream file(staffs_file, ios::app);
	if (file.is_open())
	{
		file << s.get_national_id() << ','
			<< s.get_name() << ','
			<< s.get_age() << ','
			<< s.get_gender() << ','
			<< s.get_salary() << ','
			<< s.get_access() << '\n';
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for writing (Staffs): " << endl;
	}
}
void Data_manager::save_patient(const Patient& p)
{
	ofstream file(patients_file, ios::app);
	if (file.is_open())
	{
		file << p.get_national_id() << ','
			<< p.get_name() << ','
			<< p.get_age() << ','
			<< p.get_gender() << '\n';
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for writing (Patients): " << endl;
	}
}
void Data_manager::save_specialization(const string& specialization)
{
	ofstream file(specializations_file, ios::app);
	if (file.is_open())
	{
		file << specialization << '\n';
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for writing (Specializations): " << endl;
	}
}
void Data_manager::save_id(const string& id)
{
	ofstream file(ids_file, ios::app);
	if (file.is_open())
	{
		file << id << '\n';
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for writing (IDs): " << endl;
	}
}

void Data_manager::save_all_doctors(const vector<Doctor>& Doctors_list)
{
	ofstream file(doctors_file, ios::out);
	if (file.is_open()) 
	{
		for (Doctor d : Doctors_list) {
			file << d.get_national_id() << ','
				<< d.get_name() << ','
				<< d.get_age() << ','
				<< d.get_gender() << ','
				<< d.get_salary() << ','
				<< d.get_access() << ','
				<< d.get_specialization() << ','
				<< d.get_max_patient_number() << ','
				<< d.get_patient_number() << '\n';
		}
		file.close();
	}
	else 
	{
		// Handle file opening error
		cout << "Error opening file for writing (Doctors): " << endl;
	}
}
void Data_manager::save_all_staffs(const vector<Staff>& Staffs_list)
{
	ofstream file(staffs_file, ios::out);
	if (file.is_open())
	{
		for (Staff s : Staffs_list) {
			file << s.get_national_id() << ','
				<< s.get_name() << ','
				<< s.get_age() << ','
				<< s.get_gender() << ','
				<< s.get_salary() << ','
				<< s.get_access() << '\n';
		}
		file.close();
	}
	else {
		// Handle file opening error
		cout << "Error opening file for writing (Staffs): " << endl;
	}
}
void Data_manager::save_all_patients(const vector<Patient>& Patients_list)
{
	ofstream file(patients_file, ios::out);
	if (file.is_open())
	{
		for (Patient p : Patients_list) {
			file << p.get_national_id() << ','
				<< p.get_name() << ','
				<< p.get_age() << ','
				<< p.get_gender() << '\n';
		}
		file.close();
	}
	else {
		// Handle file opening error
		cout << "Error opening file for writing (Patients): " << endl;
	}
}
void Data_manager::save_all_specializations(const vector<string>& specializations_list)
{
	ofstream file(specializations_file, ios::out);
	if (file.is_open())
	{
		for (string s : specializations_list) {
			file << s << '\n';
		}
		file.close();
	}
	else {
		// Handle file opening error
		cout << "Error opening file for writing (Specializations): " << endl;
	}
}
void Data_manager::save_all_ids(const vector<string>& ids_list)
{
	ofstream file(ids_file, ios::out);
	if (file.is_open())
	{
		for (string id : ids_list) {
			file << id << '\n';
		}
		file.close();
	}
	else {
		// Handle file opening error
		cout << "Error opening file for writing (IDs): " << endl;
	}
}

void Data_manager::load_doctors(vector<Doctor>& Doctors_list)
{
	string line;
	ifstream file(doctors_file);
	if (file.is_open())
	{
		while (getline(file, line)) 
		{
			stringstream ss(line);
			string id, name, specialization, gender_str, age_str, salary_str, have_access_str,
				max_patient_number_str, patient_number_str;

			int age, max_patient_number, patient_number;
			double salary;
			bool have_access;
			char gender;

			getline(ss, id, ',');
			getline(ss, name, ',');
			getline(ss, age_str, ',');
			getline(ss, gender_str, ',');
			getline(ss, salary_str, ',');
			getline(ss, have_access_str, ',');
			getline(ss, specialization, ',');
			getline(ss, max_patient_number_str, ',');
			getline(ss, patient_number_str, ',');

			age = stoi(age_str);
			max_patient_number = stoi(max_patient_number_str);
			patient_number = stoi(patient_number_str);
			salary = stod(salary_str);
			(have_access_str == "true" || have_access_str == "1") ? have_access = 1 : have_access = 0;
			gender = gender_str[0];
			Doctor d(name,age,id,gender,salary,have_access,specialization,max_patient_number);
			Doctors_list.push_back(d);
		}
		file.close();
	}
	else 
	{
		// Handle file opening error
		cout << "Error opening file for reading (Doctors): " << endl;
	}
}

void Data_manager::load_staffs(vector<Staff>& Staffs_list)
{
	string line;
	ifstream file(staffs_file);
	if (file.is_open()) 
	{
		while (getline(file, line)) 
		{
			stringstream ss(line);
			string id, name, gender_str, age_str, salary_str, have_access_str;

			int age;
			double salary;
			bool have_access;
			char gender;
			getline(ss, id, ',');
			getline(ss, name, ',');
			getline(ss, age_str, ',');
			getline(ss, gender_str, ',');
			getline(ss, salary_str, ',');
			getline(ss, have_access_str, ',');


			age = stoi(age_str);
			salary = stod(salary_str);
			(have_access_str == "true" || have_access_str == "1") ? have_access = 1 : have_access = 0;
			gender = gender_str[0];

			Staff s(name, age, id, gender, salary, have_access);
			Staffs_list.push_back(s);
		}
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for reading (Staffs): " << endl;
	}
}

void Data_manager::load_patients(vector<Patient>& Patients_list)
{
	string line;
	ifstream file(patients_file);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			stringstream ss(line);
			string id, name, gender_str, age_str;

			int age;
			char gender;
			getline(ss, id, ',');
			getline(ss, name, ',');
			getline(ss, age_str, ',');
			getline(ss, gender_str, ',');


			age = stoi(age_str);
			gender = gender_str[0];

			Patient p(name, age, id, gender);
			Patients_list.push_back(p);
		}
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for reading (Patients): " << endl;
	}
}

void Data_manager::load_specializations(vector<string>& specializations_list)
{
	string line;
	ifstream file(specializations_file);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			if (!line.empty())
				specializations_list.push_back(line);
		}
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for reading (Specializations): " << endl;
	}
}

void Data_manager::load_ids(vector<string>& ids_list)
{
	string line;
	ifstream file(ids_file);
	if(file.is_open())
	{
		while (getline(file, line))
		{
			while (getline(file, line))
			{
				if (!line.empty())
					ids_list.push_back(line);
			}
		}
		file.close();
	}
	else
	{
		// Handle file opening error
		cout << "Error opening file for reading (IDs): " << endl;
	}
}
