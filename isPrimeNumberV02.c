#include <stdio.h>
typedef unsigned long unLongT;

int isPrimeNumber(unLongT num)
{

    for (int i = 2; (i * i) < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    printf("START \n");
    printf("result is %d \n", isPrimeNumber(6));
    printf("FINISH \n");
}
