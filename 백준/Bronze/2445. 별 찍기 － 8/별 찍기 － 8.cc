#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctime>
#include <string.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 2; j < (a - i) * 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0, b = a - 1;  i < b; i++)
    {
        for (int j = 0; j < b - i; j++)
        {
            printf("*");
        }
        for (int j = -2; j < i * 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < b - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}   