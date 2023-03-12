#include<iostream>

using namespace std;

int main()
{
	//2.Given a positive number, check the negative or positive, print the number and its type in a message.

	double n;

	cout << "Enter the number: ";
	cin >> n;

	if (n >= 0)
	{
		cout << "the number " << n << " is positive";
	}
	else
	{
		cout << "The number " << n << " is negative";
	}

	return 0;
}