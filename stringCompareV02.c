#include <stdio.h>
#include <stddef.h>
#include <assert.h>

int StringCompare(const char *str1, const char *str2)
{
    assert(str1 != NULL && str2 != NULL);

    while (*str1 == *str2 && *str1 != '\0')
    {
        printf("pointer1 %c \n", *str1);
        printf("pointer1 +1  %c \n", *(str1 + 1));
        printf("pointer1 addr  %d \n", str1);
        printf("pointer1 addr +1  %d \n", str1 + 1);

        str1++;
        str2++;
    }

    printf("pointer1 after while %c \n", *str1);
    printf("pointer2 after while %c \n", *str2);
    printf("pointer1 after while ASCII %d \n", *str1);
    printf("pointer2 after while ASCII %d \n", *str2);
    return *str1 - *str2;
}

void main()
{
    printf("START \n");

    const char *strOne = "tomato";
    const char *strTwo = "tomatoes";

    printf("result is %d \n", StringCompare(strOne, strTwo));
    printf("END \n");
}