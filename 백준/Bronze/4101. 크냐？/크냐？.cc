#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    int a[2];

    while (true)
    {
        scanf("%d %d", &a[0], &a[1]);
        if (a[0] == 0)
        {
            break;
        }
        else if (a[0] > a[1])
        {
            printf("Yes\n");
        }
        else if (a[0] <= a[1])
        {
            printf("No\n");
        }
    }
}