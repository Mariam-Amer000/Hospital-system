#include <iostream>
#include<Windows.h>
using namespace std;
#include"Hospital.h"
int main()
{
	Hospital h;
	h.load_data();
	int main_chooise;
	do
	{
		system("cls");
		h.main_menu();
		cin >> main_chooise;
		switch (main_chooise)
		{
		case 1: 
		{
			system("cls");
			string national_id;
			cout << "Enter doctor national ID : ";
			cin >> national_id;
			Doctor* d = h.find_doctor(national_id);
			if (d) // if doctor found
			{
				if (d->get_access())  // if doctor has access
				{
					int doctor_chooise;
					do
					{
						system("cls");
						h.Doctor_menu();
						cin >> doctor_chooise;
						switch (doctor_chooise)
						{
						case 1:
						{
							cout << "Doctor information" << endl;
							d->display();
							Sleep(3000);
							break;
						}
						case 2: 
						{
							cout << "Current patients number is : " << d->get_patient_number() << endl;
							Sleep(3000);
							break;
						}
						case 3:
						{
							string patient_id;
							Patient *p;
							cout << "Current Patient information" << endl;
							patient_id = d->get_current_patient_id();
							p = h.find_patient(patient_id);
							p->display();
							Sleep(3000);
						}
						case 0:
							break;
						default:
							break;
						}
					} while (doctor_chooise!=0);
				}
				else // doctor has no access
				{
					cout << "Doctor has no access" << endl;
					Sleep(3000);
				}
			}
			else // no doctor found
			{ 
				cout << "There is no doctor with that id " << endl;
				Sleep(3000);
			}
		break;
		}
		case 2:
		{
			system("cls");
			string national_id;
			cout << "Enter Staff national ID : ";
			cin >> national_id;
			Staff* s = h.find_staff(national_id);
			if(s) // Staff found
			{
				if(s->get_access()) // Staff have access
				{
					int staff_chooise;
					do
					{
						system("cls");
						h.Staff_menu();
						cin >> staff_chooise;
						switch (staff_chooise) 
						{
						case 1:
						{
							h.Doctor_HUB();
							break;
						}
						case 2:
						{
							h.Staff_HUB();
							break;
						}
						case 3:
						{
							h.Patient_HUB();
							break;
						}
						case 0: 
							break;
						default:
							break;
						}
					} while (staff_chooise);
				}
				else // Staff have no access
				{
					cout << "Have no access" << endl;
					Sleep(3000);
				}
			}
			else // Staff not found
			{
				cout << "there is no Staff with that id" << endl;
				Sleep(3000);
			}
			break;
		}
		case 0:
			system("cls");
			cout << "Exiting the program." << endl;
			break;
		default:
			break;
		}
	} while (main_chooise!=0);
}