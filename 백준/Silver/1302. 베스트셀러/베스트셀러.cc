#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, m;
	string input;
	map<string, int> dic;

	cin >> n;

	for (long long i = 0; i < n; i++)
	{
		cin >> input;
		dic[input]++;
	}
	
	string result;
	int num = 0;
	for (auto d : dic)
	{
		if (num < d.second)
		{
			num = d.second;
			result = d.first;
		}
	}

	cout << result;
}