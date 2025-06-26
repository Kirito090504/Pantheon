/*
 * array_input.c
 * Shows how to take user input into an array.
 */

#include <stdio.h>

int main()
{
    int arr[3];
    printf("Enter 3 integers:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}