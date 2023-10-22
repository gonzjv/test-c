#include <stddef.h>

size_t IndexOf(const int array[], size_t size, int element)
{
    size_t i = 0;

    while (i != size)
    {
        if (array[i] == element)
            return i;
        i++;
    }

    return -1;
    /* ### Write your code below this line ### */
}
