#include<iostream>
#include <stack>
#include <string>
#include <queue>
#include <deque>
using namespace std;
int answer = 1000;
string* arr;
int hieght, width;

int ChangeChess(char symbol1, char symbol2, int y, int x)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0
				&& arr[i+y][j+x] == symbol1)
				cnt++;
			else if ((i + j) % 2 == 1
				&& arr[i+y][j+x] == symbol2)
				cnt++;

			if (answer < cnt || answer == 0)
				return 1000;
		}
	}

	return cnt;
}

void Chess(int y, int x)
{
	int temp = ChangeChess('W', 'B', y, x);
	if (answer > temp)
		answer = temp;
	temp = ChangeChess('B', 'W', y, x);
	if (answer > temp)
		answer = temp;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> hieght >> width;
	arr = new string[hieght];
	for (int i = 0; i < hieght; i++)
		cin >> arr[i];

	for (int i = 0; hieght - i >= 8; i++)
	{
		for (int j = 0; width - j >= 8; j++)
		{
			if (answer == 0) break;
			Chess(i, j);
		}
	}
	cout << answer;
}