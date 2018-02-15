#include <iostream>
#include <cmath>

using namespace std;

void get_prime(int f, int s)
{
	for (int i = f; i <= s; i++)
	{
		bool prime = true;
		for (int p = 2; p < i; p++)
		{
			if (i%p == 0)
			{
				prime = false;
			}
		}

		if (prime)
		{
			cout << i << " is prime " << endl;
		}
	}
}




int main() {

	int firstNumber, secondNumber, result;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	result = firstNumber * secondNumber;

	cout << "LCM of " << firstNumber << " and " << secondNumber << " is: ";

	get_prime(firstNumber, secondNumber);

	return 0;
}
