#include <cs50.h>
#include <stdio.h>

// Write a program in C to add two numbers using pointers
int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int *pt1 = &a;
    int *pt2 = &b;
    printf("a + b = %i\n", *pt1 + *pt2);
}
