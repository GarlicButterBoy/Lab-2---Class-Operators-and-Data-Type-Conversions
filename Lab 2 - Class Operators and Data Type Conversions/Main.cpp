/*
 * @FileName: Main.cpp
 * @Author  : Nick Sturch-Flint (100303769)
 * @Date    : September 26, 2020
 *
 */

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
		WorkTicket newTicket = test;

		testString = newTicket.ShowWorkTicket();

		cout << "New Ticket is:" << testString;

		cout << test.operator string();
	}
	catch (exception& ex)
	{
		cerr << ex.what() << " Ending the program.";
	}

}


