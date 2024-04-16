#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctime>

int main(void)
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);


	if (a < b)
	{
		printf("Bus");
	}
	else if (a > b)
	{
		printf("Subway");
	}
	else
	{
		printf("Anything");
	}
}