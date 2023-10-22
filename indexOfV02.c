#include <stddef.h>

size_t indexOf(const int arr[], size_t size, int elem)
{

    size_t i = 0;

    while (i < size)
    {
        if (arr[i] == elem)
        {
            return i;
        }
        i++;
    }
    return -1;
}