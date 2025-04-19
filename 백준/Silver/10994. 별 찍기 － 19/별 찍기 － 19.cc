#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int input;

void Box(int num)
{
	if (num == 1)
	{
		for (int i = 0; i < 4 * input - 3; i++)
		{
			if (i % 2 == 0)
				cout << "*";
			else
				cout << " ";
		}
		cout << '\n'; 
		return;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4 * input - 3; j++)
		{
			if (i == 0)
			{
				if (!((input - num + 1) * 2 - 1 <= j
					&& (4 * input - 3) - (input - num + 1) * 2 >= j))
				{
					if (j % 2 == 0)
						cout << "*";
					else
						cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			else
			{
				if (!((input - num + 1) * 2 <= j 
					 && (4 * input - 3) - (input - num + 1) * 2 >= j))
				{
					if (j % 2 == 0)
						cout << "*";
					else
						cout << " ";
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << '\n';
	}
	

	Box(num - 1);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4 * input - 3; j++)
		{
			if (i == 0)
			{
				if (!((input - num + 1) * 2 <= j
					&& (4 * input - 3) - (input - num + 1) * 2 >= j))
				{
					if (j % 2 == 0)
						cout << "*";
					else
						cout << " ";
				}
				else
				{
					cout << " ";
				}
			}
			else
			{
				if (!((input - num + 1) * 2 - 1 <= j
					&& (4 * input - 3) - (input - num + 1) * 2 >= j))
				{
					if (j % 2 == 0)
						cout << "*";
					else
						cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		cout << '\n';
	}
	
}

int main() {
	cin >> input;
	Box(input);
}