#include <stdio.h>

int main()
{
    int a[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Yigindi: %d\n", sum);
    return 0;
}