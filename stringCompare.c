/* ### Write your code below this line ### */
#include <assert.h>

int i, length;

int StringCompare(const char *str1, const char *str2)
{
    assert(str1);
    assert(str2);

    length = sizeof(str1);

    for (i = 0; i < length; i++)
    {

        if ((int)str1[i] > (int)str2[i])
            return 1;
        else if ((int)str1[i] < (int)str2[i])
            return -1;
    }
    return 0;
}