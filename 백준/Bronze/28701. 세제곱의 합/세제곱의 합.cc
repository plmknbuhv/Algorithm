#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctime>

int main(void)
{
    int a, result = 0;

    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
    {
        result += i;
    }

    printf("%d\n", result);
    printf("%d\n", result * result);
    printf("%d\n", result * result);

    return 0;
}