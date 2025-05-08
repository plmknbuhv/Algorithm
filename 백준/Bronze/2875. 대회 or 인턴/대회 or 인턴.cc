#include<iostream>
#include <stack>
#include <string>
#include <queue>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, K, result = 0;
	cin >> N >> M >> K;

	while (true)
	{
		if (N < 2 || M < 1)
			break;
		N -= 2;
		M -= 1;
		if (N + M < K)
			break;
		result++;
	}

	cout << result;
}