#include <stdio.h>

main()
{
    int c, nl;

    for (nl = 0; (c = getchar()) != EOF;)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}