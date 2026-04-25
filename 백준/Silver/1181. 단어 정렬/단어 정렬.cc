#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

string arr[20001] = {};

bool cmp(string str1, string str2)
{
	if (str1.length() != str2.length())
		return str1.length() < str2.length();
	else
		return str1 < str2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int  i = 0; i < N; i++)
	{
		string input;
		bool isContain = false;
		cin >> input;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == input)
			{
				isContain = true;
				break;
			}
		}

		if (isContain == false)
			arr[i] = input;
		else
		{
			N--;
			i--;
		}
	}

	sort(arr, arr + N, cmp);

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << '\n';
	}
}
			
