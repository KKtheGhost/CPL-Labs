#include <stdio.h>

#define LINE_LENGTH 40

int main() {
    int c, l;

    l = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && l >= LINE_LENGTH-1 ) {
            putchar('\n');
            l = 0;
        }
        else if (c != ' ' && l >= LINE_LENGTH+2) {
            putchar('\n');
            putchar('-');
            putchar(c);
            l = 0;
        }
        else if (c == '\n') { putchar('\n');l = 0;}
        else if (c == ' ' && l == 0) {}
        else {putchar(c);}
        ++l;
    }
}