#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person
{
public:
    Person(int x, int y) :x(x), y(y), num(1) {};
    int x;
    int y;
    int num;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt, x, y;
    vector<Person> vec; 

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> x >> y;
        vec.push_back(Person(x, y));
    }

    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < cnt; j++)
        {
            if (vec[i].x < vec[j].x && vec[i].y < vec[j].y)
                vec[i].num++;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << vec[i].num << " ";  
    }
}
