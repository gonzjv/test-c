#include <math.h>
#include <stdio.h>

struct Point
{
    /* data */
    int x, y;
};

float Distance(struct Point pointOne, struct Point pointTwo)
{
    int edgeX = pointOne.x - pointTwo.x;
    int edgeY = pointOne.y - pointTwo.y;

    return sqrt(pow(edgeX, 2) + pow(edgeY, 2));
}

void main()
{
    printf("START \n");
    struct Point pointA =
        {
            x : 4,
            y : 6
        };
    struct Point pointB =
        {
            x : 1,
            y : 2
        };

    printf("result is %f \n", Distance(pointA, pointB));
    printf("END \n");
}
