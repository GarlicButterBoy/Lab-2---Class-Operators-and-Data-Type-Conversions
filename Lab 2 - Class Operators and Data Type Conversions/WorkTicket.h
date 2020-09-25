/*
 * @FileName: WorkTicket.h
 * @Author  : Nick Sturch-Flint (100303769) and Rose Nguyen (100764192)
 * @Date    : September 20, 2020
 *
 */

#pragma once
#ifndef __WORKTICKET__
#define __WORKTICKET__
#include <string>

using namespace std;

class WorkTicket
{
public:

	//Constructors
	WorkTicket(int ticketNumber = 0, string ticketDate = "1/1/2000", string ticketID = "", string ticketDescription = "");

	//Destructor
	~WorkTicket();

	//Copy Constructor
	WorkTicket(const WorkTicket& ticketCopy);

	//Accessors (Getters): Queries the Object
	int GetTicketNumber();
	string GetTicketDate();
	string GetID();
	string GetDescription();

	//Mutators (Setters): Changes the Object
	void SetTicketNumber(int ticketNumber);
	void SetTicketDate(int day, int month, int year);
	void SetID();
	void SetDescription(string description);

	//Methods (Functions)
	string ToString();
	string ArrayToString(char* a, int size);
	string GenerateClientID();
	int GenerateTicketNumber();

private:
	//Data Members
	int myTicketNumber;
	string myDate;
	string myID;
	string myDescription;
};

#endif
