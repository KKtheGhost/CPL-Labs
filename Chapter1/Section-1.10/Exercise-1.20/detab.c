#include <stdio.h>

#define TABSTOP 8

main() {
    int c, lc, rem, i;

    lc = rem = 0;
    while ((c = getchar()) != EOF ) {
        if (c == '\t') {
            if (lc%TABSTOP != 0) {
                if ((TABSTOP - lc) >= 0 ) {rem = TABSTOP - lc;}
                else {rem = TABSTOP - (lc%TABSTOP);}
                for (i = 0; i < rem; ++i) {
                    putchar(' ');
                }
            }
            lc = 0;
        }
        else if (c == '\n') {putchar(c);lc = 0;}
        else {putchar(c);++lc;}
    }
}