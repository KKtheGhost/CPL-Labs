#include <stdio.h>

/* By VIM default setting, '\t' equals to eight ' '.*/
#define TAPSTOP 8
#define ISTART 1
#define ISNOTSTART 0

int tabc(void);
int blankc(int n);

int main(void) {
    int c, lc, is;
    lc = 0;
    is = ISTART;
    while ((c = getchar()) != EOF) {
        if (c == '\n') { putchar(c);}
        else if (c == ' ') {
            ++lc; is = ISTART;
            if (lc%TAPSTOP == 0) {tabc(); lc = 0;}
        }
        else {
            if ( is == ISTART ) {
                blankc(lc); lc = 0;
            }
            putchar(c);
            ++lc; is = ISNOTSTART;
        }
    }
}
int tabc(void) {
    putchar('\t');
}
int blankc(int n) {
    if (n == 0 ) {}
    else {putchar('\t');}
}