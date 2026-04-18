#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 0은 더러운
// 1은 벽
// 2은 닦은거

int dirY[4] = { -1, 0, 1, 0 };
int dirX[4] = { 0, 1, 0, -1 };

int grid[100][100] = {};

int r, c, d;

void Rotate()
{
	if (--d == -1)
		d = 3;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, result = 0;
	cin >> N >> M;

	cin >> r >> c >> d;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> grid[i][j];


	while (true)
	{
		if (grid[r][c] == 0)
		{
			result++;
			grid[r][c] = 2;
		}

		if (grid[r - 1][c] == 0 || grid[r + 1][c] == 0 || grid[r][c - 1] == 0 || grid[r][c + 1] == 0)
		{
			while (true)
			{
				Rotate();
				if (grid[r + dirY[d]][c + dirX[d]] == 0)
				{
					r += dirY[d];
					c += dirX[d];
					break;
				}
			}
		}
		else
		{
			if (grid[r - dirY[d]][c - dirX[d]] == 1)
			{
				break;
			}
			else
			{
				r -= dirY[d];
				c -= dirX[d];
			}
		}
	}

	cout << result;
}

