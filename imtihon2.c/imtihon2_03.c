#include <stdio.h>

int katta(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Katta son: %d\n", katta(x, y));
    return 0;
}