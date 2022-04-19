#include <stdio.h>
#include <stdlib.h>

int print_block(int n)
{
    int i;
    for (i = 0; i < n; ++i) {
        printf("%s", "■");
    }
    printf("%s", "\n");
}
main()
{
    int i, c, *ascii;

    ascii = (int*)malloc(sizeof(int)*128);
    while ((c = getchar()) != EOF) {++ascii[c];}
    
    for (i = 32; i < 127; ++i) {
        char charName = i;

        if (charName == 32) {
            printf("SPACE: ");
            print_block(ascii[i]);
        }
        else {
            printf("%5c: ", charName);
            print_block(ascii[i]);
        }
    }

    free(ascii);
}