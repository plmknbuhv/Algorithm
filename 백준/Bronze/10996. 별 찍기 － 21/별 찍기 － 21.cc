#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int input;

int main() {
	cin >> input;
	for (int i = 0; i < input * 2; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if ((j + i) % 2 == 1)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}
}