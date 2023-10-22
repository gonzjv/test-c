#include <stdio.h>

unsigned Fibonacci(int n)
{
    int a = 0, b = 1, next = 0, i = 1;

    while (i != n + 1)
    {
        if (i == 1)
        {
            next = 1;
        }
        else
        {
            next = a + b;
            a = b;
            b = next;
        }
        i++;
    }
    return next;
}

void main()
{
    printf("START \n");
    printf("result %d \n", Fibonacci(2));
    printf("FINISH \n");
}