#include <stdio.h>

unsigned ReverseNumber(unsigned number)
{
    unsigned ones_digit, tens_digit, hundreds_digit, result;

    ones_digit = number % 10;
    number /= 10;
    tens_digit = number % 10;
    hundreds_digit = number / 10;
    printf("ones  %d \n", ones_digit);
    printf("tens  %d \n", tens_digit);
    printf("hundreds  %d \n", hundreds_digit);

    result = ones_digit * 100 + tens_digit * 10 + hundreds_digit;

    return result;
}

void main()
{
    printf("main starts HERE \n");
    printf("result is  %d \n", ReverseNumber(123));

    printf("main finishes HERE \n");
}