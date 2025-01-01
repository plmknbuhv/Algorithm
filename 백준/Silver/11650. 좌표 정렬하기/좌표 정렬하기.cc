#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> Vector2;

int compare(const void* a, const void* b)
{
    int x1 = ((Vector2*)(a))->first;
    int y1 = ((Vector2*)(a))->second;
    int x2 = ((Vector2*)(b))->first;
    int y2 = ((Vector2*)(b))->second;

    if (x1 < x2)
        return -1;
    else if (x1 == x2)
        if (y1 < y2)
            return -1;

    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count;
    cin >> count;

    vector<Vector2> arr = {};

    for (int i = 0; i < count; ++i)
    {
        int temp1;
        int temp2;
        cin >> temp1 >> temp2;
        arr.emplace_back(temp1,temp2);
    }

    qsort(&arr[0], arr.size(), sizeof(arr[0]), compare);


    for (int i = 0; i < count; ++i)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}
