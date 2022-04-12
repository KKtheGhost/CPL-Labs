#include <stdio.h>

main()
{
    long ct;

    ct = 0;
    while (getchar() != EOF)
        ct++;
    printf("%ld\n", ct);
}