/*
 * @FileName: MyConsoleInput.h
 * @Author  : Nick Sturch-Flint (100303769)
 * @Date    : September 26, 2020
 *
 */

#pragma once
#ifndef MY_CONSOLE_INPUT_H

#define MY_CONSOLE_INPUT_H

#include <limits>
#include <cfloat> //for limits of a double DBL_MIN and DBL_MAX

class ConsoleInput
{
public:
	//ReadDouble Function
	//User may define their own ranges when calling the function, otherwise default to max size of double
	static double ReadDouble(const double MIN = -DBL_MAX, const double MAX = DBL_MAX);

	//ReadInteger Function
	//User may define their own ranges when calling the function, otherwise default to max size of int
	static int ReadInteger(const int MIN = -INT_MIN, const int MAX = INT_MAX);

};
#endif //end of ifndef
