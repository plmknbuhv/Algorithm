#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

char MO[5]  = { 'a', 'e', 'i', 'o', 'u' };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		string input;
		cin >> input;

		if (input.compare("end") == 0)
			break;

		bool fisrtCondition = false; // 모음이 들어갔는지
		
		bool secondCondition = true; // 3글자 연속이 되었는지
		int cnt = -1;
		bool isMoPrev = false;

		bool thirdCondition = true; // 2글자 연속이 아니거나 oo ee 연속일 경우
		char Co = ' ';

		for (int i = 0; i < input.length(); i++)
		{
			bool isMo = false;
			for (int j = 0; j < 5; j++)
			{
				if (input[i] == MO[j])
				{
					isMo = true;
					fisrtCondition = true;
					break;
				}
			}

			if (isMo == isMoPrev)
			{
				cnt++;
				if (cnt >= 2)
					secondCondition = false;
			}
			else
			{
				cnt = 0;
				isMoPrev = isMo;
			}

			if (Co != 'e' && Co != 'o' && Co == input[i])
			{
				thirdCondition = false;
			}
			Co = input[i];

		}

		
		if (fisrtCondition && secondCondition && thirdCondition)
			cout << '<' << input << '>' << " " << "is acceptable." << '\n';
		else
			cout << '<' << input << '>' << " " << "is not acceptable." << '\n';


	}
}

