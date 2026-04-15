#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visit[100001] = {};

int main()
{
	int N, K;
	cin >> N >> K;

	queue<int> que;
	queue<int> cntQue;
	que.push(N);
	cntQue.push(0);

	while (que.empty() == false)
	{
		int num = que.front();
		int cnt = cntQue.front();
		que.pop();
		cntQue.pop();

		if (num == K)
		{
			cout << cnt;
			break;
		}

		if (num - 1 >= 0 && visit[num - 1] == false)
		{
			visit[num - 1] = true;
			que.push(num - 1);
			cntQue.push(cnt+1);
		}
		if (num + 1 < 100001 && visit[num + 1] == false)
		{
			visit[num + 1] = true;
			que.push(num + 1);
			cntQue.push(cnt + 1);
		}
		if (num * 2 < 100001 && visit[num * 2] == false)
		{
			visit[num * 2] = true;
			que.push(num * 2);
			cntQue.push(cnt + 1);
		}
	}
}