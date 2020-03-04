/*
Program: Assignment1-Problem3-kez27
Author: Kassandra Zimmerman
Purpose: This program shows the current time in other time zones.
Last Modified: 4/23/2015
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int phillyTime, honolulu, seattle, london, moscow, hongKong, aukland;
	const int HOURS_IN_A_DAY = 2400;

	cout << "Enter the current time in Philadelphia in military format (e.g. 0900, 1730): ";
	cin >> phillyTime;

	honolulu = (phillyTime + 1800) % HOURS_IN_A_DAY;
	seattle = (phillyTime + 2100) % HOURS_IN_A_DAY;
	london = (phillyTime + 500) % HOURS_IN_A_DAY;
	moscow = (phillyTime + 800) % HOURS_IN_A_DAY;
	hongKong = (phillyTime + 1200) % HOURS_IN_A_DAY;
	aukland = (phillyTime + 1700) % HOURS_IN_A_DAY;

	cout << "Current times in other cities" << endl << endl << setw(13) << fixed
		<< "Honolulu: " << honolulu << endl
		<< "Seattle: " << seattle << endl
		<< "London: " << london << endl
		<< "Moscow: " << moscow << endl
		<< "Hong Kong: " << hongKong << endl
		<< "Aukland: " << aukland << endl << endl;

}

