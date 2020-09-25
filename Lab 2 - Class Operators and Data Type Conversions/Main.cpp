// Lab 2 - Class Operators and Data Type Conversions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <ctime>
#include <iostream>
#include <sstream>
#include "MyConsoleInput.h"
#include "WorkTicket.h"

int main()
{
    WorkTicket test;
    test.SetWorkTicket();
    const string testString = test.ToString();
	cout << testString;
}


