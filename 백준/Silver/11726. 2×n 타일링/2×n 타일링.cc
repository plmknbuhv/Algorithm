#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int DP[10000] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;

	int input;
	cin >> input;

	for (int i = 3; i <= input; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2];
		DP[i] %= 10007;
	}


	cout << DP[input];
}

