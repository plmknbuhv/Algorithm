#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctime>
#include <string.h>

int main(void)
{
    int a;

    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        printf(" ");
    }
    printf("*\n");
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 2; j < a - i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j <= i * 2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    return 0;
}   