#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main() {
	string a, b;
	long long x = 0, y = 0;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		x += a[i] - '0';
	}

	for (int i = 0; i < b.length(); i++)
	{
		y += b[i] - '0';
	}

	cout << x * y << endl;
}