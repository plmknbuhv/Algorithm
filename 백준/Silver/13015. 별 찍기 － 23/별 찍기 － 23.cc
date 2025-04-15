#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int input;

int main() {
	cin >> input;
	for (int j = 0; j < 4 * input - 3; j++)
	{
		if (input > j || 3 * input - 4 < j)
			cout << "*";
		else
			cout << " ";
	}
	cout << "\n";

	for (int i = 0; i < input - 1; i++)
	{
		for (int j = 0; j < 4 * input - 2; j++)
		{
			if (j > 4 * input - 5 - i)
				continue;
			if (j == i + 1 ||
				j == i + input||
				j == 3 * input - 4 - i||
				j == 4 * input - 5 - i)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = input - 3; i >= 0 ; i--)
	{
		for (int j = 0; j < 4 * input - 2; j++)
		{
			if (j > 4 * input - 5 - i)
				continue;
			if (j == i + 1 ||
				j == i + input||
				j == 3 * input - 4 - i||
				j == 4 * input - 5 - i)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int j = 0; j < 4 * input - 3; j++)
	{
		if (input > j || 3 * input - 4 < j)
			cout << "*";
		else
			cout << " ";
	}
}