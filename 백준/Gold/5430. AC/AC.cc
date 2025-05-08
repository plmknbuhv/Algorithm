#include<iostream>
#include <stack>
#include <string>
#include <queue>
#include <deque>
using namespace std;

void AC()
{
	string order, nums, num;
	int numsize;
	bool isReverse = false;
	deque<int> deq;
	cin >> order >> numsize >> nums;
	for (int i = 0; i < nums.length(); i++)
	{
		if (nums[i] >= '0' && nums[i] <= '9')
		{
			num += nums[i];
		}
		else if (nums[i] == ',' || nums[i] == ']')
		{
			if (!num.empty())
			{
				deq.push_back(stoi(num));
				num = "";
			}
		}
	}

	for (int i = 0; i < order.length(); i++)
	{
		if (order[i] == 'R')
			isReverse = !isReverse;
		else if (order[i] == 'D')
		{
			if (deq.empty())
			{
				cout << "error" << "\n";
				return;
			}

			if (isReverse)
				deq.pop_back();
			else
				deq.pop_front();

			numsize--;
		}
	}

	cout << '[';
	if (!deq.empty())
	{
		if (!isReverse)
		{
			cout << deq.front();
			deq.pop_front();
			while (!deq.empty())
			{
				cout << ',' << deq.front();
				deq.pop_front();
			}
		}
		else
		{
			cout << deq.back();
			deq.pop_back();
			while (!deq.empty())
			{
				cout << ',' << deq.back();
				deq.pop_back();
			}
		}
	}
	cout << ']' << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		AC();
	}
}