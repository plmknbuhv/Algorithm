#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) 
{
    int arr[200] = {};
    int count = 0;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = lines[i][0]; j < lines[i][1]; ++j)
        {
            arr[j + 100]++;
        }
    }

    for (int i = 0; i < 200; ++i)
    {
        if (arr[i] > 1)
        {
            count++;
        }
    }
    
    int answer = count;
    return answer;
}