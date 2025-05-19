#include <iostream>
#include <queue>
#include <stack>
using namespace std;

bool Stack(string input)
{
	stack<char> arr;
	for (int j = 0; j < input.length(); j++)
	{
		if (input[j] == 'A')
		{
			if (!arr.empty() && arr.top() == 'A')
				arr.pop();
			else
				arr.push('A');
		}
		else if (input[j] == 'B')
		{
			if (!arr.empty() && arr.top() == 'B')
				arr.pop();
			else
				arr.push('B');
		}
	}

	return arr.empty();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int cnt, result = 0;
	string input;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		result += (Stack(input) ? 1 : 0);
	}

	cout << result;
}