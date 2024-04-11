#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);


    while (true)
    {
        scanf("%d %d", &a, &b);
        if (a <= 0)
        {
            printf("비와이");
            break;
        }
    }
}