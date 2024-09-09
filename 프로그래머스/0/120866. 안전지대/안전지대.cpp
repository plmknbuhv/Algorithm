#include <iostream>
#include <vector>

using namespace std;

int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int total;

int solution(vector<vector<int>> board)
{
    int n = board.size();
    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.size(); ++j)
        {
            if (board[i][j] == 1)
            {
                for (int k = 0; k < 8; ++k)
                {
                    if (i + dx[k] >= 0 && i + dx[k] < n && j + dy[k] >= 0 && j + dy[k] < n)
                    {
                        if (board[i + dx[k]][j + dy[k]] != 1)
                        {
                            board[i + dx[k]][j + dy[k]]  = 5;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board.size(); ++j) {
            if (board[i][j] == 0)
            {
                total++;
            }
        }
    }


    int answer = total;
    return answer;
}