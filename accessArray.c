#include <stdio.h>

void main()
{
    char str[] = "Hi, fellow, its a simple string";
    char *str2 = "Hi, bro, its a simple string";
    char *ptrStr;
    int list[] = {1, 2, 3, 4, 5};
    int *ptrInt;

    ptrStr = str;
    printf("before the change str contains: %s\n", str);
    printf("before the change str2 contains: %s\n", str2);
    printf("before the change str[5] contains: %c\n", str[5]);
    *(ptrStr + 5) = 'A';
    printf("after the change str[5] contains: %c\n", str[5]);
    printf("after the change str contains: %s\n", str);
    ptrInt = list;
    printf("before the change list[2] contains: %d\n", list[2]);
    *(ptrInt + 2) = 10;
    printf("after the change list[2] contains: %d\n", list[2]);
}