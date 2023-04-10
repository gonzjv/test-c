#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// solution must allocate all required memory
// and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
    char *ptr;
    ptr = calloc(strlen(str), sizeof(char));
    //     printf("strlen: %d\n", strlen(str));
    int i = 0;

    while (*str)
    {
        if (*str != 'a' &&
            *str != 'A' &&
            *str != 'e' &&
            *str != 'E' &&
            *str != 'i' &&
            *str != 'I' &&
            *str != 'o' &&
            *str != 'O' &&
            *str != 'U' &&
            *str != 'u')
        {
            ptr[i] = *str;
            i++;
        }
        printf("char: %c\n", *str);
        //     printf("ascii: %d\n", (int)*str);

        //     printf("char at ptr: %c\n", *ptr);
        str++;
    }
    //     printf("final addr ptr: %p\n", ptr);
    return ptr;
}