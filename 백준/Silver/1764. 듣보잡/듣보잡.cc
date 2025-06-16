#include<iostream>
#include<vector>
#include<string>
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
	vector<string> arr;

	cin >> n >> m;

	for (long long i = 0; i < n; i++)
	{
		cin >> input;
		dic[input]++;
	}

	for (long long i = 0; i < n; i++)
	{
		cin >> input;
		dic[input]++;
	}

	for (auto o : dic)
	{
		if (o.second == 2)
			arr.push_back(o.first);
	}
	
	cout << arr.size() << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}