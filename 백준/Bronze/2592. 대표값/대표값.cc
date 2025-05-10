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
	      
	pair<int, int> arr1;
	int arr2[1001] = {};
	int input, result = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		arr2[input]++;
		result += input;

		if (arr2[input] > arr1.second)
		{
			arr1.first = input;
			arr1.second = arr2[input];
		}
	}

	cout << result / 10 << endl;
	cout << arr1.first;
}