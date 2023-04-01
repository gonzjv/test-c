#include <stddef.h>
#include <stdio.h>

enum membership
{
    OPEN = 1,
    SENIOR = 2
};

void open_or_senior(size_t n, const int members[n][2], enum membership memberships[n])
{
    // write to the memberships[] array
    size_t i = 0;
    while (i < n)
    {
        memberships[i] = members[i][0] >= 55 && members[i][1] > 7 ? SENIOR : OPEN;
        i++;
    }

    // memberships[0] = SENIOR;
}

void main()
{
    printf("main starts HERE \n");

    const int arr[] = {5, 5, 1, 1, 3};

    printf("result is %d yeeee \n", find_odd_test(5, arr));
    // printf("result is %d yeeee \n", num);
    printf("main finish HERE \n");
}