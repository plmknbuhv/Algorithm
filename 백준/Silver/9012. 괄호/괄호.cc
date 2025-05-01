#include <iostream>
#include <stack>
using namespace std;

bool CheckStack(string str)
{
	stack<char> arr;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			arr.push('(');
		else
		{
			if (arr.size() == 0)
				return false;
			else
				arr.pop();
		}
	}

	if (arr.size() == 0)
		return true;
	else
		return false;
}

int main()
{
	int cnt;
	string temp;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> temp;
		cout << (CheckStack(temp) ? "YES" : "NO") << endl;
	}
}