#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class Person
{
public:
    Person(int age, string name, int num) : age(age), name(name), num(num) {};
    int age;
    int num;
    string name;
};

bool cmp(Person person1, Person person2)
{
    if (person1.age != person2.age)
    {
        return person1.age < person2.age;
    }
    else
    {
        return person1.num < person2.num;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    string name;
    int age;
    vector<Person> arr;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> age >> name;
        arr.push_back(Person(age, name, i));
    }

    sort(arr.begin(), arr.end(), cmp);

    for (auto p : arr)
    {
        cout << p.age << " " << p.name << endl;
    }
}
