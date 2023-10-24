#include <stdio.h>

char str[2][15] = {"You know what,", "C is powerful."};
char *ptr = &str[0][0];

void arrPrint(char *arr)
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 15; j++)
        {
            printf("%c", *(arr + i * 15 + j));
        }
        printf("\n");
    }
}

void main()
{
    arrPrint(ptr);
}