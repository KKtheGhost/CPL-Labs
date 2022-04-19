#include <stdio.h>
#include <setjmp.h>

jmp_buf exception_env;

/* A simple convertor for Fahrenheit & Celsius */

float ctof(float cel)
{
    float resf;

    if ((cel + 273.15) <= 0) {
        longjmp(exception_env, 1);
    }
    resf = (cel * (9.0/5.0)) + 32.0;
    return resf;
}

int main()
{
    float fahr, cel;
    float lowc, highc, step;

    lowc = -200;
    highc = 400;
    step = 20;
    cel = lowc;

    if (setjmp(exception_env) == 0) {
        printf("%7s\t%10s\n", "Celsius", "Fahrenheit");
        while (cel <= highc)
        {
            printf("%7.0f\t%10.0f\n", cel, ctof(cel));
            cel = cel + step;
        }
    }
    else {
        printf("ERROR! Invalid Celsius temperature!\n");
    }
    
}