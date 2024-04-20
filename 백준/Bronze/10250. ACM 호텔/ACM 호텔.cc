#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctime>
#include <string.h>

int main(void)
{
    int a, b, c, d, H = 0, W = 1;
    
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d", &b, &c, &d);
        for (int j = 0; j < d; j++)
        {
            H++;
            if (H > b)
            {
                W++;
                H = 1;
            }
        }
        
        printf("%d%02d\n", H, W);
        H = 0, W = 1;
    }

    return 0;
}