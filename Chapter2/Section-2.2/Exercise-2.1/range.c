#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    /* Signed */
    printf("Signed Char max is %d.\n", CHAR_MAX);
    printf("Signed Char min is %d.\n", CHAR_MIN);
    printf("Signed Short max is %d.\n", SHRT_MAX);
    printf("Signed Short min is %d.\n", SHRT_MIN);
    printf("Signed Int max is %d.\n", INT_MAX);
    printf("Signed Int min is %d.\n", INT_MIN);
    printf("Signed Long max is %ld.\n", LONG_MAX);
    printf("Signed Long min is %ld.\n", LONG_MIN);
    /* Unsigned */
    printf("Unsigned Char max is %d.\n", UCHAR_MAX);
    printf("Unsigned Char min is %d.\n", 0);
    printf("Unsigned Short max is %d.\n", USHRT_MAX);
    printf("Unsigned Short min is %d.\n", 0);
    printf("Unsigned Int max is %ld.\n", UINT_MAX);
    printf("Unsigned Int min is %ld.\n", 0);
    printf("Unsigned Long max is %llu.\n", ULONG_MAX);
    printf("Unsigned Long min is %llu.\n", 0);
}