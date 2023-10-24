#include <assert.h>
#include <stdio.h>

long number;
int sign = 1;

int StringToInteger(const char *str)
{
    assert(str);
    number = 0;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        printf("number before is %ld \n", number);
        number = number * 10 + (*str - '0');
        printf("number is %ld \n", number);
        printf("*str is %c \n", *str);
        printf("*str - '0' is %d \n", *str - '0');
        str++;
    }
    return number * sign;
}

void main()
{
    printf("START \n");
    const char *initString = "12345israel";
    StringToInteger(initString);
    printf("result is %s \n", initString);
    printf("END \n");
}
