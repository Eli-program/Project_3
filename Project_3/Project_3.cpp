// Project_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double CupsOfSugar = 1.5;
	double cupsOfButter = 1;
	double cupsOfFlour = 2.75;
	

	int numberOfCookies = 48;
	int cookiesWanted;

	cout << "How many cookies do you want to make? ";
	cin >> cookiesWanted;

	if (cookiesWanted >= 48 or cookiesWanted <= 48) {
		cout << "To make " << cookiesWanted << " cookies, you will need: " << endl;
		//round up to the nearest 100th decimal so its easier to read
		CupsOfSugar = ceil((CupsOfSugar / numberOfCookies) * cookiesWanted * 100) / 100;

		cout << CupsOfSugar << " cups of sugar" << endl;

		cupsOfButter = ceil((cupsOfButter / numberOfCookies) * cookiesWanted * 100) / 100;

		cout << cupsOfButter << " cups of butter" << endl;

		cupsOfFlour = ceil((cupsOfFlour / numberOfCookies) * cookiesWanted * 100) / 100;

		cout << cupsOfFlour << " Cups of Flour" << endl;

	}

}

