#include <stdio.h>

float FahrenheitToCelsius(int fahrenheit)
{
    /* This is a float-type local variable, initialized to 0 */
    float celsius = 0;

    /* ### Write your code below this line ### */
    /* celsius = ... */
    celsius = (fahrenheit - 32)*5/9.0;
    
    return celsius;
}

void main()
{
    printf("main starts HERE \n");

    float res = FahrenheitToCelsius(200);

    printf("result is %f yeeee \n", res);
    printf("main finish HERE \n");
}