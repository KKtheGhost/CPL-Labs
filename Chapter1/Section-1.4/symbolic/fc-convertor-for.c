#include <stdio.h>

#define LOWF    0.0         /* Start fahr */
#define HIGHF   300.0       /* End fahr */
#define STEP    20.0        /* Fahr interval */

main()
{
    float fahr;

    printf("%10s\t%7s\n", "Fahrenheit", "Celsuis");
    for (fahr = LOWF; fahr <= HIGHF; fahr += STEP)
        printf("%10.0f\t%7.2f\n", fahr, (5.0/9.0)*(fahr-32.0));
}