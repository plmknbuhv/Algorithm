#include <iostream>
#include <stack>
using namespace std;


int main()
{
	int input;
	stack<int> stststst;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		int temp;
		cin >> temp;
		if (temp==0)
			stststst.pop();
		else
			stststst.push(temp);
	}

	int result = 0;
	while (stststst.empty() == false)
	{
		result += stststst.top();
		stststst.pop();
	}

	cout << result;
}