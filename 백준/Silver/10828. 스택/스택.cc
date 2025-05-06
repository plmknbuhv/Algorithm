#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main() {
	stack<int> arr;
	int cnt;
	string input;

	cin >> cnt;
	cin.ignore();

	for (int i = 0; i < cnt; i++)
	{
		getline(cin, input);

		if (input.compare("top") == 0)
		{
			if (arr.empty())
				cout << "-1" << endl;
			else
				cout << arr.top() << endl;
		}
		else if (input.compare("size") == 0)
			cout << arr.size() << endl;
		else if (input.compare("empty") == 0)
			cout << (arr.empty() ? 1 : 0) << endl;
		else if (input.compare("pop") == 0) 
		{
			if (arr.empty())
				cout << "-1" << endl;
			else
			{
				cout << arr.top() << endl;
				arr.pop();
			}
		}
		else
		{
			int temp = 0;
			for (int i = 5; i < input.length(); i++)
			{
				temp *= 10;
				temp += input[i] - '0';
			}

			arr.push(temp);
		}
	}
}