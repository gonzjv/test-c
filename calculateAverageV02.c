#include <stddef.h>
#include <stdio.h>

int CalculateAverage(const int array[], size_t size)
{
    long sum = 0, i = 0, average;
    while (i < size)
    {
        printf("iteration \n");
        sum += array[i];
        i++;
    }
    average = (int)((float)sum / size + 0.5);
    return average;
}
void main()
{
    int arr[] = {1, 2, 3, 7, 10};
    printf("START \n");
    printf("result is %d \n", CalculateAverage(arr, 5));
    printf("FINISH \n");
}