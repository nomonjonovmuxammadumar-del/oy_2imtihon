#include <stdio.h>

int yigindi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + yigindi(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Yigindi: %d\n", yigindi(n));
    return 0;
}