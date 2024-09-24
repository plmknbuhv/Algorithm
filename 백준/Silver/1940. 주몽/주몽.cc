#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    int M;
    int count = 0;

    cin >> N;
    cin >> M;

    int *arr = new int[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (arr[i] + arr[j] == M)
            {
                count++;
            }
        }
    }

    cout << count / 2;

    return 0;
}