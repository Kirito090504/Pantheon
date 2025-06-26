/*
 * person_struct.c
 * Defines and uses a simple struct for a person.
 */

#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person alice;
    strcpy(alice.name, "Alice");
    alice.age = 30;

    printf("Name: %s, Age: %d\n", alice.name, alice.age);
    return 0;
}