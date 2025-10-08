#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int randomNumber, randomNumb2 = rand();
	int Solution = 0;
	int timeLeft = time(10);

	ctime(&timeLeft);
	cout << randomNumber << "+" << randomNumb2 << "=";
	cin >> Solution;

	if (Solution == randomNumber + randomNumb2) {
		cout << "Correct!" << endl;
	}
	else {
		cout << "Incorrect, the answer is " << randomNumber + randomNumb2 << endl;
	}
}