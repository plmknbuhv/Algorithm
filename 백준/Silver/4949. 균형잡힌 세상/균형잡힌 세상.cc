#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool CheckStack(string str)
{
	stack<char> arr;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			arr.push('(');
		else if (str[i] == '[')
			arr.push('[');
		else if (str[i] == ')')
		{
			if (arr.size() == 0)
				return false;
			else
			{
				if (arr.top() != '(')
					return false;

				arr.pop();
			}
		}
		else if (str[i] == ']')
		{
			if (arr.size() == 0)
				return false;
			else
			{
				if (arr.top() != '[')
					return false;
				
				arr.pop();
			}
		}
	}

	if (arr.size() == 0)
		return true;
	else
		return false;
}

int main()
{
	string temp;

	while (true)
	{
		getline(cin, temp);
		if (temp.compare(".") == 0)
			break;

		cout << (CheckStack(temp) ? "yes" : "no") << endl;
	}
}