#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    char c [1000];
    int i;

    scanf("%s", &c);
    scanf("%d", &i);

    printf("%c", c[i - 1]);

    return 0;
}