#include <stdio.h>

int main(void)
{
	int a[6];
	int b[6] = {1, 1, 2, 2 ,2, 8};
	int c[6] = { 0, 0, 0, 0, 0, 0 };

	scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);

	for (int i = 0; i < 6; i++)
	{
		if (a[i] > b[i])
		{
			a[i]--;
			c[i]--;
			i--;
		}
		else if (a[i] < b[i])
		{
			a[i]++;
			c[i]++;
			i--;
		}
	}

	printf("%d %d %d %d %d %d",c[0], c[1], c[2], c[3], c[4], c[5]);

	return 0;
}