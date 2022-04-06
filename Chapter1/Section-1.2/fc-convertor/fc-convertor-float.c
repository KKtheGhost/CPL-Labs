#include <stdio.h>

/* A simple convertor for Fahrenheit & Celsius */

main()
{
    float fahr, cel;
    float lowf, highf, step;

    lowf = 0;
    highf = 400;
    step = 20;

    fahr = lowf;
    while (fahr <= highf)
    {
        cel =  (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.2f\n", fahr, cel);
        fahr = fahr + step;
    }
    
}