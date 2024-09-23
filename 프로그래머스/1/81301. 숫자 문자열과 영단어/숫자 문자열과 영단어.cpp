#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
string strArr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int solution(string s) {
    string input = s;

    for (int i = 0; i < 10; ++i)
    {
        if (input.find(strArr[i]) != string::npos)
        {
            int index = input.find(strArr[i]);

            input.erase(index, strArr[i].length());

            input.insert(index, to_string(i));

            i--;
        }
    }

    int answer = stoi(input);
    return answer;
}