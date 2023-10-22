#include <stdio.h>

float squareRoot(float num)
{
    float sqrt = num / 2, temp = 0;
    do
    {
        temp = sqrt;
        sqrt = (sqrt + num / sqrt) / 2;
    } while (sqrt != temp);

    // while (sqrt != temp)
    // {
    //     temp = sqrt;
    //     sqrt = (sqrt + num / sqrt) / 2;
    // }
    return sqrt;
}

void main()
{
    printf("START \n");
    printf("result is %f \n", squareRoot(4));
    printf("FINISH \n");
}