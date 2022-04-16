#include <stdio.h>

#define BLANK 0
#define IS_CHAR 1

main()
{
    int c, state;

    state = IS_CHAR;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IS_CHAR) {
                putchar('\n');
            }
            state = BLANK;
        }
        else {
            putchar(c);
            state = IS_CHAR;
        }
    }
}