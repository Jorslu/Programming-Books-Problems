#include <stdio.h>

/* print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300; floating-point version */

int main(int argc, char* argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size

    printf("Fahrenheit | Celsius\n");
    printf("--------------------\n");

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.0f | %7.2f\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
