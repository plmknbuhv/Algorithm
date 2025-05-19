#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	stack<int> arr;
	int cnt, input;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		if (input == 1)
		{
			int temp;
			cin >> temp;
			arr.push(temp);
		}
		else if (input == 2)
		{
			if (arr.empty())
				cout << -1 << "\n";
			else
			{
				cout << arr.top() << "\n";
				arr.pop();
			}
		}
		else if (input == 3)
		{
			cout << arr.size() << "\n";
		}
		else if (input == 4)
		{
			cout << (arr.empty() ? 1 : 0) << "\n";
		}
		else if (input == 5)
		{
			if (arr.empty())
				cout << -1 << "\n";
			else
				cout << arr.top() << "\n";
		}
	}
}