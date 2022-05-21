#include <stdio.h>

#define IS_HEAD_OF_LINE 1
#define NOT_HEAD_OF_LINE 0
#define HARD_COMMENT 3
#define DOUBLE_SLASH_COMMENT 2
#define HESITATE 1
#define NOT_COMMENT 0
#define HESITATE_UNCOMMENT 1

int main() {
    int c, end, state;

    state = end = 0;
    while ((c = getchar()) != EOF) {
        if (state >= 2) {
            if (c == '\n' && state == DOUBLE_SLASH_COMMENT) {
                putchar(c);
                state = NOT_COMMENT; end = NOT_COMMENT;
            }
            else if (c == '*' && state == HARD_COMMENT) {
                end = HESITATE_UNCOMMENT;
            }
            else if (c == '/' && end == HESITATE_UNCOMMENT) {
                state = NOT_COMMENT; end = NOT_COMMENT;
            } else {
                end = NOT_COMMENT;
            }
        }

        else if (c == '/' && state != HESITATE) {
            state = HESITATE;
        }

        else if (state == HESITATE) {
            if (c == '/') {
                state = DOUBLE_SLASH_COMMENT;
            }
            else if (c == '*') {
                state = HARD_COMMENT;
            }
            else {
                state = NOT_COMMENT;
                putchar('/');
                putchar(c);
            }
        }

        else {putchar(c);}
    }
}