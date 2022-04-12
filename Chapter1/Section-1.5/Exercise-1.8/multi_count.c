#include <stdio.h>

/* copy input to output; 2nd version  */
main()
{
    int c;
    long nb, nt, nl;

    for ( nb = 0, nt = 0, nl = 0; (c = getchar()) != EOF;)
        if (c == ' ') {
            ++nb;
        }
        else if (c == '\t') {
            ++nt;
        }
        else if (c == '\n') {
            ++nl;
        }
    printf("There are %ld blanks, %ld tabs, %ld lines in the article.\n", nb, nt, nl);
}