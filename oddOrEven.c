#include <stdio.h>

const char *even_or_odd(int n)
{
    return (n & 1) ? ("Odd") : ("Even");
}

void main()
{
    printf("main starts HERE \n");

    printf("result is %s  \n", even_or_odd(3));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}