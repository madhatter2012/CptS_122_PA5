/******************************************************************************
* Programmer: Cornell Michael Smith                                           *
* Class: CptS 122; Lab Section 8                                              *
* Programming Assignment: 5									                  *
* Date: 3/16/16                                                               *
*                                                                             *
* Description: This program calculates statistics on student records          *
*              read in from a file.                                           *             
******************************************************************************/

#include "menu.h"

int main()
{

	string record;

	//file handling
	fstream myFileHandler;
	myFileHandler.open("classList.csv");



	//instantiating menu object
	Menu myMenu;

	//accessing menu object and displayMessage member function
	myMenu.displayMessage;
	myMenu.displayMainMenu;

	while (myFileHandler.good())
	{
		getline(myFileHandler, record, ',');
		
	}
















	myFileHandler.close();
	return 0;
}