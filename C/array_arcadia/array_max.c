/*
 * array_max.c
 * Finds the maximum value in an integer array.
 */

#include <stdio.h>

int main()
{
    int arr[] = {3, 7, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);
    return 0;
}