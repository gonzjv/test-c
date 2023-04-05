#include <stdio.h>
#include <stddef.h>

size_t get_count(const char *s)
{
    size_t result = 0;
    while (*s)
    {
        printf("Char is: %c\n", *s);
        printf("address is: %p\n", s);
        switch (*s++)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            result++;
            break;
        }
    }
    return result;
}
void main()
{
    printf("main starts HERE \n");
    const char hiMsg[] = "Hello World";
    const char *pMsg = hiMsg;

    // get_count(pMsg);
    printf("first char is %c  \n", *pMsg);
    printf("addr is %p  \n", pMsg);
    printf("result is %ld  \n", get_count(pMsg));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}