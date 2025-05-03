#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int cnt;
char* arr;

bool Check(char c)
{
	int count = 0;
	for (int i = 0; i < cnt; i++)
	{
		if (arr[i] == c)
			count++;
	}

	return count >= 5;
}

int main() {
	cin >> cnt;
	arr = new char[cnt];
	vector<char> cArr;

	for (int i = 0; i < cnt; i++)
	{
		string temp;
		cin >> temp;
		arr[i] = temp[0];
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		if (Check(i))
			cArr.push_back(i);
	}

	if (cArr.size() == 0)
		cout << "PREDAJA";
	else
	{
		for (int i = 0; i < cArr.size(); i++)
		{
			cout << cArr[i];
		}
	}
}