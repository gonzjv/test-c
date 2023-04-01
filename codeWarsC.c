#include <stdio.h>

int solution(int number)
{
    // printf("number now is %d\n", number);
    int sum = 0, i = 0;

    while (i < number)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("i now is %d\n", i);
            sum += i;
        }
        i++;
    }

    return sum;
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