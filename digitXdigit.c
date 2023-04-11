#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

unsigned long long square_digits(unsigned n)
{
    int charSum = (int)((ceil(log10(n)) + 1) * sizeof(char));
    char *str = malloc(charSum * sizeof(char));
    char *resultStr = malloc(2 * charSum * sizeof(char));
    *resultStr = '\0';
    char *tmpStr = malloc(2 * charSum * sizeof(char));

    sprintf(str, "%d", n);
    char *ptr = str;

    while (*ptr)
    {
        *ptr = pow((*ptr - '0'), 2);
        sprintf(tmpStr, "%d", *ptr);
        strcat(resultStr, tmpStr);

        ptr++;
    }

    // long long result = strtoull(resultStr, NULL, 10);
    // sscanf(resultStr, "%lld", &result);
    // const char test[128];
    // strcpy(test, resultStr);
    return strtoll(resultStr, NULL, 10);
    // return result;
}

void main()
{
    printf("main starts HERE \n");

    printf("result is %llu  \n", square_digits(123456789));

    printf("main finish HERE \n");
}