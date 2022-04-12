#include <stdio.h>

/* copy input to output; 2nd version  */
main()
{
    int c, b;

    b = 0;
    while ((c = getchar()) != EOF)
        if (c != ' ') {
            if (b == 1) {putchar(' ');}
            putchar(c);
            b = 0;
        }
        else {b = 1;}
    putchar('\n');
}
