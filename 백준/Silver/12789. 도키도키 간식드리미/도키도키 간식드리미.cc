#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int cnt, count = 1, input;
	cin >> cnt;
	stack<int> arr;

	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		arr.push(input);
		
		while (arr.empty() == false && arr.top() == count) 
		{
			arr.pop();
			count++;
		}
	}

	if (arr.empty())
		cout << "Nice";
	else
		cout << "Sad";
}