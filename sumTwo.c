#include <stddef.h>
#include <stdio.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n])
{

    size_t j = 0;
    long smallest = numbers[0], secSmallest = numbers[1];

    while (j < n)
    {
        if ((numbers[j] < smallest) && (numbers[j] != smallest))
        {
            secSmallest = smallest;
            smallest = numbers[j];
        }
        else if (numbers[j] < secSmallest && numbers[j] != smallest)
        {
            secSmallest = numbers[j];
        }

        printf("smallest: %ld \n", smallest);
        printf("secSmallest: %ld \n", secSmallest);
        printf("end of cycle \n");
        j++;
    }
    return smallest + secSmallest;
}

void main()
{
    printf("main starts HERE \n");

    const int arr[] = {5, 8, 12, 19, 22};

    printf("result is %ld yeeee \n", sum_two_smallest_numbers(4, arr));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}