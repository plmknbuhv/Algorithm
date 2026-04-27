#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int N;
int arr[10001] = {};
int DP[10001][3] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	DP[0][0] = 0;
	DP[0][1] = 0;
	DP[0][2] = 0;
	DP[1][0] = arr[1];
	DP[1][1] = 0;
	DP[1][2] = 0;

	for (int i = 2; i <= N; i++)
	{
		DP[i][0] = max(DP[i - 2][0], DP[i - 2][1]) + arr[i];
		DP[i][1] = DP[i - 1][0] + arr[i];
	}

	cout << max(max(DP[N][0], DP[N][1]), DP[N][2]);
}
			
