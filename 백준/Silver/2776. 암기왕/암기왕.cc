#include <iostream>
#include <utility>
#include <algorithm>
#include <unordered_map>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T;
    cin >> T;

   for (long i = 0; i < T; i++)
   {
       int N, M, temp;
       unordered_map<int, int> Map;
       cin >> N;
       for (int i = 0; i < N; i++)
       {
           cin >> temp;
           Map[temp]++;
       }
       cin >> M;
       for (int i = 0; i < M; i++)
       {
           cin >> temp;
           if (Map[temp] != 0)
               cout << 1 << '\n';
           else
               cout << 0 << '\n';
       }
   }
}
