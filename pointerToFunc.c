#include <stdio.h>

void chPrint(char *ch);
int dataAdd(int *arr, int max);

void main()
{
    char str[] = " Its really a string";
    char *ptrStr;
    int numArr[] = {1, 2, 3, 4, 5};
    int *ptrInt;

    ptrStr = str;
    chPrint(str);
    chPrint(ptrStr);

    ptrInt = numArr;

    printf("The result returned by dataAdd is %d\n", dataAdd(ptrInt, 5));
    printf("The result returned by dataAdd is %d\n", dataAdd(numArr, 5));
}

void chPrint(char *ch)
{
    printf("char is %s\n", ch);
}

int dataAdd(int *arr, int max)
{
    int i, res = 0;

    // while (i < max)
    // {
    //     res += arr[i];
    //     i++;
    // }
    for (i = 0; i < max; i++)
        res += arr[i];
    return res;
}