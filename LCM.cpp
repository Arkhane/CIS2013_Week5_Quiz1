#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int firstNumber, secondNumber, result;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	result = firstNumber * secondNumber;

	cout << "LCM of " << firstNumber << " and " << secondNumber << " is: ";
	for (int i = 1; i <= result; i++)
	{
		if (result%i == 0 && i%firstNumber == 0 && i%secondNumber == 0)
		{
			cout << i;
			break;
		}
	}


	return 0;
}
