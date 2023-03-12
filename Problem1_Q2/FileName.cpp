#include<iostream>

using namespace std;

int main()
{
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
}