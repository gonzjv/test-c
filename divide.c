/* ### Write your code below this line ### */
int Divide(int numerator, int denominator, int *quotient, int *remainder)
{
    if (denominator == 0)
        return -1;

    *quotient = numerator / denominator;
    *remainder = numerator % denominator;

    return 0;
}