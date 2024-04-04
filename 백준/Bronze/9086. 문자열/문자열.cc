#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    int a;
    char c [1000];

    scanf("%d", &a);
    for (size_t i = 0; i < a; i++)
    {
        scanf("%s", &c);
        printf("%c%c \n", c[0], c[strlen(c) - 1]);
    }

    return 0;
}