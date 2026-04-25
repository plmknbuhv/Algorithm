#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int N, M;
int arr[9] = {};
bool visit[9] = {};

void Check(int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";
		cout << '\n';

		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (visit[i] == false)
		{
			arr[cnt] = i;
			visit[i] = true;
			Check(cnt+1);
			visit[i] = false;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		arr[0] = i;
		visit[i] = true;
		Check(1);
		visit[i] = false;
	}
}
			
