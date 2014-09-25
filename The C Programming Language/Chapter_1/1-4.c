#include <stdio.h>

/* print Fahrenheit-Celsius table
    for celsius = 0, 1, 2, ..., 100; floating-point version */

int main(int argc, char* argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 100;    /* upper limit */
    step = 1;      /* step size */

    printf("Celsius | Fahrenheit\n");
    printf("--------------------\n");

    celsius = lower;
    while(celsius <= upper)
    {
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%7.0f | %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
