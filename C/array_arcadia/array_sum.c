/*
 * array_sum.c
 * Calculates the sum of elements in an array.
 */

#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}