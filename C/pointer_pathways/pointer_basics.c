/*
 * pointer_basics.c
 * Demonstrates basic pointer usage.
 */

#include <stdio.h>

int main()
{
    int value = 42;
    int *ptr = &value;

    printf("Value: %d\n", value);
    printf("Pointer address: %p\n", (void *)ptr);
    printf("Value via pointer: %d\n", *ptr);

    return 0;
}