#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> arr;
	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
		arr.push(i+1);

	while (arr.size() != 1)
	{
		arr.pop();
		arr.push(arr.front());
		arr.pop();
	}

	cout << arr.front();
}