#include <cs50.h>
#include <stdio.h>

// Write a program in C to show the basic declaration of a pointer.
int main(void)
{
    int m = 10;
    int o, n;
    int *z = &m; // In C, in order to store an address, the variable must be a pointer
    printf("z store the address of m = %p\n", z);
    printf("*z store the address of m = %i\n", *z);
    printf("&m is the address of m = %p\n", &m);
    printf("&n store the address of m = %p\n", &n);
    printf("&o store the address of o = %p\n", &o);
    printf("&z store the address of z = %p\n", &z);
}
