// Lab 2 - Class Operators and Data Type Conversions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <ctime>
#include <iostream>
#include <sstream>
#include "MyConsoleInput.h"
#include "WorkTicket.h"

int main()
{

	try
	{
        WorkTicket test;
        test.SetWorkTicket();
        string testString = test.ShowWorkTicket();
        cout << testString;

        WorkTicket copyTest = test;
        testString = copyTest.ShowWorkTicket();
        cout << "Printing Ticket..." << endl << testString;

		cout << "\nAre these tickets the same? 1 = Yes | 0 = No\n" << (test == copyTest);


	}
	catch (exception& ex)
	{
		cerr << ex.what() << " Ending the program.";
	}

}


