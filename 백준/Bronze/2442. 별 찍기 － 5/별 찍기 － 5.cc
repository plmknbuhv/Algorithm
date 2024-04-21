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
        for (int j = 1; j < a - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}