#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE_CHAR   1
#define SIZE_SHORT  2
#define SIZE_INT    4
#define SIZE_LONG   8

void main() {
    char c=0;
    c=~c;
    c=c<<(SIZE_CHAR*8-1);
    printf("Signed Char max is %d.\n",--c);
    printf("Signed Char min is %d.\n",++c);

    short s=0;
    s=~s;
    s=s<<(SIZE_SHORT*8-1);
    printf("Signed Char max is %d.\n",--s);
    printf("Signed Char min is %d.\n",++s);

    int i=0;
    i=~i;
    i=i<<(SIZE_INT*8-1);
    printf("Signed Int max is %d.\n",--i);
    printf("Signed Int min is %d.\n",++i);

    long l=0;
    l=~l;
    l=l<<(SIZE_LONG*8-1);
    printf("Signed Int max is %ld.\n",--l);
    printf("Signed Int min is %ld.\n",++l);

    unsigned char uc=0;
    uc=~uc;
    uc=uc<<(SIZE_CHAR*8-1);
    printf("Unsigned Char max is %d.\n",--uc);
    printf("Unsigned Char min is %d.\n",++uc);

    unsigned short us=0;
    us=~us;
    us=us<<(SIZE_SHORT*8-1);
    printf("Unsigned Char max is %d.\n",--s);
    printf("Unsigned Char min is %d.\n",++s);

    unsigned int ui=0;
    ui=~ui;
    ui=ui<<(SIZE_INT*8-1);
    printf("Unsigned Int max is %ld.\n",--ui);
    printf("Unsigned Int min is %ld.\n",++ui);

    unsigned long ul=0;
    ul=~ul;
    ul=ul<<(SIZE_LONG*8-1);
    printf("Unsigned Int max is %llu.\n",--ul);
    printf("Unsigned Int min is %llu.\n",++ul);
}