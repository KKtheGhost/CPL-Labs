#include <stdio.h>

/* A simple convertor for Fahrenheit & Celsius */

main()
{
    float fahr, cel;
    float lowc, highc, step;

    lowc = 0;
    highc = 400;
    step = 20;

    cel = lowc;
    printf("%7s\t%10s\n", "Celsius", "Fahrenheit");
    while (cel <= highc)
    {
        fahr = (cel * (9.0/5.0)) + 32.0;
        printf("%7.0f\t%10.0f\n", cel, fahr);
        cel = cel + step;
    }
    
}