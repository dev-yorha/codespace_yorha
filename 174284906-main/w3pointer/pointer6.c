#include <cs50.h>
#include <stdio.h>

// Write a program in C to find the maximum number between two numbers using a pointer.
int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int *pt1 = &a;
    int *pt2 = &b;
    if (*pt1 > *pt2)
    {
        printf("a is bigger than b\n");
    }
    else if (*pt1 < *pt2)
    {
        printf("b is bigger than a\n");
    }
    else
    {
        printf("same\n");
    }
}
