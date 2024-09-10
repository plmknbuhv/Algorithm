#include <iostream>
using namespace std;

void push(string &str)
{
    char keep = str[str.size() - 1];
    string temp = str;
    for (int i = 0; i < str.size() - 1; ++i)
    {
        temp[i + 1] = str[i];
    }
    temp[0] = keep;
    str = temp;
}

int solution(string A, string B)
{
    int answer = 0;
    for (int i = 0; i < A.size() + 1; ++i)
    {
        if (A == B)
        {
            break;
        }
        answer++;
        push(A);
        if (A.size() + 1 <= answer)
        {
            answer = -1;
            break;
        }
    }

    return answer;
}