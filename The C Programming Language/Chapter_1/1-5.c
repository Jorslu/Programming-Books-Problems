#include <stdio.h>

/* print Fahrenheit-Celsius table */
int main(int argc, char* argv[])
{
    int fahr;

    printf("Fahrenheit | Celsius\n");
    printf("--------------------\n");

    for(fahr = 300; fahr >= 0; fahr += -20)
        printf("%10.0f | %7.2f\n", fahr, (5.0/9.0)*(fahr - 32));

    return 0;
}
