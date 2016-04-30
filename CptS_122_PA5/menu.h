#pragma once

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <fstream> 

using std::ostream;
using std::istream;
using std::fstream;
using std::ifstream;
using std::ofstream;

#include <string>
using std::string;
using std::getline;




class Menu
{
public:


	//member functions
	void displayMessage()
	{
		cout << "Welcome to Michael's Attendance Tracker!" << endl;

	}

	int displayMainMenu()
	{
		int choice = 0;

		cout << "\n Menu";
		cout << "\n =====================================================";
		cout << "\n Choose a number...";
		cout << "\n 1. Import course list";
		cout << "\n 2. Load master list";
		cout << "\n 3. Store master list";
		cout << "\n 4. Mark absences";
		cout << "\n 5. Edit Absences";
		cout << "\n 6. Generate Report";
		cout << "\n 7. Exit";
		
		cin >> choice;

		switch (choice)
		{
		case 1: {};
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			displayMainMenu();
		}


	}

private:






};



