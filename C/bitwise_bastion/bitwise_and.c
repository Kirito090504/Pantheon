/*
 * bitwise_and.c
 * Demonstrates bitwise AND operation.
 */

#include <stdio.h>

int main()
{
    unsigned int a = 12;         // 1100 in binary
    unsigned int b = 10;         // 1010 in binary
    unsigned int result = a & b; // 1000 in binary

    printf("Bitwise AND of %u and %u is %u\n", a, b, result);
    return 0;
}