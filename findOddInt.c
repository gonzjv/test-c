#include <stddef.h>

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

void main()
{
    printf("main starts HERE \n");

    int num;
    printf("type a number to \n");
    scanf("%d", &num);

    printf("result is %d yeeee \n", solution(num));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}