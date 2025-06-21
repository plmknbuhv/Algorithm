#include<iostream>
#include <stack>
#include <string>
#include <queue>
#include <deque>
using namespace std;
int answer = -1, input;
bool isSuc;

void Milk(int num, int cnt)
{
	if (isSuc || num < 0)
		return;

	if (num == 0)
	{
		answer = cnt;
		isSuc = true;
		return;
	}


	Milk(num - 5, cnt+1);
	Milk(num - 3, cnt+1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	cin >> input;
	Milk(input, 0);
	cout << answer;
}