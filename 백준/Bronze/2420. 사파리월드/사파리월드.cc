#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    if (a < b) {
        printf("%lld", (b - a));
    }
    else {
        printf("%lld", (a - b));
    }
}