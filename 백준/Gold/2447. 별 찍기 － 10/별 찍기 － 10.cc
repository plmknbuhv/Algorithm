#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int input;

void Star(int i, int j, int num)
{
	if (num == 1)
	{
		cout << "*";
		return;
	}

	if (i / (num / 3) % 3 == 1 && j / (num / 3) % 3 == 1)
		cout << " ";
	else
		Star(i, j, num / 3);
}


int main() {
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			Star(i, j, input);;
		}
		cout << "\n";
	}
}