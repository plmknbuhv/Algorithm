#include<iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> arr;
	int cnt;
	string input;

	cin >> cnt;
	cin.ignore();

	for (int i = 0; i < cnt; i++)
	{
		getline(cin, input);

		if (input.compare("front") == 0)
		{
			if (arr.empty())
				cout << -1;
			else
				cout << arr.front();

			cout << "\n";
		}
		else if (input.compare("back") == 0)
		{
			if (arr.empty())
				cout << -1;
			else
				cout << arr.back();

			cout << "\n";
		}
		else if (input.compare("empty") == 0)
			cout << (arr.empty() ? 1 : 0) << "\n";
		else if (input.compare("size") == 0)
			cout << arr.size() << "\n";
		else if (input.compare("pop") == 0)
		{
			if (arr.empty())
				cout << -1;
			else
			{
				cout << arr.front();
				arr.pop();
			}

			cout << "\n";
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