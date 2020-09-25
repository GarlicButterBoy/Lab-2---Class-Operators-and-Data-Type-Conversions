/*
 * @FileName: WorkTicket.cpp
 * @Author  : Nick Sturch-Flint (100303769) and Rose Nguyen (100764192)
 * @Date    : September 20, 2020
 *
 */

#include "WorkTicket.h"
#include <iostream>
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
void WorkTicket::SetTicketNumber(int ticketNumber)
{
	myTicketNumber = ticketNumber;
}

/// <summary>
/// Sets the Ticket Date
/// </summary>
/// <param name="day"></param>
/// <param name="month"></param>
/// <param name="year"></param>
void WorkTicket::SetTicketDate(int day, int month, int year)
{
	int myDay, myMonth, myYear;
	int dayInput, monthInput, yearInput;

	//Asks the user for the day of the month, then assigns it to myDay
	cout << "Day: ";
	dayInput = ConsoleInput::ReadInteger(1, 31);
	myDay = dayInput;

	//Asks the user for the month of the year, then assigns it to myMonth
	cout << endl << "Month: ";
	monthInput = ConsoleInput::ReadInteger(1, 12);
	myMonth = monthInput;

	//Asks the user for the year, then assigns it to myYear
	cout << endl << "Year: ";
	yearInput = ConsoleInput::ReadInteger(2000, 2099);
	myYear = yearInput;
}

/// <summary>
/// Sets the Ticket Client ID
/// </summary>
void WorkTicket::SetID()
{
	const string clientID;
	myID = clientID;
}

/// <summary>
/// Sets the Ticket Reason (Description)
/// </summary>
/// <param name="description"></param>
void WorkTicket::SetDescription(string description)
{
	getline(cin, description);
	myDescription = description;
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