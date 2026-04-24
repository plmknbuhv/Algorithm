#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

pair<int, int> arr[100001] = {};

bool cmp(pair<int, int> pair1, pair<int, int> pair2)
{
	if (pair1.second != pair2.second)
		return pair1.second < pair2.second;
	else
		return pair1.first < pair2.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;

		arr[i].first = x;
		arr[i].second = y;
	}

	sort(arr, arr + N, cmp);

	for (int i = 0; i < N; i++)
	{
		cout << arr[i].first << " " << arr[i].second << '\n';
	}
}
			
