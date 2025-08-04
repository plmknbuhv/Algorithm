#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;

    int dp[50001];
    dp[0] = 0;

    for (int i = 1; i <= N; i++) 
    {
        dp[i] = i;
        for (int j = 1; j * j <= i; j++) 
        {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[N] << '\n';
    return 0;
}