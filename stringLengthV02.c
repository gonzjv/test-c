#include <assert.h>
#include <stddef.h>
#include <stdio.h>

size_t stringLength(const char *s)
{
    const char *i = NULL;
    assert(s != NULL);
    for (i = s; *i != '\0'; i++)
    {
    }
    return i - s;
}

void main()
{
    char color[] = {'b', 'l', 'c', 'k', '\0'};
    char color2[] = "white";
    char *color3 = "red";
    printf("---start--- \n");
    printf("color is %s \n", color);
    printf("color2 is %s \n", color2);
    printf("color3 is %s \n", color3);
    printf("color pointer is %d \n", *color);
    printf("color2 pointer is %d \n", *color2);
    printf("color23 pointer is %d \n", *color3);

    printf("result is %d \n", stringLength(color));
    printf("result is %d \n", stringLength(color2));
    printf("result is %d \n", stringLength(color3));
    printf("---end--- \n");
}