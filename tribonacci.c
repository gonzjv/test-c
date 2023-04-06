#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

//  return a dynamically allocated `long long` array of results

long long getTribonacci(const long long signature[3], long long n)
{
    if (n == 0)
        return signature[0];
    if (n == 1)
        return signature[1];
    if (n == 2)
        return signature[2];
    else
        return getTribonacci(signature, n - 1) + getTribonacci(signature, n - 2) + getTribonacci(signature, n - 3);
}

long long *tribonacci(const long long signature[3], size_t n)
{
    long long *resultArr = malloc(8 * n);
    size_t i = 0;

    while (i < n)
    {
        resultArr[i] = getTribonacci(signature, i);
        i++;
    }

    // resultArr[0] = signature[0];
    return resultArr;
}

void main()
{
    printf("main starts HERE \n");
    printf("\n");

    const long long sign[] = {5, 1, 1};

    long long *ptr = tribonacci(sign, 5);
    printf("zero elem: %lld  \n", ptr[0]);
    printf("1 elem: %lld  \n", ptr[1]);
    printf("2 elem: %lld  \n", ptr[2]);
    printf("3 elem: %lld  \n", ptr[3]);
    printf("4 elem: %lld  \n", ptr[4]);
    printf("ptr addr: %p  \n", ptr);

    printf("result addr: %p  \n", tribonacci(sign, 5));
    // printf("result is %lln  \n", tribonacci(sign, 5));

    printf("\n");
    printf("main finish HERE \n");
}