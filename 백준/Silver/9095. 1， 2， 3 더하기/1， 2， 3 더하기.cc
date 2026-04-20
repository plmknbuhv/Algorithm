#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int DP[1000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	for (int i = 4; i < 12; i++)
	{
		int result = DP[i - 1];
		result += DP[i - 2];
		result += DP[i - 3];

		DP[i] = result;
	}

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		cout << DP[N] << '\n';
	}
}

