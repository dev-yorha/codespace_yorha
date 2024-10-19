#include <cs50.h>
#include <stdio.h>

// Write a program in C to add numbers using call by reference.

int calc(int *x, int *y);
int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int rslt = calc(&a, &b);

    // Hoac viet the nay cung dung:
    // int *pt1 = &a;
    // int *pt2 = &b;
    // int rslt = calc(pt1, pt2);

    printf("%i\n", rslt);
}

int calc(int *x, int *y)
{
    int sum = *x + *y;
    return sum;
}
