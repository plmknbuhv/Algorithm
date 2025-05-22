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
	
	deque<int> arr;
	int cnt, input;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		if (input == 1)
		{
			int temp;
			cin >> temp;
			arr.push_front(temp);
		}
		else if (input == 2)
		{
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		else if (input == 3)
		{
			if (arr.empty())
				cout << -1 << "\n";
			else
			{
				cout << arr.front() << "\n";
				arr.pop_front();
			}
		}
		else if (input == 4)
		{
			if (arr.empty())
				cout << -1 << "\n";
			else
			{
				cout << arr.back() << "\n";
				arr.pop_back();
			}
		}
		else if (input == 5)
			cout << arr.size() << "\n";
		else if (input == 6)
			cout << (arr.empty() ? 1 : 0) << "\n";
		else if (input == 7)
			cout << (arr.empty() ? -1 : arr.front()) << "\n";
		else if (input == 8)
			cout << (arr.empty() ? -1 : arr.back()) << "\n";
	}
}