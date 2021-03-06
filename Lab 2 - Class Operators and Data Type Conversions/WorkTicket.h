/*
 * @FileName: WorkTicket.h
 * @Author  : Nick Sturch-Flint (100303769)
 * @Date    : September 26, 2020
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

	//Conversion Operator
	operator string() const;

	//Operator Overloads
	bool operator==(const WorkTicket& tempTicket) const;
	WorkTicket operator=(const WorkTicket& tempTicket);

	//Friend Overloads
	friend ostream& operator<<(ostream& out, const WorkTicket& ticket);
	friend istream& operator>>(istream& in, WorkTicket& ticket);

	//Accessors (Getters): Queries the Object
	int GetTicketNumber() const;
	string GetTicketDate() const;
	string GetID() const;
	string GetDescription() const;
	string GetWorkTicket(WorkTicket tempTicket);

	//Mutators (Setters): Changes the Object
	void SetTicketNumber();
	void SetTicketDate();
	void SetID();
	void SetDescription();
	void SetWorkTicket();

	//Methods (Functions)
	static string DateToString(int day, int month, int year);
	string ShowWorkTicket() const;
	static string ArrayToString(char* a, int size);
	//string GenerateClientID();
	//int GenerateTicketNumber();

private:
	//Data Members
	int myTicketNumber{};
	string myDate;
	string myID;
	string myDescription;
};

#endif
