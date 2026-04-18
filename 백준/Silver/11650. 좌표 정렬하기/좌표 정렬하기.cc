#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

pair<int, int> arr[100001];

bool cmp(pair<int, int> numPair1, pair<int, int> numPair2)
{
	if (numPair1.first != numPair2.first)
		return numPair1.first < numPair2.first;
	else
		return numPair1.second < numPair2.second;
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
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr, arr+N, cmp);


	for (int i = 0; i < N; i++)
	{
		cout << arr[i].first << " " << arr[i].second << '\n';
	}
}

