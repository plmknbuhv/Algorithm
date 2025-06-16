#include<iostream>
#include<vector>
#include<string>
#include <charconv>
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
	map<int, string> dic1;
	map<string, int> dic2;

	cin >> n >> m;

	for (long long i = 0; i < n; i++)
	{
		cin >> input;
		dic1[i + 1] = input;
		dic2[input] = i + 1;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (input[0] - '0' >= 1 && input[0] - '0' <= 9)
			cout << dic1[stoi(input)] << "\n";
		else
			cout << dic2[input] << "\n";
	}
}