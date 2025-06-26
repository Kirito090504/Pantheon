/*
 * array_reverse.c
 * Prints the elements of an array in reverse order.
 */

#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}