#include <stdio.h>
#include <string.h>

struct Mahsulot
{
    char nom[50];
    int narx;
    int soni;
};

int main()
{
    struct Mahsulot m[5];
    char qidir[50];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %d", m[i].nom, &m[i].narx, &m[i].soni);
    }
    scanf("%s", qidir);

    printf("Barcha mahsulotlar:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %d\n", m[i].nom, m[i].narx, m[i].soni);
    }

    int maxIdx = 0;
    for (int i = 1; i < 5; i++)
    {
        if (m[i].narx > m[maxIdx].narx)
        {
            maxIdx = i;
        }
    }
    printf("\nEng qimmat mahsulot: %s (%d)\n\n", m[maxIdx].nom, m[maxIdx].narx);

    int topildi = 0;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(m[i].nom, qidir) == 0)
        {
            printf("Mahsulot topildi!\n");
            printf("Nomi: %s\n", m[i].nom);
            printf("Narxi: %d\n", m[i].narx);
            printf("Soni: %d\n", m[i].soni);
            topildi = 1;
            break;
        }
    }
    if (!topildi)
    {
        printf("Mahsulot topilmadi.\n");
    }

    FILE *f = fopen("mahsulotlar.txt", "w");
    if (f == NULL)
    {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        fprintf(f, "%s %d %d\n", m[i].nom, m[i].narx, m[i].soni);
    }
    fclose(f);

    printf("\nMa'lumotlar mahsulotlar.txt fayliga saqlandi.\n");
    return 0;
}