#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BFind(int num, vector<int>& arr)
{
	int a = lower_bound(arr.begin(), arr.end(), num) - arr.begin();
	int b = upper_bound(arr.begin(), arr.end(), num) - arr.begin();

	return b - a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt, input;
	vector<int> arr;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		cout << BFind(input, arr) << " ";
	}
}