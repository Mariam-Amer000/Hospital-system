#include <iostream>
#include<Windows.h>
#include<string>
using namespace std;
#include"Hospital.h"
int main()
{
	Hospital h;
	h.load_all();
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
							system("cls");
							cout << "Doctor information" << endl;
							d->display();
							Sleep(3000);
							break;
						}
						case 2: 
						{
							system("cls");
							cout << "Current patients number is : " << d->get_patient_number() << endl;
							Sleep(3000);
							break;
						}
						case 3:
						{
							system("cls");
							string patient_id;
							Patient *p;
							cout << "Current Patient information" << endl;
							patient_id = d->get_current_patient_id();
							p = h.find_patient(patient_id);
							p->display();
							Sleep(3000);
							break;
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
						case 1: // Doctor HUB
						{
							int choiseDH;
							do
							{
								system("cls");
								h.Doctor_HUB();
								cout << "Enter your choise : ";
								cin >> choiseDH;
								switch (choiseDH)
								{
									case 1: //add doctor
									{
										system("cls");
										cout << "***** Add Doctor *****" << endl;
										h.add_doctor();
										break;
									}
									case 2: //remvoe doctor
									{
										system("cls");
										cout << "***** Remove Doctor *****" << endl;
										h.remove_doctor();
										break;
									}
									case 3: //update doctor
									{
										system("cls");
										cout << "***** Update Doctor *****" << endl;
										h.update_Doctor();
										break;
									}
									case 4:  //find doctor
									{
										system("cls");
										cout << "***** Find Doctor *****" << endl;
										string national_id;
										cin >> national_id;
										Doctor* d = h.find_doctor(national_id);
										if (d)d->display();
										else cout << "there is no doctor with that id" << endl;
										break;
									}
									case 5: // show all doctors
									{
										system("cls");
										cout << "***** ALL Doctors` *****" << endl;
										h.show_all_doctors();
										cout << "\nPress Enter to go back...";
										cin.ignore();
										cin.get();
										break;
									}
									case 0: 
									default :
										break;
								}
							} while (choiseDH != 0);
							
							break;
						}
						case 2:// Staff HUB
						{
							int choiseSH;
							do
							{
								system("cls");
								h.Staff_HUB();	
								cin >> choiseSH;
								switch (choiseSH)
								{
									case 1: // add staff
									{
										system("cls");
										cout << "***** Add Staff *****" << endl;
										h.add_staff();
										break;
									}
									case 2: // remove staff
									{
										system("cls");
										cout << "***** Remove Staff *****" << endl;          
										h.remove_staff();
										break;
									}
									case 3: // update staff
									{
										system("cls");
										cout << "***** Update Staff *****" << endl;
										h.update_Staff();
										break;
									}
									case 4: // find staff
									{
										system("cls");
										cout << "***** Find Staff *****" << endl;
										string national_id;
										cin >> national_id;
										Staff* s = h.find_staff(national_id);
										if (s)s->display();
										else cout << "there is no Staff with that id" << endl;
										break;
									}
									case 5: // show all staff
									{
										system("cls");
										cout << "***** ALL Staff` *****" << endl;
										h.show_all_staff();
										cout << "\nPress Enter to go back...";
										cin.ignore();
										cin.get();
										break;
									}
									case 0:
									default:
										break;
								}
							} while (choiseSH!=0);
							break;
						}
						case 3:
						{
							int choisePH;
							do
							{
								system("cls");
								h.Patient_HUB();
								cin >> choisePH;
								switch (choisePH) 
								{
									case 1: // add patient
									{
										system("cls");
										cout << "***** Add Patient *****" << endl;
										h.add_patient();
										break;
									}
									case 2: // remove patient
									{
										system("cls");
										cout << "***** Remove Patient *****" << endl;
										h.remove_patient();
										break;
									}
									case 3: // update patient
									{
										system("cls");
										cout << "***** Update Patient *****" << endl;
										h.update_Patient();
										break;
									}
									case 4: // find patient
									{
										system("cls");
										cout << "***** Find Patient *****" << endl;
										string national_id;
										cin >> national_id;
										Patient* p = h.find_patient(national_id);
										if (p)p->display();
										else cout << "there is no Patient with that id" << endl;
										break;
									}
									case 5: // show all patient
									{
										system("cls");
										cout << "***** ALL Patients` *****" << endl;
										h.show_all_patient();
										cout << "\nPress Enter to go back...";
										cin.ignore();
										cin.get();
										break;
									}
									case 0:
								default:
									break;
								}
							} while (choisePH);
							break;
						}
						case 4:
						{
							int chooise_SH;
							do
							{
								system("cls");
								h.Specialization_HUB();
								cin >> chooise_SH;
								switch (chooise_SH) 
								{
									case 1: // add specialization
									{
										system("cls");
										cout << "***** Add Specialization *****" << endl;
										h.add_specialization();
										break;
									}
									case 2: // remove specialization
									{
										system("cls");
										cout << "***** Remove Specialization *****" << endl;
										h.remove_specialization();
										break;
									}
									case 3: // update specialization
									{
										system("cls");
										cout << "***** Update Specialization *****" << endl;
										h.update_Specialization();
										break;
									}
									case 4: // show all specialization
									{
										system("cls");
										cout << "***** ALL Specializations` *****" << endl;
										h.show_all_specialization();
										cout << "\nPress Enter to go back...";
										cin.ignore();
										cin.get();   
										break;
									}
									case 0:
									default:
									break;
								}
							} while (chooise_SH!=0);
							
							break;
						}
						case 0: 
							break;
						default:
							break;
						}
					} while (staff_chooise != 0);
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