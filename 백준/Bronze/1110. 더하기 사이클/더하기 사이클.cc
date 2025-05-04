#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int input;

int Check(int num)
{
	int temp = 0;

	temp += (num % 10 + num / 10) % 10;
	temp += (num % 10) * 10;

	if (temp == input)
		return 1;

	return Check(temp) + 1;
}

int main() {
	cin >> input;

	cout << Check(input);
}