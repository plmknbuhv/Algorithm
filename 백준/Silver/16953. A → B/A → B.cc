#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;

long long Start, End;

void Check()
{
    queue<long long> numQue;
    queue<long long> cntQue;
    numQue.push(Start);
    cntQue.push(1);

    while (numQue.empty() == false)
    {
        if (numQue.front() > End)
        {
            numQue.pop(); cntQue.pop();
            continue;
        }
        if (numQue.front() == End)
        {
            cout << cntQue.front();
            return;
        }

        numQue.push(numQue.front() * 2); cntQue.push(cntQue.front() + 1);
        numQue.push(numQue.front() * 10 + 1); cntQue.push(cntQue.front() + 1);

        numQue.pop(); cntQue.pop();
    }

    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> Start >> End;

    Check();
}
