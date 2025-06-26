/*
 * for_vs_while.c
 * Compares for and while loops by printing numbers 1 to 5.
 */

#include <stdio.h>

int main()
{
    printf("Using for loop:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Using while loop:\n");
    int j = 1;
    while (j <= 5)
    {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    return 0;
}