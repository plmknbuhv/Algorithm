#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int num, cnt = 0, temp = 0;
	cin >> num;
	
	while (true)
	{
		temp++;

		int tempCnt = 0;
		int temptemp = temp;
		while (true)
		{
			if (temptemp == 0)
				break;
			if (temptemp % 10 == 6)
			{
				tempCnt++;
				if (tempCnt == 3)
					break;
			}
			else
				tempCnt = 0;
			temptemp /= 10;
		}

		if (tempCnt >= 3)
		{
			cnt++;
			if (cnt == num)
				break;
		}
	}

	cout << temp;
}