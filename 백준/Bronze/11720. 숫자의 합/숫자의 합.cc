#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, c, result;
	result = 0;
	char b[100];
	
	scanf("%d", &a);
	scanf("%s", b);

	for (int i = 0; i < a; i++)
	{
		c = (int)(b[i] - '0');
		result += c;
	}
	printf("%d", result);
}