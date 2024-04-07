#include <stdio.h>

int main(void)
{
	int a, result = 0; 
	int b[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		
		b[i] = a % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int c = 0;
		for (int j = i + 1; j < 10; j++)
		{
			if (b[i] == b[j])
			{
				c++;
			}
		}

		if (c == 0)
		{
			result++;
		}
	}

	printf("%d", result);

	return 0;
}