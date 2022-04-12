#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nc = nw = 0;
    while ((c = getchar()) != EOF) {
       ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw; 
        }
    }
    ++nl;
    printf("There are %d lines and %d characters in the input, and %d words inside.\n", nl, nc, nw);
}