#include <iostream>

using namespace std;

int main()
{

	for (int i = 0;; i++)
	{
		int L, P, V;
		int result = 0;
		cin >> L >> P >> V;
		// 예외 처리
		if (L == 0 && P == 0 && V == 0)
			break;
		
		result += (V / P) * L;
		V -= (V / P) * P;
		if (V > L)
			result += L;
		else
			result += V;

		cout << "Case " << i+1 << ": " << result << endl;
	}

	
}