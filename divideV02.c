#include <stdio.h>

int Divide(int numenator, int denominator, int *quotient, int *remainder)
{
    if (denominator == 0)
        return -1;

    *quotient = numenator / denominator;
    *remainder = numenator % denominator;
}

void main()
{
    int a, b;
    int *pointerA = &a;
    int *pointerB = &b;
    printf("---start--- \n");
    printf("a = %d \n", *pointerA);
    printf("b = %d \n", *pointerB);

    // Divide(13, 5, pointerA, pointerB);
    Divide(24, 5, &a, &b);

    printf("---result is--- \n");
    printf("a = %d \n", *pointerA);
    printf("b = %d \n", *pointerB);

    printf("---finish--- \n");
}