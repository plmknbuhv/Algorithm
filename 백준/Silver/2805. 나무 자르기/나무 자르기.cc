#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> tree;

long long FindB(long long n, long long m)
{
	long long left = 1, right = n, mid = 0, sum;
	while (left <= right)
	{
		mid = (left + right) / 2;
		sum = 0;
		for (auto t : tree)
		{
			if (t > mid)
				sum += t - mid;
		}

		if (sum >= m)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return right;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, m;
	cin >> n >> m;
	tree.resize(n);

	for (long long i = 0; i < n; i++)
	{
		cin >> tree[i];
	}
	sort(tree.begin(), tree.end());
	cout << FindB(tree.back(), m);
}