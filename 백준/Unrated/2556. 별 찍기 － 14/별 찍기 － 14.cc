#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int a;

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		for (size_t i = 0; i < a; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}