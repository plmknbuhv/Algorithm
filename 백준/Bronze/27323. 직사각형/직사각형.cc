#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    long long int a[2];

    scanf("%d", &a[0]);
    scanf("%d", &a[1]);

    printf("%d", a[0] * a[1]);
}