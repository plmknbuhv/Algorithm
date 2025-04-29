#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

bool Cmp(string str1, string str2)
{
	if (str1.length() == str2.length())
		return str1 < str2;
	else
		return str1.length() < str2.length();
}

int main() {
	int cnt;
	cin >> cnt;
	vector<string> arr;

	for (int i = 0; i < cnt; i++)
	{
		string temp;
		cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end(), Cmp);

	string prev = arr[0];
	cout << prev << endl;
	for (string str : arr)
	{
		if (str.compare(prev) != 0)
			cout << str << endl;

		prev = str;
	}
}