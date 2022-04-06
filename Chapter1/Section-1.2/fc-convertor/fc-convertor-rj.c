#include <stdio.h>

/* A simple convertor for Fahrenheit & Celsius */

main()
{
    int fahr, cel;
    int lowf, highf, step;

    lowf = 0;
    highf = 400;
    step = 20;

    fahr = lowf;
    while (fahr <= highf)
    {
        cel =  5 * (fahr - 32) / 9;
        printf("%6d %6d\n", fahr, cel);
        fahr = fahr + step;
    }
    
}