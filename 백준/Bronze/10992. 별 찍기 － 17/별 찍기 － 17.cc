#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int input;

int main() {
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input * 2 - 1; j++)
		{
			if (i == input - 1)
				cout << "*";
			else if (j == input - i - 1 || j == input + i - 1)
				cout << "*";
			else if (j < input + i - 1)
				cout << " ";
		}
		cout << "\n";
	}
}