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
		//declaring two new worktickets
		WorkTicket firstTicket, secondTicket;

		//Printing the default ticket to the console with an overloaded operator
		cout << firstTicket.operator string() << endl;

		//using the class Setters
		//firstTicket.SetWorkTicket();

		//using the overloaded >> operator
		cin >> secondTicket;

		//Printing the non-default ticket to the console with an overloaded operator
		cout << secondTicket.operator string() << endl;

		//Comparing the tickets, 1 if they are the same, 0 if they are not
		cout << "\nAre these tickets the same? 1 = Yes | 0 = No\n" << (firstTicket == secondTicket);

		if (!(firstTicket == secondTicket))
		{
			cout << "These tickets are not the same, changing now...";
			secondTicket = firstTicket;
		}
		else
		{
			cout << "These tickets are the same. Printing both now..";
		}

		//Printing the first ticket
		cout << "First Ticket: " << endl << firstTicket << endl;
		cout << "Second Ticket: " << endl << secondTicket;

	}
	catch (exception& ex)
	{
		cerr << ex.what() << " Ending the program.";
	}

}


