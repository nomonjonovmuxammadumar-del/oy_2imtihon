#include <stdio.h>

int main()
{
    int x = 15;
    int *p = &x;

    *p = 25;

    printf("Yangi qiymat: %d\n", x);
    return 0;
}