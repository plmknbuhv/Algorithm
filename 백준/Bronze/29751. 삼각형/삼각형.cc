#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    float a[2];

    scanf("%f %f", &a[0], &a[1]);

    printf("%.1f", a[0] * a[1] / 2);
}