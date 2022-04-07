#include <stdio.h>

main()
{
    float fahr;

    printf("%10s\t%7s\n", "Fahrenheit", "Celsuis");
    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%10.0f\t%7.2f\n", fahr, (5.0/9.0)*(fahr-32.0));
}