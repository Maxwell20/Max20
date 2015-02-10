
// ConsoleApplication1.cpp : Defines the entry point for the console application.

// Maxwell Twente cs317 hw1 problem 15 

//this program generates all combinations of password using the uppcase characters of
//the english alphabet. It then calculates the time it takes to perform the computation.
//brute force password application

//note: it will need an external library for big integers if you wish to use large inputs

//include statements
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	//declarations
	char chars[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int passwordLength = 0;
	
	
	//get user input for password length
	cout << "Enter the password length" << endl;
	cin >> passwordLength;
	// big int
	int iPossiblilities = pow((double)26, (double)passwordLength);//math goes here
	//starts timer
	clock_t startTime = clock();
	//do stuff timed
	
		for (int i = 0; i < iPossiblilities; i++)
		{
			string theword = "";
			
			//big int
			int val = i;
			
			for (int j = 0; j < passwordLength; j++)
			{
				//big int
				int ch = val % 26;
				theword = chars[(int)ch] + theword;
				val = val / 26;


			}
			cout << theword << endl;
		}


	//end timer
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
	//output results
	cout << "it took " << timeInSeconds << " seconds to genereate " << iPossiblilities << " combinations." << endl;


system("pause");
return 0;

}
