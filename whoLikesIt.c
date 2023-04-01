#include <stdio.h>
#include <stdlib.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n])
{
    char *buf;
    switch (n)
    {
    case 0:
    {
        asprintf(&buf, "no one likes this");
        break;
    }
    case 1:
    {
        asprintf(&buf, "%s likes this", names[0]);
        break;
    }
    case 2:
    {
        asprintf(&buf, "%s and %s like this", names[0], names[1]);
        break;
    }
    case 3:
    {
        asprintf(&buf, "%s, %s and %s like this", names[0], names[1], names[2]);
        break;
    }
    default:
    {
        asprintf(&buf, "%s, %s and %d others like this", names[0], names[1], n - 2);
        break;
    }
    }
    return buf;
}
void main()
{
    printf("main starts HERE \n");

    const char *personArr[2] = {"Jacob", "Alex"};

    // printf("type a number to \n");
    // scanf("%d", &num);

    printf("result is %s yeeee \n", likes(2, personArr));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}