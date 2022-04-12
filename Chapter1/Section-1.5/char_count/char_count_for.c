#include <stdio.h>

main()
{
    double ct;

    for (ct = 0; getchar() != EOF; ++ct)
        ;
    printf("%.0f\n", ct);
}