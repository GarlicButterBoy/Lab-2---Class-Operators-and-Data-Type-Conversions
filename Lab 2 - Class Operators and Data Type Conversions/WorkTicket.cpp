/*
 * @FileName: WorkTicket.cpp
 * @Author  : Nick Sturch-Flint (100303769) and Rose Nguyen (100764192)
 * @Date    : September 20, 2020
 *
 */

#include "WorkTicket.h"

#include <ctime>
#include <iostream>
#include <sstream>

#include "MyConsoleInput.h"

 //WorkTicket definition
WorkTicket::WorkTicket(int ticketNumber, string ticketDate, string ticketID, string ticketDescription)
{
	myTicketNumber = ticketNumber;
	myDate = ticketDate;
	myID = ticketID;
	myDescription = ticketDescription;
}

//Destructor
WorkTicket::~WorkTicket()
= default;

//Copy Constructor
WorkTicket::WorkTicket(const WorkTicket& ticketCopy)
{
	myTicketNumber = ticketCopy.myTicketNumber;
	myDate = ticketCopy.myDate;
	myID = ticketCopy.myID;
	myDescription = ticketCopy.myDescription;
}

/// <summary>
/// Retrieves WorkTicket TicketNumber
/// </summary>
/// <returns></returns>
int WorkTicket::GetTicketNumber()
{
	return myTicketNumber;
}

/// <summary>
/// Retrieves WorkTicket Date
/// </summary>
/// <returns></returns>
string WorkTicket::GetTicketDate()
{
	return myDate;
}

/// <summary>
/// Retrieves WorkTicket Identification Number
/// </summary>
/// <returns></returns>
string WorkTicket::GetID()
{
	return myID;
}

/// <summary>
/// Retrieves WorkTicket Description
/// </summary>
/// <returns></returns>
string WorkTicket::GetDescription()
{
	return myDescription;
}

/// <summary>
/// Sets the Ticket Number
/// </summary>
/// <param name="ticketNumber"></param>
void WorkTicket::SetTicketNumber()
{
	char valid[] = "0123456789";
	char num_array[5];
	string output;

	for (int i = 0; i < 5; i++)
	{
		num_array[i] = valid[rand() % 10];
	}
	output = ArrayToString(num_array, 5);

	int ticketNumber = stoi(output);

	myTicketNumber = ticketNumber;
}

/// <summary>
/// Sets the Ticket Date
/// </summary>
/// <param name="day"></param>
/// <param name="month"></param>
/// <param name="year"></param>
void WorkTicket::SetTicketDate()
{
	int day, month, year;

	//Asks the user for the day of the month
	cout << "Please enter the day: ";
	day = ConsoleInput::ReadInteger(1, 31);

	//Asks the user for the month of the year
	cout << endl << "Month: ";
	month = ConsoleInput::ReadInteger(1, 12);

	//Asks the user for the year
	cout << endl << "Year: ";
	year = ConsoleInput::ReadInteger(2000, 2099);
	const string ticketDate = DateToString(day, month, year);

	myDate = ticketDate;
}

/// <summary>
/// Sets the Ticket Client ID
/// </summary>
void WorkTicket::SetID()
{
	srand(time(0)); //using a seed allows for "not-so-true-but-basically" random generation

	//array of valid characters to choose from
	char valid[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrtuvwxyz";
	char rand_array[6];
	string output;

	for (int i = 0; i < 6; i++)
	{
		rand_array[i] = valid[rand() % 62];				//rand_array (our 6 char alphanumeric string)
	}													//valid[rand() % 63] generates a random character from the list
	output = ArrayToString(rand_array, 6);			//63 is the total length of the valid[] array.
	myID = output;  									//from: https://www.codespeedy.com/generate-random-alphanumeric-string-in-cpp/
}

/// <summary>
/// Sets the Ticket Reason (Description)
/// </summary>
/// <param name="description"></param>
void WorkTicket::SetDescription()
{
	string description;
	cout << "What is the reason for creating the work ticket?\n";
	getline(cin, description);
	myDescription = description;
}

/// <summary>
/// SetWorkTicket
/// </summary>
void WorkTicket::SetWorkTicket()
{
	SetTicketNumber();
	SetTicketDate();
	SetID();
	SetDescription();
}

/// <summary>
/// changes the integer inputs for the date to a string
/// </summary>
/// <param name="day"></param>
/// <param name="month"></param>
/// <param name="year"></param>
/// <returns></returns>
string WorkTicket::DateToString(int day, int month, int year)
{
	stringstream dateStr;

	dateStr << day << "/" << month << "/" << year;

	return dateStr.str();
}

//Printing the final ticket
string WorkTicket::ToString()
{

	string outputStr;
	outputStr += "\n========================================\n";
	outputStr += "Ticket Number: " + to_string(GetTicketNumber()) + "\n";
	outputStr += "Ticket Date: " + GetTicketDate() + "\n";
	outputStr += "Ticket ID: " + GetID() + "\n";
	outputStr += "Ticket Description: " + GetDescription() + "\n";
	outputStr += "\n========================================\n";

	return outputStr;

}

string WorkTicket::ArrayToString(char* a, int size)
{
	string temp;
	for (int i = 0; i < size; i++)
	{
		temp += a[i];
	}
	return temp;
}
