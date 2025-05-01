#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int cnt, sum1 = 0, sum2 = 0, input;
	cin >> cnt;
	int* arr = new int[cnt];
	
	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + cnt, greater<int>());

	int count = (cnt > 42) ? 42 : cnt;
	for (int i = 0; i < count; i++)
	{
		sum1 += arr[i];

		if (arr[i] >= 250)
			sum2 += 5;
		else if (arr[i] >= 200)
			sum2 += 4;
		else if (arr[i] >= 140)
			sum2 += 3;
		else if (arr[i] >= 100)
			sum2 += 2;
		else if (arr[i] >= 60)
			sum2 += 1;
	}

	cout << sum1 << " " << sum2;
}