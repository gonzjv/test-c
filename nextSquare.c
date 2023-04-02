#include <math.h>
#include <stdio.h>

long int findNextSquare(long int sq)
{

    double prevNum;
    double convertedSq = (double)sq;

    prevNum = sqrt(convertedSq);

    printf("sq : %ld\n", sq);

    printf("prevNum : %ld\n", prevNum);
    return pow((long int)prevNum + 1, 2);
}
void main()
{
    printf("main starts HERE \n");

    // const int arr[] = {5, 8, 12, 19, 22};

    printf("result is %ld yeeee \n", findNextSquare(121));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}