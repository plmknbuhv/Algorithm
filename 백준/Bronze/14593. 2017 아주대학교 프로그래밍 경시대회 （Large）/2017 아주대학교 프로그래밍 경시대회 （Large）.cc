#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

class Person
{
public:
	int S, C, L;
	int num;
	Person(int num)
	{
		this->num = num;
		cin >> S >> C >> L;
	}
};

bool cmp(Person person1, Person person2)
{
	if (person1.S == person2.S)
	{
		if (person1.C == person2.C)
		{
			return person1.L < person2.L;
		}
		else
			return person1.C < person2.C;
	}
	else
		return person1.S > person2.S;
}

int main() {
	int input;
	int S, C, L;
	vector<Person> people;

	cin >> input;

	for (int  i = 0; i < input; i++)
	{
		people.push_back(Person(i+1));
	}

	sort(people.begin(), people.end(), cmp);

	cout << people[0].num;
}