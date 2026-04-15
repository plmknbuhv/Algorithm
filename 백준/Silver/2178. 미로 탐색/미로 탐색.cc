#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visit[101][101] = {};
int arr[101][101] = {};

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

	queue<pair<int, int>> que;
	queue<int> cntQue;
	que.push({ 0, 0 });
	cntQue.push(1);

	while (que.empty() == false)
	{
		int cnt = cntQue.front();
		pair<int, int> num = que.front();
		int x = num.first;
		int y = num.second;

		que.pop();
		cntQue.pop();

		if (x == N-1 && y == M-1)
		{
			cout << cnt;
			break;
		}

		if (x - 1 >= 0 && visit[x - 1][y] == false && arr[x - 1][y] == 1)
		{
			visit[x - 1][y] = true;
			que.push({ x-1, y });
			cntQue.push(cnt+1);
		}
		if (y - 1 >= 0 && visit[x][y-1] == false && arr[x][y-1] == 1)
		{
			visit[x][y-1] = true;
			que.push({ x, y - 1 });
			cntQue.push(cnt + 1);
		}

		if (x + 1 < N && visit[x + 1][y] == false && arr[x + 1][y] == 1)
		{
			visit[x + 1][y] = true;
			que.push({ x + 1, y });
			cntQue.push(cnt + 1);
		}
		if (y + 1 < M && visit[x][y + 1] == false && arr[x][y + 1] == 1)
		{
			visit[x][y+1] = true;
			que.push({ x, y + 1 });
			cntQue.push(cnt + 1);
		}
	}
}