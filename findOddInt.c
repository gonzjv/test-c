#include <stddef.h>
#include <stdio.h>

int find_odd(size_t length, const int array[length])
{
    size_t elem = 0;
    int appearSum = 0;

    while (elem < length)
    {
        for (size_t i = 0; i < length; i++)
        {
            array[i] == array[elem] && (appearSum += 1);
        }
        if (appearSum % 2 != 0)
            return appearSum;
        else
            appearSum = 0;
        elem++;
    }

    return 0;
}

int find_odd_test(size_t length, const int array[length])
{
    int odd_int = 0;

    for (size_t i = 0; i < length; i++)
    {
        odd_int ^= array[i];
        printf("odd_int : %d\n", odd_int);
    }

    return odd_int;
}

void main()
{
    printf("main starts HERE \n");

    const int arr[] = {5, 5, 1, 1, 3};

    printf("result is %d yeeee \n", find_odd_test(5, arr));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}