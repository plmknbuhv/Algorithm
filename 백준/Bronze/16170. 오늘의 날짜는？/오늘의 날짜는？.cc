#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctime>

int main(void)
{
    time_t _time = time(NULL);

    struct tm *t = localtime(&_time);


    printf("%d\n%d\n%d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

    return 0;
}