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
        string testString = test.ToString();
        cout << testString;

        WorkTicket copyTest = test;
        testString = copyTest.ToString();
        cout << "Printing Ticket..." << endl << testString;
	}
	catch (exception& ex)
	{
		cerr << ex.what() << " Ending the program.";
	}

}


