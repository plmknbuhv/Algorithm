#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int D(int input)
{
	return (input * 2) % 10000;
}

int S(int input)
{
	int t = input - 1;
	if (t == -1)
		t = 9999;

	return t;
}

int L(int input)
{
	int t = input / 1000;
	int num = input % 1000;
	num *= 10;
	num += t;
	return num;
}

int R(int input)
{
	int num = input % 10;
	num *= 1000;
	int t = input / 10;

	num += t;
	return num;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int input, input2;
		cin >> input >> input2; 
		bool visit[10001] = {};

		queue<string> que;
		queue<int> queNum;
		que.push("");
		queNum.push(input);

		while (que.empty() == false)
		{
			string str = que.front();
			int num = queNum.front();
			que.pop();
			queNum.pop();

			if (num == input2)
			{
				cout << str << '\n';
				break;
			}

			int DNum = D(num);
			if (visit[DNum] == false)
			{
				visit[DNum] = true;
				que.push(str + "D");
				queNum.push(DNum);
			}

			int SNum = S(num);
			if (visit[SNum] == false)
			{
				visit[SNum] = true;
				que.push(str + "S");
				queNum.push(SNum);
			}

			int LNum = L(num);
			if (visit[LNum] == false)
			{
				visit[LNum] = true;
				que.push(str + "L");
				queNum.push(LNum);
			}

			int RNum = R(num);
			if (visit[RNum] == false)
			{
				visit[RNum] = true;
				que.push(str + "R");
				queNum.push(RNum);
			}
		}
	}
}

