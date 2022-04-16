#include <stdio.h>
#include <stdlib.h>

#define ON 1
#define OFF 0

main()
{
    int c, wnum, state, wl, maxwl, i, j;
    int *wl_array, *wl_array_new;
    
    wl_array = wl_array_new = (int*)malloc(sizeof(int)*1);
    state = wl = maxwl = OFF;
    wnum = 1;

    printf("The words' length histogram:\n\n");
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (state == ON) {
                ++wnum;
                if (wl > maxwl) {
                    maxwl = wl;
                }
                wl_array_new = (int*)realloc(wl_array, sizeof(int)*wnum);
                wl_array = wl_array_new;
            }
            wl = 0;
            state = OFF;
        }
        else {
            ++wl;
            state = ON;
            wl_array[wnum-1] = wl;
        }
    }

    for (i = maxwl; i > 0; --i) {
        for (j = 0; j < wnum; ++j) {
            if (wl_array[j]-i >= 0) {
                printf("█");
            }
            else {
                printf(" ");
            }
            printf("  ");
        }
        printf("\n");
    }

    for (j = 0; j < wnum; ++j) {
        printf("%d  ", wl_array[j]);
    }

    if (wl_array_new != wl_array) {free(wl_array_new);}
    free(wl_array);
}