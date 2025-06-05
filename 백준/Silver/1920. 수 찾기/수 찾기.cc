#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool BFind(int num, vector<int>& arr)
{
	int left = 0, right = arr.size() - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > num) // 내가 찾을 값이 아래에 있음 
			right = mid-1;
		else if (arr[mid] < num)
			left = mid + 1;
		else if (arr[mid] == num)
			return true;
	}

	return false;
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
		cout << BFind(input, arr) << "\n";
	}
}