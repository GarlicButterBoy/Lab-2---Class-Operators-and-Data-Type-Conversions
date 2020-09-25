/*
 * @FileName: MyConsoleInput.cpp
 * @Author  : Nick Sturch-Flint (100303769) and Rose Nguyen (100764192)
 * @Date    : September 20, 2020
 *
 */

#include "MyConsoleInput.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits> //numeric_limits
#include <cfloat> //limits of DBL and INT Min and Max


using namespace std;

//ReadDouble function
double ConsoleInput::ReadDouble(const double MIN, const double MAX)
{
	double validNumber = 0.0; // holds user input

	cin >> validNumber; //try to get input

	//remove remaining characters from buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (cin.fail()) //if user input fails...
	{
		cin.clear(); //reset the fail() state of the cin
		cin.sync(); //clear the buffer
		//report the problem to the user
		cerr << "* Invalid input. Please try again and enter a numeric value.\n";
		// Try again by calling the function again (recursion)
		validNumber = ReadDouble(MIN, MAX);
	}
	else if (validNumber < MIN || validNumber > MAX) //if value is outside range
	{
		//report the problem to the use
		cerr << " * Invalid input. Please try again and enter a value between "
			<< MIN << " and " << MAX << ".\n";
		// Try again by calling the function (recursion)
		validNumber = ReadDouble(MIN, MAX);
	}

	return validNumber; //returns the valid value
}

// ReadInteger function definition
int ConsoleInput::ReadInteger(const int MIN, const int MAX)
{
	double validNumber = 0.0; //holds the user input

	validNumber = ConsoleInput::ReadDouble(MIN, MAX); //get user input as double

	//if abs(validNumber - (int) validNumber) > 0.00000001) //Alternative
	if (validNumber > (int)validNumber) //If user input is not a whole number
	{
		//report the problem to the user
		cerr << " * Invalid Input. Please try again and enter a whole number.\n";
		validNumber = ReadInteger(MIN, MAX); //recursion
	}
	return (int)validNumber; //returns valid number
}