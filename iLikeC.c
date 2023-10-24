#include <stdio.h>

char aboutC[] = "I like C!";
char *ptrStr;

void strPrint(char *str)
{
    printf("%s\n", str);
}

void main()
{
    ptrStr = aboutC;
    *(ptrStr + 3) = 'o';
    *(ptrStr + 4) = 'v';
    strPrint(aboutC);
}