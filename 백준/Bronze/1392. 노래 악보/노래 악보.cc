#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int cnt1, cnt2;
	cin >> cnt1 >> cnt2;

	int* arr = new int[cnt1];
	
	for (int i = 0; i < cnt1; i++)
		cin >> arr[i];

	for (int i = 0; i < cnt2; i++)
	{
		int input;
		cin >> input;

		for (int i = 0; i < cnt1; i++)
		{
			input -= arr[i];
			if (input < 0)
			{
				cout << (i+1) << endl;
				break;
			}
		}
	}
}