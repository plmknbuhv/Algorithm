#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int input;

int main() {
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		if (i % 2 == 1)
			cout << " ";

		for (int j = 0; j < input; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
}