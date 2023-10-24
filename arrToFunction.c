#include <stdio.h>

int addThree(int arr[]);

void main()
{
    int sum, numArr[3];

    printf("Enter three integers separated by spaces:\n");
    scanf("%d%d%d", &numArr[0], &numArr[1], &numArr[2]);
    printf("FLAG\n");
    sum = addThree(numArr);

    printf("summary :%d \n", sum);
}

int addThree(int arr[])
{
    int i = 0, result = 0;
    printf("result initially is %d\n", result);
    while (i < 3)
    {
        result += arr[i];
        printf("result now is %d\n", result);
        i++;
    }
    return result;
}