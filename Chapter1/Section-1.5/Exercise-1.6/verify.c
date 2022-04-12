#include <stdio.h>

/* copy input to output; 2nd version  */
main()
{
    int c;

    printf("Please press 'Enter':");
    c = (getchar() != EOF);
    printf("The value of 'getchar() != EOF' is %d.\n", c);
}
