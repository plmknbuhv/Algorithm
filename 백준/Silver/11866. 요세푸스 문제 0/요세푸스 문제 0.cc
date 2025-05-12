#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	queue<int> arr;

	int num1, num2;
	vector<int> arr2;

	cin >> num1 >> num2;

	for (int i = 1; i <= num1; i++)
	{
		arr.push(i);
	}

	while (arr.empty() == false)
	{
		for (int i = 1; i < num2; i++)
		{
			int temp = arr.front();
			arr.pop();
			arr.push(temp);
		}

		arr2.push_back(arr.front());
		arr.pop();
	}
	cout << "<" << arr2[0];
	for (int i = 1; i < num1; i++)
	{
		cout << ", " << arr2[i];
	}
	cout << ">";
}