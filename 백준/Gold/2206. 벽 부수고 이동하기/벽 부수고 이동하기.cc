#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[1000][1000];
int visit[1000][1000] = {};

queue<pair<int, int>> posQue;
queue<bool> breakQue;
queue<int> cntQue;

void Move(int x, int y, bool isBreaked, int cnt)
{
	if (arr[x][y] == 0) // 그냥 가기
	{
		if (isBreaked)
			visit[x][y] = 1;
		else
			visit[x][y] = 2;

		cntQue.push(cnt+1);
		posQue.push({ x, y });
		breakQue.push(isBreaked);
	}
	else if (arr[x][y] == 1 && isBreaked == false) // 벽 뚫기
	{
		visit[x][y] = 1;
		cntQue.push(cnt + 1);
		posQue.push({ x, y });
		breakQue.push(true);
	}
}

int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = input[j] - '0';
		}
	}

	posQue.push({0, 0});
	breakQue.push(false);
	cntQue.push(1);

	while (posQue.empty() == false)
	{
		int x = posQue.front().first;
		int y = posQue.front().second;
		bool isBreaked = breakQue.front();
		int cnt = cntQue.front();
		cntQue.pop();
		posQue.pop();
		breakQue.pop();

		if (x == N-1 && y == M-1)
		{
			cout << cnt;
			return 0;
		}

		if (x - 1 >= 0 && 
			(isBreaked && visit[x - 1][y] == 0 || isBreaked == false && visit[x - 1][y] <= 1))
		{
			Move(x - 1, y, isBreaked, cnt);
		}
		if (y - 1 >= 0 &&
			(isBreaked && visit[x][y-1] == 0 || isBreaked == false && visit[x][y-1] <= 1))
		{
			Move(x, y - 1, isBreaked, cnt);
		}

		if (x + 1 < N &&
			(isBreaked && visit[x+1][y] == 0 || isBreaked == false && visit[x+1][y] <= 1))
		{
			Move(x + 1, y, isBreaked, cnt);
		}
		if (y + 1 < M &&
			(isBreaked && visit[x][y + 1] == 0 || isBreaked == false && visit[x][y + 1] <= 1))
		{
			Move(x, y + 1, isBreaked, cnt);
		}
	}

	cout << -1;
}

