#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

unsigned long long square_digits(unsigned n)
{
    int charSum = (int)((ceil(log10(n)) + 1) * sizeof(char));
    char str[charSum];
    char resultStr[charSum * 2];
    *resultStr = '\0';
    char tmpStr[charSum * 2];

    sprintf(str, "%d", n);
    char *ptr = str;

    while (*ptr)
    {
        *ptr = pow((*ptr - '0'), 2);
        sprintf(tmpStr, "%d", *ptr);
        // strcat(resultStr, (*ptr + '0'));
        strcat(resultStr, tmpStr);

        printf("ptr: %d\n", *ptr);
        printf("tmp0: %c\n", tmpStr[0]);
        printf("tmp1: %c\n", tmpStr[1]);
        printf("res0: %c\n", resultStr[0]);
        printf("res1: %c\n", resultStr[1]);
        printf("res2: %c\n", resultStr[2]);
        // printf("resPtr: %c\n", *resPtr);
        printf("---\n");
        // resPtr++;
        ptr++;
    }

    // printf("sprint: %c\n", *str);
    // printf("sprint: %c\n", *str + 1);
    // printf("sprint int: %d\n", (int)*str);
    // printf("log10 without ceil: %f\n", (log10(1440)));
    // printf("log10: %f\n", ceil(log10(1440)));
    return strtoll(resultStr, NULL, 10);
}

void main()
{
    printf("main starts HERE \n");

    printf("result is %llu  \n", square_digits(12345612342341243));

    printf("main finish HERE \n");
}