#include <stdio.h>

static float Min(float a, float b)
{
    return a < b ? a : b;
}

static float Max(float a, float b)
{
    return a > b ? a : b;
}

static float Abs(float a)
{
    return a < 0 ? -a : a;
}

static int isEqual(float a, float b)
{
#define EPSILON 0.01
    return Abs(a - b) < EPSILON;
}

int isRightTriangle(float a, float b, float c)
{
    float shortest = Min(Min(a, b), c);
    float longest = Max(Max(a, b), c);
    float medium = a + b + c - (shortest + longest);

    return isEqual(shortest * shortest + medium * medium, longest * longest);
}

void main()
{
    printf("Start HERE \n");
    printf("Result is  %d \n", isRightTriangle(25, 24, 7));
    printf("Finish HERE \n");
}