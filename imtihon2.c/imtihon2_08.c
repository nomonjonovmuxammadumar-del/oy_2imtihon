#include <stdio.h>

int main()
{
    FILE *f = fopen("matn.txt", "w");

    if (f == NULL)
    {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    fprintf(f, "Salom, C dasturlash!");
    fclose(f);

    printf("Matn faylga yozildi.\n");
    return 0;
}