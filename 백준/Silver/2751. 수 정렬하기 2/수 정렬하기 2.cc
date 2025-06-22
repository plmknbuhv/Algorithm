#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	long long cnt, input;
	cin >> cnt;

	long long*arr = new long long[cnt];
	for (long long i = 0; i < cnt; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + cnt);
	for (long long i = 0; i < cnt; i++)
	{
		cout << arr[i] << "\n";
	}
}