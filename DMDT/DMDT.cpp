#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<iostream>
#include<fstream>
#include<Windows.h>
#include<direct.h>// <doc.h>
#include<cctype>
#include<sstream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include<stdio.h>
#include <chrono>

#define KEY_ESC 27
#define KEY_LEFT 75
#define KEY_BACKSPACE 8
#define KEY_ENTER 13
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define BOLDRED     "\033[1m\033[31m" 
#define BOLDGREEN   "\033[1m\033[32m"

using namespace std;

void tuitioncentremenu();

struct Tutor
{
	int TutorID;
	string Name;
	string Address;
	string Phone;
	string DateJoined;
	string DateTerminated;
	double HourlyRate;
	double Rating;
	string TuitionCentreCode;
	string TuitionCentreName;
	string SubjectName;
	string SubjectCode;
};
struct Admin
{
	string AdminID;
	string adminpassword;
};

// array size
int tutor_arr_size = 10;
int admin_arr_size = 2;
// cre array
Tutor* t = new Tutor[tutor_arr_size];
Admin* a = new Admin[admin_arr_size];

class TuitionCenterfunction
{
private:
	int user_type;
public:

	void insertdata()
	{
		t[0].TutorID = 1;
		t[0].Name = "Tan";
		t[0].Address = "KL";
		t[0].Phone = "0128833464";
		t[0].DateJoined = "16/04/2021";
		t[0].DateTerminated = "";
		t[0].HourlyRate = 40;
		t[0].Rating = 3.0;
		t[0].TuitionCentreCode = "C01";
		t[0].TuitionCentreName = "KL Centre";
		t[0].SubjectCode = "S01";
		t[0].SubjectName = "Physics";

		t[1].TutorID = 2;
		t[1].Name = "Lee";
		t[1].Address = "Selangor";
		t[1].Phone = "0127788321";
		t[1].DateJoined = "20/05/2021";
		t[1].DateTerminated = "";
		t[1].HourlyRate = 40;
		t[1].Rating = 3.0;
		t[1].TuitionCentreCode = "C02";
		t[1].TuitionCentreName = "Cheras Centre";
		t[1].SubjectCode = "S01";
		t[1].SubjectName = "Physics";

		t[2].TutorID = 3;
		t[2].Name = "Chin";
		t[2].Address = "Cheras";
		t[2].Phone = "0120033846";
		t[2].DateJoined = "15/06/2021";
		t[2].DateTerminated = "";
		t[2].HourlyRate = 48;
		t[2].Rating = 3.0;
		t[2].TuitionCentreCode = "C01";
		t[2].TuitionCentreName = "KL Centre";
		t[2].SubjectCode = "S02";
		t[2].SubjectName = "Chemistry";

		t[3].TutorID = 4;
		t[3].Name = "John";
		t[3].Address = "Kajang";
		t[3].Phone = "0167788354";
		t[3].DateJoined = "30/06/2021";
		t[3].DateTerminated = "";
		t[3].HourlyRate = 48;
		t[3].Rating = 3.0;
		t[3].TuitionCentreCode = "C02";
		t[3].TuitionCentreName = "Cheras Centre";
		t[3].SubjectCode = "S02";
		t[3].SubjectName = "Chemistry";

		t[4].TutorID = 5;
		t[4].Name = "Kloas";
		t[4].Address = "Sri Petaling";
		t[4].Phone = "0167744536";
		t[4].DateJoined = "23/07/2021";
		t[4].DateTerminated = "";
		t[4].HourlyRate = 52;
		t[4].Rating = 1.0;
		t[4].TuitionCentreCode = "C01";
		t[4].TuitionCentreName = "KL Centre";
		t[4].SubjectCode = "S03";
		t[4].SubjectName = "Math";

		t[5].TutorID = 6;
		t[5].Name = "Steven";
		t[5].Address = "Cheras";
		t[5].Phone = "01194836732";
		t[5].DateJoined = "30/07/2021";
		t[5].DateTerminated = "";
		t[5].HourlyRate = 52;
		t[5].Rating = 5.0;
		t[5].TuitionCentreCode = "C02";
		t[5].TuitionCentreName = "Cheras Centre";
		t[5].SubjectCode = "S03";
		t[5].SubjectName = "Math";

		t[6].TutorID = 7;
		t[6].Name = "Luis";
		t[6].Address = "KL";
		t[6].Phone = "0115533748";
		t[6].DateJoined = "24/08/2021";
		t[6].DateTerminated = "";
		t[6].HourlyRate = 56;
		t[6].Rating = 4.0;
		t[6].TuitionCentreCode = "C01";
		t[6].TuitionCentreName = "KL Centre";
		t[6].SubjectCode = "S04";
		t[6].SubjectName = "English";

		t[7].TutorID = 8;
		t[7].Name = "Reacheal";
		t[7].Address = "Cheras";
		t[7].Phone = "0123344548";
		t[7].DateJoined = "22/03/2021";
		t[7].DateTerminated = "22/07/2021";
		t[7].HourlyRate = 56;
		t[7].Rating = 4.0;
		t[7].TuitionCentreCode = "C02";
		t[7].TuitionCentreName = "Cheras Centre";
		t[7].SubjectCode = "S04";
		t[7].SubjectName = "English";

		t[8].TutorID = 9;
		t[8].Name = "Mike";
		t[8].Address = "KL";
		t[8].Phone = "0119944837";
		t[8].DateJoined = "23/01/2022";
		t[8].DateTerminated = "";
		t[8].HourlyRate = 52;
		t[8].Rating = 4.0;
		t[8].TuitionCentreCode = "C01";
		t[8].TuitionCentreName = "KL Centre";
		t[8].SubjectCode = "S03";
		t[8].SubjectName = "Math";

		t[9].TutorID = 10;
		t[9].Name = "Ji-Eun";
		t[9].Address = "Cheras";
		t[9].Phone = "0128833425";
		t[9].DateJoined = "16/05/2022";
		t[9].DateTerminated = "";
		t[9].HourlyRate = 76;
		t[9].Rating = 5.0;
		t[9].TuitionCentreCode = "C01";
		t[9].TuitionCentreName = "KL Centre";
		t[9].SubjectCode = "S05";
		t[9].SubjectName = "Korean Language";

		//To be added during presentation
		//t[10].TutorID = 11;
		//t[10].Name = "Jordan";
		//t[10].Address = "Cheras";
		//t[10].Phone = "0128833425";
		//t[10].DateJoined = "16/05/2022";
		//t[10].DateTerminated = "";
		//t[10].HourlyRate = 76;
		//t[10].Rating = 2.0;
		//t[9].TuitionCentreCode = "C01";
		//t[9].TuitionCentreName = "KL Centre";
		//t[9].SubjectCode = "S05";
		//t[9].SubjectName = "Korean Language";

		// AdminID;
		a[0].AdminID = "admin";
		a[0].adminpassword = "admin";

		a[1].AdminID = "hr";
		a[1].adminpassword = "hr";
	}
	// Values Validation functions
	bool id_validation(int id, int tsize) {

		for (int i = 0; i < tsize; i++)
		{
			if (t[i].TutorID == id) {
				return true;
			}
		}
		return false;
	}

	bool rating_validation(double rating, int tutorSize) {

		for (int i = 0; i < tutorSize; i++)
		{
			if (t[i].Rating == rating) {
				return true;
			}
		}
		return false;
	}

	// Display functions
	void display_all_tutor(struct Tutor*& t, int size)
	{

		system("cls");

		int tutorid;
		string cname;
		string sname;

	searchtutorID:

		bool validID = false;
		cout << "\n\n\n\t\t\t\t\t\t List of Tutor: \n\n\n";
		cout << "\t\t\t\t\t ID" << setw(27) << "Name ";
		cout << endl;

		//display tutor details
		for (int i = 0; i < size; i++) {
			cout << "\n\t\t\t\t\t" << t[i].TutorID << setw(25) << t[i].Name;
		}

		cout << "\n\n For More Tutor's Detials ? ";
		cout << "\n\n Please Insert Selected Tutor ID : ";

		// Esc Key to Menu
		bool Esc = false;
		char key = _getch();
		if (key == KEY_ESC) {
			tuitioncentremenu();
		}

		// validate input
		if (!(cin >> tutorid))
		{
			cout << "Wrong Input !!!!" << endl << "Only Tutor ID Allowed" << endl;
			system("pause");
			cin.clear();
			cin.ignore(100, '\n');
			system("cls");

			goto searchtutorID;
		}

		validID = id_validation(tutorid, tutor_arr_size);

		if (validID)
		{
			for (int i = 0; i < size; i++)
			{
				if (t[i].TutorID == tutorid)
				{
					system("cls");
					cout << "\n\n\n\t\t\t\t\t\t  Tutor Detials\n\n\n" << endl;
					cout << "\t\t\t\tTutor ID \t\t:\t\t" << t[i].TutorID << endl;
					cout << "\t\t\t\tTutor Name \t\t:\t\t" << t[i].Name << endl;
					cout << "\t\t\t\tTutor Address \t\t:\t\t" << t[i].Address << endl;
					cout << "\t\t\t\tTutor Phone Number \t:\t\t" << t[i].Phone << endl;
					cout << "\t\t\t\tDate Joined \t\t:\t\t" << t[i].DateJoined << endl;
					cout << "\t\t\t\tDate Terminated \t:\t\t" << t[i].DateTerminated << endl;
					cout << "\t\t\t\tHourly Rate \t\t:\t\t" << t[i].HourlyRate << endl;
					cout << "\t\t\t\tRating \t\t\t:\t\t" << t[i].Rating << endl;
					cout << "\t\t\t\tTuition Centre Code \t:\t\t" << t[i].TuitionCentreCode << endl;
					cout << "\t\t\t\tTuition Centre Name \t:\t\t" << t[i].TuitionCentreName << endl;
					cout << "\t\t\t\tSubject Code \t\t:\t\t" << t[i].SubjectCode << endl;
					cout << "\t\t\t\tSubject Name \t\t:\t\t" << t[i].SubjectName << endl << endl;
					break;
				}

			}
		}
		else
		{
			cout << BOLDRED << "Invalid Tutor ID" << endl << "Please Try Again....." << RESET << endl;
			system("pause");
			system("cls");
			goto searchtutorID;
		}

		cout << "Previous Page - LEFT KEY & BACKSPACE" << endl << "Main Page - ESC KEY" << endl;
		while (!Esc)
		{
			switch (_getch())
			{
			case KEY_LEFT:
				system("cls");
				goto searchtutorID;
				break;

			case KEY_BACKSPACE:
				system("cls");
				goto searchtutorID;
				break;

			case KEY_ESC:
				system("CLS");
				tuitioncentremenu();
				break;
			}
		}
		return;
	}

	string get_currentdate() {
		const int MAXLEN = 80;
		char s[MAXLEN];
		time_t t = time(0);
		strftime(s, MAXLEN, "%d/%m/%Y", localtime(&t));
		string ss;
		ss = (string)s;
		return ss;
	}

	int id_genrator() {
		int count = 0;
		for (int i = 0; i < tutor_arr_size; i++)
		{
			count++;

			if (count == t[i].TutorID)
			{
				count++;
			}
		}
		return count;
	}

	void display_sorteddata(struct Tutor*& t, int size, int choice) {

		string sname;
		string cname;

		cout << "\n" << setw(5) << "Tutor ID" << setw(15) << "Tutor Name" << setw(15) << "Address"
			<< setw(20) << "Phone Number" << setw(20) << "Date Joined" << setw(20) << "Date Terminate"
			<< setw(18) << "Hourly Rate" << setw(13) << "Rating" << setw(23) << "Tuition Centre Code"
			<< setw(23) << "Tuition Centre Name" << setw(15) << "Subject Code" << setw(16) << "Subject Name" << endl;

		for (int i = 0; i < size; ++i) {

			cout << setw(5) << t[i].TutorID << setw(15) << t[i].Name << setw(15) << t[i].Address
				<< setw(22) << t[i].Phone << setw(20) << t[i].DateJoined << setw(20) << t[i].DateTerminated
				<< setw(15) << t[i].HourlyRate << setw(15) << t[i].Rating << setw(18) << t[i].TuitionCentreCode
				<< setw(26) << t[i].TuitionCentreName << setw(15) << t[i].SubjectCode << setw(18) << t[i].SubjectName << endl;
		}
	}

	//Add New TUTOR
	void add_tutor(struct Tutor*& t, int size)
	{
		system("cls");

		Tutor* tutor_arr = new Tutor[size + 1];

		for (int i = 0; i < size; i++)
		{
			tutor_arr[i] = t[i];
		}

		string Name, Address, Phone, DateJoined, DateTerminated, TuitionCentreCode, TuitionCentreName, SubjectCode, SubjectName;
		double HourlyRate;
		double Rating;

		cout << "\n\n\n\t\t\t\t\t    ********* Add New Tutor **********\n\n\n\n\n";

		//TUTOR ID
		tutor_arr[size].TutorID = id_genrator();
		cout << "\t\t\t\tTutor ID\t\t:\t\t\t" << tutor_arr[size].TutorID << endl;

		//TUTOR Name
		cin.ignore();
		cout << "\t\t\t\tTutor Name\t\t:\t\t\t";
		getline(cin, Name);
		tutor_arr[size].Name = Name;

		//TUTOR Address
		cout << "\t\t\t\tAddress\t\t\t:\t\t\t";
		getline(cin, Address);
		tutor_arr[size].Address = Address;

		//TUTOR Phone Number
		bool PhoneValidation = false;
		bool Validation;
		do {

			do
			{
				cout << "\t\t\t\tPhone Number\t\t:\t\t\t";
				getline(cin, Phone);

				char integer[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
				int pn = 0; // determine number of verified charcters.
				Validation = true;
				for (int p = 0; p < Phone.size(); p++)
				{
					for (int n = 0; n <= 9; n++)
					{
						if (Phone[p] == integer[n])
						{
							pn++;
						}
					}
				}
				if (pn != Phone.size())
				{
					cout << BOLDRED << "\t\t\t\tError !!!!!  Only Numerical Characters Can Be Entered!" << RESET << endl;
					PhoneValidation = false;
					Validation = false;
				}
				else
				{
					Validation = true;
				}
			} while (Validation != true);

			for (int i = 0; i < Phone.length(); i++)
			{
				if (Phone.length() >= 8 && Phone.length() <= 10)
				{
					PhoneValidation = true;
					tutor_arr[size].Phone = Phone;
				}
				else
				{
					PhoneValidation = false;
					cout << BOLDRED << "\t\t\t\tInvalid Phone Number Format!!" << RESET << endl;
					cout << BOLDRED << "\t\t\t\tMinimum 8 digit and Maximum 10!!" << RESET << endl;
					cout << BOLDRED << "\t\t\t\tPlease Try Again!!" << RESET << endl;
					break;
				}
			}

		} while (PhoneValidation == false);


		//TUTOR Rating
		tutor_arr[size].Rating = 0.0;
		cout << "\t\t\t\tRating\t\t\t:\t\t\t" << tutor_arr[size].Rating << endl;

		//TUTOR Date Joined
		tutor_arr[size].DateJoined = get_currentdate();
		cout << "\t\t\t\tDate Joined\t\t:\t\t\t" << tutor_arr[size].DateJoined << endl;

		//TUTOR Date Terminated
		tutor_arr[size].DateTerminated = "";
		cout << "\t\t\t\tDate Terminated\t\t:\t\t\t" << tutor_arr[size].DateTerminated << endl;

		//TUTOR Tuition Centre
	TuitionCentre:

		cout << "\t\t\t\tEnter the tutor centre code" << endl;
		cout << "\t\t\t\t" << "C01" << " -- " << "KL Centre" << endl;
		cout << "\t\t\t\t" << "C02" << " -- " << "Cheras Centre" << endl;
		cout << "\t\t\t\t";
		cin >> TuitionCentreCode;

		if (TuitionCentreCode != "C01" && TuitionCentreCode != "C02")
		{
			cout << BOLDRED << "\t\t\t\tError !!!! Insert Tuition Centre Code is Not Found." << endl << "\t\t\t\tPlease Try Again..." << RESET << endl;
			goto TuitionCentre;
		}

		if (TuitionCentreCode == "C01")
		{
			tutor_arr[size].TuitionCentreCode = TuitionCentreCode;
			tutor_arr[size].TuitionCentreName = "KL Centre";
			goto TuitionSubject;
		}
		else if (TuitionCentreCode == "C02")
		{
			tutor_arr[size].TuitionCentreCode = TuitionCentreCode;
			tutor_arr[size].TuitionCentreName = "Cheras Centre";
			goto TuitionSubject;
		}

		//TUTOR Subject
	TuitionSubject:

		cout << "\t\t\t\tEnter Tutor Subject Code " << endl;
		cout << "\t\t\t\t" << "S01" << " -- " << "Physics" << endl;
		cout << "\t\t\t\t" << "S02" << " -- " << "Chemistry" << endl;
		cout << "\t\t\t\t" << "S03" << " -- " << "Math" << endl;
		cout << "\t\t\t\t" << "S04" << " -- " << "English" << endl;
		cout << "\t\t\t\t" << "S05" << " -- " << "Korean Language" << endl;
		cout << "\t\t\t\t";
		cin >> SubjectCode;
		if (SubjectCode != "S01" && SubjectCode != "S02" && SubjectCode != "S03" && SubjectCode != "S04" && SubjectCode != "S05") {
			cout << BOLDRED << "\t\t\t\tError !!!! Insert Tuition Centre Code is Not Found." << endl << "\t\t\t\tPlease Try Again..." << RESET << endl;
			goto TuitionSubject;
		}

		if (SubjectCode == "S01")
		{
			tutor_arr[size].SubjectCode = SubjectCode;
			tutor_arr[size].SubjectName = "Physics";
		}
		else if (SubjectCode == "S02")
		{
			tutor_arr[size].SubjectCode = SubjectCode;
			tutor_arr[size].SubjectName = "Chemistry";
		}
		else if (SubjectCode == "S03")
		{
			tutor_arr[size].SubjectCode = SubjectCode;
			tutor_arr[size].SubjectName = "Math";
		}
		else if (SubjectCode == "S04")
		{
			tutor_arr[size].SubjectCode = SubjectCode;
			tutor_arr[size].SubjectName = "English";
		}
		else if (SubjectCode == "S05")
		{
			tutor_arr[size].SubjectCode = SubjectCode;
			tutor_arr[size].SubjectName = "Korean Language";
		}


		if (SubjectCode == "S01")
		{
			HourlyRate = 40;
		}
		else if (SubjectCode == "S02")
		{
			HourlyRate = 48;
		}
		else if (SubjectCode == "S03")
		{
			HourlyRate = 52;
		}
		else if (SubjectCode == "S04")
		{
			HourlyRate = 56;
		}
		else if (SubjectCode == "S05")
		{
			HourlyRate = 76;
		}
		cout << "\t\t\t\tHourly Rate\t\t:\t\t\t" << HourlyRate << endl;
		tutor_arr[size].HourlyRate = HourlyRate;
		system("pause");

		auto started = chrono::high_resolution_clock::now();
		//PASS DATA FROM NEW ARRAY TO ORIGINAL ARRAY.
		t = tutor_arr;

		//UPDATE TUTOR SIZE
		tutor_arr_size = tutor_arr_size + 1;
		auto done = chrono::high_resolution_clock::now();

		system("cls");
		cout << endl << "USED TIME : " << chrono::duration_cast<chrono::nanoseconds>(done - started).count() << " nanoseconds" << endl;
		cout << endl << BOLDGREEN << "\n\n\n\n\n\n\t\t\t\t\tNew Tutor Added Succesfully." << RESET << endl;

		cout << endl << endl << "Press Esc Button to Go Back to Main Page. " << endl;

		system("pause");
		tuitioncentremenu();
		return;
	}

	//Seacrh TUTOR
	void search_tutor(struct Tutor*& t, int size) {

		bool Esc = false;
		bool loopback = true;
		string sname;
		string cname;
		boolean verifyID = false;
		boolean verifyRating = false;
		while (loopback != false)
		{
			system("CLS");
			cout << "\n\n\n\t\t\t\t*********Search Function Menu**********\n\n\n\n\n";

			char searchOption;

			cout << "1. Search by Tutor ID" << endl;
			cout << "2. Search by Tutor Overall Performance" << endl;
			char key = _getch();
			if (key == KEY_ESC) {
				tuitioncentremenu();
			}

			cout << "";
			cin >> searchOption;

			if (searchOption == '1')
			{
			searchTutorId:
				//search based on ID 
				int leftID, rightID, midID;

				system("CLS");
				cout << "\n\n\n\t\t\t\t\t     *********Search by Tutor ID**********\n\n\n\n\n";

				// DEFINE BOUNDARIES FOR BINARY SEARCH
				leftID = 0;
				rightID = tutor_arr_size - 1;
				midID = (leftID + rightID) / 2;

				int id;

				//receive user ID 
				bool reloadUserInputID = false;

				do
				{
					cout << "\t\t\t\t\t\t ID" << setw(27) << "Name ";
					cout << endl;

					for (int i = 0; i < size; i++) {
						cout << "\n\t\t\t\t\t\t" << t[i].TutorID << setw(25) << t[i].Name;
					}

					cout << endl << "Enter the tutor ID: ";

					//ESCAPE KEY FOR USER TO ESCAPE
					char key = _getch();
					if (key == KEY_ESC) {
						search_tutor(t, tutor_arr_size);
					}

					if (!(cin >> id)) {
						cout << BOLDRED << "Wrong Input !!!!" << endl << "Only Tutor ID Allowed" << RESET << endl;
						system("pause");
						cin.clear();
						cin.ignore(100, '\n');
						system("cls");
						goto searchTutorId;

					}
					else {

						verifyID = id_validation(id, tutor_arr_size);

						if (verifyID == false) {
							cout << BOLDRED << "Invalid Tutor ID" << endl << "Please Try Again....." << RESET << endl;
							system("pause");
							cin.clear();
							cin.ignore(100, '\n');
							system("cls");
							goto searchTutorId;
						}
					}
					system("cls");

					auto started = chrono::high_resolution_clock::now();
					bool repeatBinarySearch = false;
					//if element is smaller than mid, ,then it can only be present in left subarray
					//loop for repeatBinarySearch
					do
					{
						if (id == t[midID].TutorID) {// complete binary search 

							reloadUserInputID = false;
							repeatBinarySearch = false;

							cout << "\n\n\n\t\t\t\t\t\t  Tutor Detials\n\n\n" << endl;
							cout << "\t\t\t\tTutor ID \t\t:\t\t" << t[midID].TutorID << endl;
							cout << "\t\t\t\tTutor Name \t\t:\t\t" << t[midID].Name << endl;
							cout << "\t\t\t\tTutor Address \t\t:\t\t" << t[midID].Address << endl;
							cout << "\t\t\t\tTutor Phone Number \t:\t\t" << t[midID].Phone << endl;
							cout << "\t\t\t\tDate Joined \t\t:\t\t" << t[midID].DateJoined << endl;
							cout << "\t\t\t\tDate Terminated \t:\t\t" << t[midID].DateTerminated << endl;
							cout << "\t\t\t\tHourly Rate \t\t:\t\t" << t[midID].HourlyRate << endl;
							cout << "\t\t\t\tRating \t\t\t:\t\t" << t[midID].Rating << endl;
							cout << "\t\t\t\tTuition Centre Code \t:\t\t" << t[midID].TuitionCentreCode << endl;
							cout << "\t\t\t\tTuition Centre Name \t:\t\t" << t[midID].TuitionCentreName << endl;
							cout << "\t\t\t\tSubject Code \t\t:\t\t" << t[midID].SubjectCode << endl;
							cout << "\t\t\t\tSubject Name \t\t:\t\t" << t[midID].SubjectName << endl << endl;

							auto done = chrono::high_resolution_clock::now();
							cout << endl << "USED TIME : " << chrono::duration_cast<chrono::microseconds>(done - started).count() << " microseconds" << endl;

						}
						else if (id > t[midID].TutorID && id <= t[rightID].TutorID) { // search from second half, ignore left half

							leftID = midID + 1;
							midID = (leftID + rightID) / 2;

							repeatBinarySearch = true;
							reloadUserInputID = false;

						}
						else if (id < t[midID].TutorID && id >= 0) { // search from first half, ignore second half

							rightID = midID - 1;
							midID = (rightID + leftID) / 2;

							repeatBinarySearch = true;
							reloadUserInputID = false;
						}
						else {

							cout << "out of array size" << endl;
							reloadUserInputID = true;
							repeatBinarySearch == true;
						}
					} while (repeatBinarySearch == true);
				} while (reloadUserInputID == true);
				loopback = false;

				cout << "Previous Page - LEFT KEY & BACKSPACE" << endl << "SEARCH MENU - ESC KEY" << endl;
				while (!Esc)
				{
					switch (_getch())
					{
					case KEY_LEFT:
						system("cls");
						goto searchTutorId;
						break;

					case KEY_BACKSPACE:
						system("cls");
						goto searchTutorId;
						break;

					case KEY_ESC:
						system("CLS");
						cout << "esc key";
						Esc = true;
						search_tutor(t, tutor_arr_size);
						break;
					}
				}

			}
			else if (searchOption == '2') { // search based on Rating 

			searchbyrating:
				//search based on Performances 
				system("CLS");
				cout << "\n\n\n\t\t\t*********Search Tutor By Overall Performance**********\n\n\n\n\n";

				// actual data
				double l, r, m;
				//DEFINE SEARCH RATING BOUNDARIES
				l = 0.0;
				r = 5.0;
				m = l + (r - 1) / 2;


				double tutorrating;
				//receive user rating 
				bool reloadRatingInput = false;
				do
				{
					cout << "Enter Tutor Rating (in format X.X): ";

					char key = _getch();
					if (key == KEY_ESC) {
						search_tutor(t, tutor_arr_size);
					}

					if (!(cin >> tutorrating)) {

						cout << BOLDRED << "Wrong Input !!!!" << endl << "Wrong Rating Format!!!" << endl << "Only Integer Allowed!!!" << RESET << endl;
						system("pause");
						cin.clear();
						cin.ignore(100, '\n');
						system("cls");
						goto searchbyrating;

					}
					else
					{
						if (tutorrating < 5.0)
						{
							verifyRating = rating_validation(tutorrating, tutor_arr_size);


							if (verifyRating == false) {
								cout << BOLDRED << "Invalid Rating Value" << endl << "Please Try Again....." << RESET << endl;
								system("pause");
								cin.clear();
								cin.ignore(100, '\n');
								system("cls");
								goto searchbyrating;
							}
						}
					}
					auto started = chrono::high_resolution_clock::now();
					bool repeatBinarySearch = false;
					//if element is smaller than mid, ,then it can only be present in left subarray
					//loop for repeatBinarySearch
					do
					{
						if (tutorrating == m) {// complete binary search 
							r = tutorrating;
							reloadRatingInput = false;
							repeatBinarySearch = false;

							cout << "\n\n\n\t\t\t********* Tutor Detials of Rating -- " << tutorrating << " **********\n\n\n\n\n";

							cout << "\n" << setw(5) << "Tutor ID" << setw(15) << "Tutor Name" << setw(15) << "Address" << setw(20) << "Phone Number" << setw(20) << "Date Joined" << setw(20) << "Date Terminate" << setw(18) << "Hourly Rate"
								<< setw(13) << "Rating" << setw(23) << "Tuition Centre Code" << setw(23) << "Tuition Centre Name" << setw(15) << "Subject Code" << setw(16) << "Subject Name" << endl;
							for (int i = 0; i < (tutor_arr_size); i++)
							{

								if (t[i].Rating == tutorrating) {
									cout << setw(5) << t[i].TutorID << setw(15) << t[i].Name << setw(15) << t[i].Address << setw(22) << t[i].Phone << setw(20) << t[i].DateJoined << setw(20) << t[i].DateTerminated << setw(15) << t[i].HourlyRate
										<< setw(15) << t[i].Rating << setw(18) << t[i].TuitionCentreCode << setw(26) << t[i].TuitionCentreName << setw(15) << t[i].SubjectCode << setw(18) << t[i].SubjectName << endl;

								}
							}

						}
						else if (tutorrating > m && tutorrating <= 5.0) { // search from second half, ignore right half
							l = r + 1;
							m = (l + r) / 2;

							repeatBinarySearch = true;
							reloadRatingInput = false;

						}
						else if (tutorrating < m && tutorrating >= 0.0) { // search from first half, ignore left half
							r = r - 1;
							m = (r + l) / 2;

							repeatBinarySearch = true;
							reloadRatingInput = false;
						}
						else {
							//similan dou bu shi
							cout << "The Rating Value You Insert is Larger Than 5.0" << endl << BOLDRED << "MAXIMUM RATING IS 5.0" << RESET << endl;
							reloadRatingInput = true;
							repeatBinarySearch == true;
							system("pause");
							system("cls");
							cout << "\n\n\n\t\t\t*********Search Tutor By Overall Performance**********\n\n\n\n\n";
						}
					} while (repeatBinarySearch == true);
					auto done = chrono::high_resolution_clock::now();
					cout << endl << "USED TIME : " << chrono::duration_cast<chrono::microseconds>(done - started).count() << " microseconds" << endl;
				} while (reloadRatingInput == true);

				loopback = false;

				cout << "Previous Page - LEFT KEY & BACKSPACE" << endl << "SEARCH MENU - ESC KEY" << endl;
				while (!Esc)
				{
					switch (_getch())
					{
					case KEY_LEFT:
						system("cls");
						goto searchbyrating;
						break;

					case KEY_BACKSPACE:
						system("cls");
						goto searchbyrating;
						break;

					case KEY_ESC:
						system("CLS");
						cout << "esc key";
						search_tutor(t, tutor_arr_size);
						break;
					}
				}

			}
			else {

				loopback = true;
				cout << loopback << endl;
				cout << "\t\t\t\twrong input, reload !" << endl;
			}



		}


		system("pause");
		tuitioncentremenu();
		return;
	}

	//Sort TUTOR
	void sort_tutor(struct Tutor*& t, int size) {

		system("cls");
		cout << "\n\n\n\t\t\t*********Sorting Menu**********\n\n\n\n\n";
		int choice;
		bool correctChoice = false;
		bool Esc = false;

		do
		{
			cout << "Ascending" << endl;
			cout << "1. Sort Tutor by ID  " << endl;
			cout << "2. Sort Tutor by Hourly Rate  " << endl;
			cout << "3. Sort Tutor by Rating  " << endl << endl;

			cout << "Descending" << endl;
			cout << "4. Sort Tutor by ID  " << endl;
			cout << "5. Sort Tutor by Hourly Rate  " << endl;
			cout << "6. Sort Tutor by Rating  " << endl;


			char key = _getch();
			if (key == KEY_ESC) {
				return;
			}

			cin >> choice;

			if (choice >= 1 && choice <= 6)
				switch (choice)
				{

				case 1://SORT BY ID (Ascending)
				{
					correctChoice = true;
					system("CLS");
					cout << "\n\n\n\t\t\t*********Sorting Tutor By ID (Ascending)**********\n\n\n\n\n";
					auto started = chrono::high_resolution_clock::now();
					insertion_sort(t, size, choice);
					auto done = chrono::high_resolution_clock::now();
					display_sorteddata(t, size, choice);
					cout << endl << "USED TIME : " << chrono::duration_cast<chrono::microseconds>(done - started).count() << " microseconds" << endl;
					break;
				}
				case 2: // SORT BY HOURLY PAY (Ascending)
				{
					correctChoice = true;
					system("CLS");
					cout << "\n\n\n\t\t\t*********Sorting Tutor By Hourly Rate (Ascending)**********\n\n\n\n\n";
					auto started = chrono::high_resolution_clock::now();
					insertion_sort(t, size, choice);
					auto done = chrono::high_resolution_clock::now();
					display_sorteddata(t, size, choice);
					cout << endl << "USED TIME : " << chrono::duration_cast<chrono::microseconds>(done - started).count() << " microseconds" << endl;
					break;
				}
				case 3: // SORT BY RATING (Ascending)
					correctChoice = true;
					system("CLS");
					cout << "\n\n\n\t\t\t*********Sorting Tutor By Rating (Ascending)**********\n\n\n\n\n";
					auto started = chrono::high_resolution_clock::now();
					insertion_sort(t, size, choice);
					auto done = chrono::high_resolution_clock::now();
					display_sorteddata(t, size, choice);
					cout << endl << "USED TIME : " << chrono::duration_cast<chrono::microseconds>(done - started).count() << " microseconds" << endl;
					break;

				case 4:
					correctChoice = true;
					system("CLS");
					cout << "\n\n\n\t\t\t*********Sorting Tutor By ID  (Descending)**********\n\n\n\n\n";
					insertion_sort(t, size, choice);
					display_sorteddata(t, size, choice);
					break;

				case 5:
					correctChoice = true;
					system("CLS");
					cout << "\n\n\n\t\t\t*********Sorting Tutor By Hourly Rate  (Descending)**********\n\n\n\n\n";
					insertion_sort(t, size, choice);
					display_sorteddata(t, size, choice);
					break;

				case 6:
					correctChoice = true;
					system("CLS");
					cout << "\n\n\n\t\t\t*********Sorting Tutor By Rating  (Descending)**********\n\n\n\n\n";
					insertion_sort(t, size, choice);
					display_sorteddata(t, size, choice);
					break;

				}
			else {
				cout << BOLDRED << "Error!!!! Invalid Choices !!!!!" << endl << "Please Try Again ......" << RESET << endl;
				system("pause");
				system("CLS");
				correctChoice = false;
			}

		} while (correctChoice == false);

		cout << "Press Enter To Display Other Sorting" << endl;

		char key = _getch();
		if (key == KEY_ENTER) {
			sort_tutor(t, tutor_arr_size);
			return;
		}

	}

	//Sorting Algorithm
	void insertion_sort(Tutor t[], int size, int choice)
	{
		switch (choice)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				Tutor key = t[i];
				int j = i - 1;
				while (j >= 0 && key.TutorID < t[j].TutorID)
				{
					t[j + 1] = t[j];
					j--;
				}
				t[j + 1] = key;
			}
			break;

		case 2:
			for (int i = 0; i < size; i++)
			{
				Tutor key = t[i];
				int j = i - 1;
				while (j >= 0 && key.HourlyRate < t[j].HourlyRate)
				{
					t[j + 1] = t[j];
					j--;
				}
				t[j + 1] = key;
			}
			break;

		case 3:
			for (int i = 0; i < size; i++)
			{
				Tutor key = t[i];
				int j = i - 1;
				while (j >= 0 && key.Rating < t[j].Rating)
				{
					t[j + 1] = t[j];
					j--;
				}
				t[j + 1] = key;
			}
			break;

		case 4:
			for (int i = 0; i < size; i++)
			{
				Tutor key = t[i];
				int j = i - 1;
				while (j >= 0 && key.TutorID > t[j].TutorID)
				{
					t[j + 1] = t[j];
					j--;
				}
				t[j + 1] = key;
			}
			break;

		case 5:
			for (int i = 0; i < size; i++)
			{
				Tutor key = t[i];
				int j = i - 1;
				while (j >= 0 && key.HourlyRate > t[j].HourlyRate)
				{
					t[j + 1] = t[j];
					j--;
				}
				t[j + 1] = key;
			}
			break;

		case 6:
			for (int i = 0; i < size; i++)
			{
				Tutor key = t[i];
				int j = i - 1;
				while (j >= 0 && key.Rating > t[j].Rating)
				{
					t[j + 1] = t[j];
					j--;
				}
				t[j + 1] = key;
			}
			break;
		}



	}

	//Modify TUTOR
	void modify_tutor(struct Tutor* t, int size)
	{
	modifytutor:
		system("CLS");
		bool verifyID = false;
		cout << "\n\n\n\t\t\t\t*********Modify Tutor Detials**********\n\n\n\n\n";

		cout << "\t\t\t\tID" << setw(25) << "Name ";
		cout << endl;

		for (int i = 0; i < size; i++) {
			cout << "\n\t\t\t\t" << t[i].TutorID << setw(25) << t[i].Name;

		}

		int modifytutorid, choice, a;
		string   Phone, Address, sname, cname;
		cout << endl << "PLease Select a Tutor ID to Modify: " << endl;
		char key = _getch();
		if (key == KEY_ESC) {
			tuitioncentremenu();
		}


		if (!(cin >> modifytutorid)) {

			cout << BOLDRED << "Wrong Input !!!!" << endl << "Only Tutor ID Allowed" << RESET << endl;
			system("pause");
			cin.clear();
			cin.ignore(100, '\n');
			system("cls");
			cout << "\n\n\n\t\t\t\t*********Modify Tutor Detials**********\n\n\n\n\n";
			goto modifytutor;

		}


		verifyID = id_validation(modifytutorid, tutor_arr_size);
		cout << endl;
		if (verifyID == true)
		{

			Tutor* ptr = t;
			cout << "Tutor " << t[modifytutorid - 1].Name << "Old Data:" << endl;
			cout << "Address \t\t:\t\t\t" << t[modifytutorid - 1].Address << endl;
			cout << "Phone Number \t\t:\t\t\t" << t[modifytutorid - 1].Phone << endl << endl;


			cout << "Please Choose to Modify Tutor " << t[modifytutorid - 1].Name << " Details" << endl << endl;
			cout << "1. Modify Tutor Address" << endl;
			cout << "2. Modify Tutor Phone Number" << endl;
			cout << "3. Update Tutor Terminated Date" << endl;
			char key = _getch();
			if (key == KEY_ESC) {
				tuitioncentremenu();
			}


			cin >> choice;


			if (choice >= 0 && choice <= 3)
			{
				switch (choice)
				{
				case 1:
					cin.ignore();
				modifytutoraddress:
					cout << "New Tutor Address:\t\t\t";
					getline(cin, Address);

					for (int i = 0; i < 10; i++)
					{
						if (t[i].TutorID == modifytutorid)
						{

							t[i].Address = Address;
							break;
						}
					}
					cout << "New Address Saved" << endl;

					for (int i = 0; i < size; i++)
					{
						if (t[i].TutorID == modifytutorid)
						{

							system("cls");
							cout << GREEN << "\n\n\n\n\n\t\t\t\t\t  Tutor Address Modified Sccessfully!!!\n\n\n\n\n" << RESET;
							cout << "\t\t\t\tTutor ID \t\t:\t\t" << t[i].TutorID << endl;
							cout << "\t\t\t\tTutor Name \t\t:\t\t" << t[i].Name << endl;
							cout << "\t\t\t\tTutor Address \t\t:\t\t" << GREEN << t[i].Address << RESET << endl;
							cout << "\t\t\t\tTutor Phone Number \t:\t\t" << t[i].Phone << endl;
							cout << "\t\t\t\tDate Joined \t\t:\t\t" << t[i].DateJoined << endl;
							cout << "\t\t\t\tDate Terminated \t:\t\t" << t[i].DateTerminated << endl;
							cout << "\t\t\t\tHourly Rate \t\t:\t\t" << t[i].HourlyRate << endl;
							cout << "\t\t\t\tRating \t\t\t:\t\t" << t[i].Rating << endl;
							cout << "\t\t\t\tTuition Centre Code \t:\t\t" << t[i].TuitionCentreCode << endl;
							cout << "\t\t\t\tTuition Centre Name \t:\t\t" << t[i].TuitionCentreName << endl;
							cout << "\t\t\t\tSubject Code \t\t:\t\t" << t[i].SubjectCode << endl;
							cout << "\t\t\t\tSubject Name \t\t:\t\t" << t[i].SubjectName << endl << endl;

							cout << "Press Enter To Modify Other Tutor" << endl;

							char key = _getch();
							if (key == KEY_ENTER) {
								goto modifytutor;
								return;
							}
							break;
						}

					}

					break;

				case 2:

				modifytutorphone:

					bool verification;
					do
					{
						int correctPhone;
						cout << "New Tutor Phone Number:\t\t\t";
						cin.ignore();
						getline(cin, Phone);

						char integer[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
						int pn = 0;
						verification = true;
						for (int i = 0; i < Phone.size(); i++)
						{
							for (int n = 0; n <= 9; n++) {
								if (Phone[i] == integer[n]) {
									pn++;
								}
							}
						}

						if (pn != Phone.size())
						{
							cout << BOLDRED << "\t\t\t\tError !!!!!  Only Numerical Characters Can Be Entered!" << RESET << endl;
							verification = false;
						}
						else {

							verification = true;

						}
					} while (verification != true);


					//CHECK LENGHT
					for (int i = 0; i < Phone.length(); i++) {
						if (Phone.length() >= 9 && Phone.length() <= 11) {
							for (int i = 0; i < 10; i++)
							{
								if (t[i].TutorID == modifytutorid)
								{
									t[i].Phone = Phone;
									break;
								}
							}
							break; ;
						}
						else {

							cout << BOLDRED << "Invalid Phone Number format!!" << endl;
							cout << "Phone Number not Saved!" << RESET << endl;
							system("pause");
							goto modifytutorphone;
							break;

						}
					}

					for (int i = 0; i < size; i++)
					{
						if (t[i].TutorID == modifytutorid)
						{
							system("cls");
							cout << GREEN << "\n\n\n\n\n\t\t\t\t\tTutor Phone Number Modified Sccessfully!!!\n\n\n\n\n" << RESET;
							cout << "\t\t\t\tTutor ID \t\t:\t\t" << t[i].TutorID << endl;
							cout << "\t\t\t\tTutor Name \t\t:\t\t" << t[i].Name << endl;
							cout << "\t\t\t\tTutor Address \t\t:\t\t" << t[i].Address << endl;
							cout << "\t\t\t\tTutor Phone Number \t:\t\t" << GREEN << t[i].Phone << RESET << endl;
							cout << "\t\t\t\tDate Joined \t\t:\t\t" << t[i].DateJoined << endl;
							cout << "\t\t\t\tDate Terminated \t:\t\t" << t[i].DateTerminated << endl;
							cout << "\t\t\t\tHourly Rate \t\t:\t\t" << t[i].HourlyRate << endl;
							cout << "\t\t\t\tRating \t\t\t:\t\t" << t[i].Rating << endl;
							cout << "\t\t\t\tTuition Centre Code \t:\t\t" << t[i].TuitionCentreCode << endl;
							cout << "\t\t\t\tTuition Centre Name \t:\t\t" << t[i].TuitionCentreName << endl;
							cout << "\t\t\t\tSubject Code \t\t:\t\t" << t[i].SubjectCode << endl;
							cout << "\t\t\t\tSubject Name \t\t:\t\t" << t[i].SubjectName << endl << endl;

							cout << "Press Enter To Modify Other Tutor" << endl;

							char key = _getch();
							if (key == KEY_ENTER) {
								goto modifytutor;
								return;
							}
							break;
						}

					}
					break;


				case 3:
				modifydate:

					for (int i = 0; i < size; i++)
					{
						if (modifytutorid == t[i].TutorID)
						{
							t[i].DateTerminated = get_currentdate();
							break;
						}
					}

					for (int i = 0; i < size; i++)
					{
						if (t[i].TutorID == modifytutorid)
						{

							system("cls");
							cout << t[i].DateTerminated;
							cout << GREEN << "\n\n\n\n\n\t\t\t\t\tTutor Terminated Date Updated Sccessfully!!!\n\n\n\n\n" << RESET;
							cout << "\t\t\t\tTutor ID \t\t:\t\t" << t[i].TutorID << endl;
							cout << "\t\t\t\tTutor Name \t\t:\t\t" << t[i].Name << endl;
							cout << "\t\t\t\tTutor Address \t\t:\t\t" << t[i].Address << endl;
							cout << "\t\t\t\tTutor Phone Number \t:\t\t" << t[i].Phone << endl;
							cout << "\t\t\t\tDate Joined \t\t:\t\t" << t[i].DateJoined << endl;
							cout << "\t\t\t\tDate Terminated \t:\t\t" << GREEN << t[i].DateTerminated << RESET << endl;
							cout << "\t\t\t\tHourly Rate \t\t:\t\t" << t[i].HourlyRate << endl;
							cout << "\t\t\t\tRating \t\t\t:\t\t" << t[i].Rating << endl;
							cout << "\t\t\t\tTuition Centre Code \t:\t\t" << t[i].TuitionCentreCode << endl;
							cout << "\t\t\t\tTuition Centre Name \t:\t\t" << t[i].TuitionCentreName << endl;
							cout << "\t\t\t\tSubject Code \t\t:\t\t" << t[i].SubjectCode << endl;
							cout << "\t\t\t\tSubject Name \t\t:\t\t" << t[i].SubjectName << endl << endl;

							cout << "Press Enter To Modify Other Tutor" << endl;

							char key = _getch();
							if (key == KEY_ENTER) {
								goto modifytutor;
								return;
							}
							break;
						}

					}
					break;
				}
			}
			else
			{
				cout << BOLDRED << "Error!!!!" << endl << "Invalid Selection!!!" << endl << "Only  1 & 2 & 3 Allowed" << endl << "Please Try Again ....." << RESET << endl;
				system("pause");
				system("CLS");

				goto modifytutor;
			}

		}
		else {
			cout << BOLDRED << "Enter ID Not Founded !!!!!" << RESET << endl;
			system("pause");
			system("cls");

			goto modifytutor;
		}

		system("pause");
		goto modifytutor;

	}

	//Add Tutor Rating
	void add_tutorrating(struct Tutor* t, int size)
	{
	ratingtutor:
		system("CLS");
		bool verifyID = false;
		cout << "\n\n\n\t\t\t\t*********Tutor Evaluation**********\n\n\n\n\n";

		cout << "\t\t\t\tID" << setw(25) << "Name ";
		cout << endl;

		for (int i = 0; i < size; i++) {
			cout << "\n\t\t\t\t" << t[i].TutorID << setw(25) << t[i].Name;

		}

		int ratingid, choice, a;
		string   sname, cname;
		double rating;

		cout << endl << "PLease Select a Tutor ID for Evaluation: " << endl;
		char key = _getch();
		if (key == KEY_ESC) {
			tuitioncentremenu();
		}


		if (!(cin >> ratingid)) {

			cout << BOLDRED << "Wrong Input !!!!" << endl << "Only Tutor ID Allowed" << RESET << endl;
			system("pause");
			cin.clear();
			cin.ignore(100, '\n');
			system("cls");
			cout << "\n\n\n\t\t\t\t*********Tutor Evaluation**********\n\n\n\n\n";
			goto ratingtutor;

		}


		verifyID = id_validation(ratingid, tutor_arr_size);
		cout << endl;

		if (verifyID == true)
		{

			Tutor* ptr = t;

			cout << "Please Choose the Rating for Tutor " << t[ratingid - 1].Name << endl << endl;
			cout << "1. Very Bad" << endl;
			cout << "2. Bad" << endl;
			cout << "3. Moderate" << endl;
			cout << "4. Good" << endl;
			cout << "5. Best" << endl;


			char key = _getch();
			if (key == KEY_ESC) {
				tuitioncentremenu();
			}


			if (!(cin >> choice))
			{
				cout << BOLDRED << "Error Input!!!!" << endl << "Only Selection above Allowed" << endl << "Please Try Again ....." << RESET << endl;
				system("pause");
				system("CLS");
				goto ratingtutor;
			}


			if (choice >= 0 && choice <= 5)
			{
				switch (choice)
				{
				case 1:
					rating = 1.0;
					break;
				case 2:
					rating = 2.0;
					break;
				case 3:
					rating = 3.0;
					break;
				case 4:
					rating = 4.0;
					break;
				case 5:
					rating = 5.0;
					break;
				}
			}
			else
			{
				cout << BOLDRED << "Error!!!!" << endl << "Invalid Selection!!!" << endl << "Only Selection above Allowed" << endl << "Please Try Again ....." << RESET << endl;
				system("pause");
				system("CLS");

				goto ratingtutor;
			}

			for (int i = 0; i < size; i++)
			{
				if (t[i].TutorID == ratingid)
				{

					t[i].Rating = rating;
					break;
				}
			}
			cout << "Tutor Rating Added" << endl;

			for (int i = 0; i < size; i++)
			{
				if (t[i].TutorID == ratingid)
				{
					system("cls");
					cout << GREEN << "\n\n\n\n\n\t\t\t\t\t  Tutor Rating Added Sccessfully!!!\n\n\n\n\n" << RESET;
					cout << "\t\t\t\tTutor ID \t\t:\t\t" << t[i].TutorID << endl;
					cout << "\t\t\t\tTutor Name \t\t:\t\t" << t[i].Name << endl;
					cout << "\t\t\t\tTutor Address \t\t:\t\t" << t[i].Address << endl;
					cout << "\t\t\t\tTutor Phone Number \t:\t\t" << t[i].Phone << endl;
					cout << "\t\t\t\tDate Joined \t\t:\t\t" << t[i].DateJoined << endl;
					cout << "\t\t\t\tDate Terminated \t:\t\t" << t[i].DateTerminated << endl;
					cout << "\t\t\t\tHourly Rate \t\t:\t\t" << t[i].HourlyRate << endl;
					cout << "\t\t\t\tRating \t\t\t:\t\t" << GREEN << t[i].Rating << RESET << endl;
					cout << "\t\t\t\tTuition Centre Code \t:\t\t" << t[i].TuitionCentreCode << endl;
					cout << "\t\t\t\tTuition Centre Name \t:\t\t" << t[i].TuitionCentreName << endl;
					cout << "\t\t\t\tSubject Code \t\t:\t\t" << t[i].SubjectCode << endl;
					cout << "\t\t\t\tSubject Name \t\t:\t\t" << t[i].SubjectName << endl << endl;

					cout << "Press Enter To Rate Other Tutor" << endl;

					char key = _getch();
					if (key == KEY_ENTER) {
						goto ratingtutor;
						return;
					}
					break;
				}

			}

		}
		else {
			cout << BOLDRED << "Enter ID Not Founded !!!!!" << RESET << endl;
			system("pause");
			system("cls");

			goto ratingtutor;
		}

		system("pause");
		goto ratingtutor;

	}

	//Delete TUTOR
	void delete_tutor(struct Tutor* t, int size)
	{
		system("cls");

	deletetutor:
		string sname, cname;
		bool verifyID = false;
		cout << "\n\n\n\t\t\t\t*********Detele Tutor Record**********\n\n\n\n\n";


		cout << "\t\t\t\tID" << setw(25) << "Name ";
		cout << endl;

		for (int i = 0; i < size; i++) {
			cout << "\n\t\t\t\t" << t[i].TutorID << setw(25) << t[i].Name;

		}

		int deletetutorid, choice, i;
		cout << endl << "PLease Select a Tutor ID to Delete: " << endl;
		char key = _getch();
		if (key == KEY_ESC) {
			tuitioncentremenu();
		}

		if (!(cin >> deletetutorid)) {

			cout << BOLDRED << "Wrong Input !!!!" << endl << "Only Tutor ID Allowed" << RESET << endl;
			cin.clear();
			cin.ignore(123, '\n');
			system("CLS");
			goto deletetutor;

		}
		verifyID = id_validation(deletetutorid, tutor_arr_size);
		cout << endl;
		if (verifyID == true)
		{
			system("CLS");
			cout << "\n\n\n\t\t\t\t\t*********Detele Tutor Record**********\n\n\n\n\n";

			Tutor* ptr = t;
			Tutor* tutor_arr = new Tutor[size - 1];
			for (int i = 0; i < size; i++)
			{
				if (t[i].TutorID == deletetutorid)
				{
					cout << "\t\t\t\tTutor ID \t\t:\t\t" << t[i].TutorID << endl;
					cout << "\t\t\t\tTutor Name \t\t:\t\t" << t[i].Name << endl;
					cout << "\t\t\t\tTutor Address \t\t:\t\t" << t[i].Address << endl;
					cout << "\t\t\t\tTutor Phone Number \t:\t\t" << t[i].Phone << endl;
					cout << "\t\t\t\tDate Joined \t\t:\t\t" << t[i].DateJoined << endl;
					cout << "\t\t\t\tDate Terminated \t:\t\t" << t[i].DateTerminated << endl;
					cout << "\t\t\t\tHourly Rate \t\t:\t\t" << t[i].HourlyRate << endl;
					cout << "\t\t\t\tRating \t\t\t:\t\t" << t[i].Rating << endl;
					cout << "\t\t\t\tTuition Centre Code \t:\t\t" << t[i].TuitionCentreCode << endl;
					cout << "\t\t\t\tTuition Centre Name \t:\t\t" << t[i].TuitionCentreName << endl;
					cout << "\t\t\t\tSubject Code \t\t:\t\t" << t[i].SubjectCode << endl;
					cout << "\t\t\t\tSubject Name \t\t:\t\t" << t[i].SubjectName << endl << endl;
					break;
				}
			}

			cout << endl;
			cout << "Are You that You Want To Delete Tutor " << " ? " << endl;
			cout << "1. YES " << endl;
			cout << "2. NO " << endl << endl;

			cin >> choice;

			if (choice >= 0 && choice <= 2)
			{
				switch (choice)
				{
				case 1:
				{
					auto started = chrono::high_resolution_clock::now();
					for (int i = 0; i < size; i++)
					{
						if (t[i].TutorID == deletetutorid)
						{
							for (int d = i; d < (size - 1); d++)
							{
								tutor_arr[d] = t[d + 1];

							}
							size--;
							tutor_arr_size = size;
							break;
						}
						tutor_arr[i] = t[i];

					}

					system("cls");
					cout << BOLDGREEN << "\n\n\n\n\t\t\t\t\tTutor " << deletetutorid << " has Deleted Successfully!!!!\n" << RESET << endl;
					auto done = chrono::high_resolution_clock::now();
					cout << endl << "USED TIME : " << chrono::duration_cast<chrono::microseconds>(done - started).count() << " microseconds";
					cout << endl << "Press Enter To Delete Other Tutor" << endl;
					if (key == KEY_ENTER) {
						system("cls");
						goto deletetutor;
						return;
					}
					break;
				}
				case 2:
					cout << BOLDGREEN << "Tutor " << deletetutorid << " Will Not Be Deleted!!!!\n" << RESET << endl;
					goto deletetutor;
					break;
				}

			}
			else {
				cout << BOLDRED << "Error!!!!" << endl << "Invalid Selection!!!" << endl << "Only  1 & 2 Allowed" << endl << "Please Try Again ....." << RESET;
				system("pause");
				system("CLS");
				goto deletetutor;
			}
		}
		else
		{
			cout << BOLDRED << "Enter ID Not Founded !!!!!" << RESET << endl;
			system("pause");
			system("cls");
			goto deletetutor;
		}

		system("pause");
		system("CLS");
		goto deletetutor;
	}

	//User Login
	void user_login(struct Admin*& a, int size) {

		cin.clear();

	userlogin:
		string username;
		string password;
		system("cls");

		cout << "Press the Esc Key to Exit This System";
		cout << "\n\n\n\t\t\t ------- Welcome to Excel Tuition Centre Management System -------\n\n\n\n\n";
		cout << "\t\t\t\t\t\tUsername: ";

		char key = _getch();
		if (key == KEY_ESC) {
			exit(0);
		}

		getline(cin, username);
		if (username.empty()) {
			goto userlogin;
		}


	enterpassword:

		if (username == a[0].AdminID || username == a[1].AdminID) {

			cout << "\t\t\t\t\t\tPassword: ";
			char key = _getch();
			if (key == KEY_ESC) {
				exit(0);
			}
			getline(cin, password);
			if (password.empty()) {
				cout << "\x1B[1F";
				cout << "\x1B[2K";
				goto enterpassword;
			}

			if (password == a[0].adminpassword)
			{
				cout << BOLDGREEN << "\t\t\tWelcome admin! Press any key to login to the system.\n" << RESET;
				system("pause");
				set_usertype(1);
				tuitioncentremenu();
				system("pause");

			}
			else if (password == a[1].adminpassword)
			{
				cout << BOLDGREEN << "\t\t\tWelcome HR Manager! Press any key to login to the system.\n" << RESET;
				system("pause");
				set_usertype(2);
				system("cls");
				delete_terminatedtutor(t, tutor_arr_size);
				tuitioncentremenu();
				system("pause");

			}
			else
			{
				cout << BOLDRED << "\t\t\t\tInvalid Password. Please try to login again!\n" << RESET;
				system("pause");
				goto userlogin;
			}
		}
		else
		{
			cout << BOLDRED << "\t\t\t\t Error !!!! Invalid Username !!!! Please try Again....\n" << RESET;
			system("pause");
			goto userlogin;
		}

	}

	void delete_terminatedtutor(Tutor* t, int size) {
		bool deleted = false;
		for (int i = 0; i < size; i++) {

			string curDay, terDate, terDay, terMon, terYear;
			int curMon = 0, curYear = 0, nom = 0;
			time_t curTime = time(0);
			tm* curDate = localtime(&curTime);

			curDay = to_string(curDate->tm_mday);
			curMon = curDate->tm_mon + 1;
			curYear = curDate->tm_year + 1900;

			terDate = t[i].DateTerminated;
			if (terDate != "") {

				terDay = terDate.substr(0, 2);
				terMon = terDate.substr(3, 2);
				terYear = terDate.substr(6, 4);

				nom = (curYear - stoi(terYear)) * 12;
				nom += (curMon - stoi(terMon));
				if (curDay < terDay) {
					nom--;
				}

				if (nom >= 6) {

					cout << "\n\n\n\n\n\n\n\n\t\t\t\tThe Terminated Tutor " << BOLDGREEN << t[i].Name << RESET << " Has Been Deleted! \n\n\n\n\n\n\n" << endl;

					Tutor* tutor_array = new Tutor[size - 1];

					for (int d = i; d < (size - 1); d++)
					{
						t[d] = t[d + 1];
					}
					i--;
					size--;
					tutor_arr_size = size;
					deleted = true;
				}
				else {
					cout << nom << endl;
				}
				nom = 0;
			}

		}
		if (!deleted) {
			cout << "\n\n\n\n\n\n\n\n\t\t\t\tThere is No Tutor Has Been Terminated Yet\n\n\n\n\n\n\n" << endl;
		}
		system("pause");
	}

	void set_usertype(int user) {
		user_type = user;
	}

	int get_usertype() {
		return user_type;
	}

};

TuitionCenterfunction tcf;


void tuitioncentremenu()
{
	while (true)
	{
		int choice;
		string schoice;
		int usertype = tcf.get_usertype();
		if (usertype == 1)
		{
		adminmenu:

			system("cls");

			cout << "\n\n\n\n\n\n\t\t\t\t\t\t Main Page" << endl;
			cout << "\t\t\t\t\t  ----------------------" << endl;
			cout << "\t\t\t\t\t   1-Add a New Tutor" << endl;
			cout << "\t\t\t\t\t   2-Display All Tutors" << endl;
			cout << "\t\t\t\t\t   3-Search Tutor" << endl;
			cout << "\t\t\t\t\t   4-Display Sorting Tutor" << endl;
			cout << "\t\t\t\t\t   0-Exit" << endl;
			cout << "\t\t\t\t\t   ----------------------" << endl << endl;
			cout << "Enter your choice: ";

			if (!(cin >> choice))
			{
				cout << BOLDRED << "Error!!!!!" << RESET << endl << "Please Enter Your Choice According to The Menu Above" << endl;
				system("pause");
				cin.clear();
				cin.ignore(100, '\n');
				goto adminmenu;
			}


			if (choice >= 0 && choice <= 4)
			{
				switch (choice) {
				case 0:
					tcf.user_login(a, admin_arr_size);
					break;
				case 1:
					tcf.add_tutor(t, tutor_arr_size);
					break;

				case 2:
					tcf.display_all_tutor(t, tutor_arr_size);
					break;

				case 3:
					tcf.search_tutor(t, tutor_arr_size);
					break;

				case 4:
					tcf.sort_tutor(t, tutor_arr_size);
					break;
				}
			}
			else {
				cout << BOLDRED << "Error!!!!!" << RESET << endl << "Please Enter Your Choice According to The Menu Above" << endl;
				system("pause");
				cin.clear();
				cin.ignore(100, '\n');
				system("cls");
				goto adminmenu;
			}
		}
		if (usertype == 2)
		{
		hrmenu:
			system("cls");

			cout << "\n\n\n\n\n\n\t\t\t\t\t\t Main Page" << endl;
			cout << "\t\t\t\t\t  ----------------------" << endl;
			cout << "\t\t\t\t\t   1-Add a New Tutor" << endl;
			cout << "\t\t\t\t\t   2-Display All Tutors" << endl;
			cout << "\t\t\t\t\t   3-Search Tutor" << endl;
			cout << "\t\t\t\t\t   4-Display Sorting Tutor" << endl;
			cout << "\t\t\t\t\t   5-Update/Modify a Tutor Record" << endl;
			cout << "\t\t\t\t\t   6-Tutor Peformance Evaluation" << endl;
			cout << "\t\t\t\t\t   7-Delete a Tutor" << endl;

			cout << "\t\t\t\t\t   0-Exit" << endl;
			cout << "\t\t\t\t\t   ----------------------" << endl << endl;
			cout << "Enter your choice: ";

			if (!(cin >> choice))
			{
				cout << BOLDRED << "Error!!!!!" << RESET << endl << "Please Enter Your Choice According to The Menu Above" << endl;
				system("pause");
				cin.clear();
				cin.ignore(100, '\n');
				goto hrmenu;
			}


			if (choice >= 0 && choice <= 7)
			{
				switch (choice) {
				case 0:
					tcf.user_login(a, admin_arr_size);
					break;
				case 1:
					tcf.add_tutor(t, tutor_arr_size);
					break;

				case 2:
					tcf.display_all_tutor(t, tutor_arr_size);
					break;

				case 3:
					tcf.search_tutor(t, tutor_arr_size);
					break;

				case 4:
					tcf.sort_tutor(t, tutor_arr_size);
					break;

				case 5:
					tcf.modify_tutor(t, tutor_arr_size);
					break;

				case 6:
					tcf.add_tutorrating(t, tutor_arr_size);
					break;

				case 7:
					tcf.delete_tutor(t, tutor_arr_size);
					break;
				}
			}
			else {
				cout << BOLDRED << "Error!!!!!" << RESET << endl << "Please Enter Your Choice According to The Menu Above" << endl;
				system("pause");
				cin.clear();
				cin.ignore(100, '\n');
				system("cls");
				goto hrmenu;
			}
		}
	}
}

int main()
{
	tcf.insertdata();
	tcf.user_login(a, admin_arr_size);
	return 0;
}
