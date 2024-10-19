#include <cs50.h>
#include <stdio.h>

// Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
int main(void)
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *pt1 = &m;
    float *pt2 = &fx;
    char *pt3 = &cht;

    printf("Using & operator :\n");
    printf("Address of m: %p\n", &m);
    printf("Address of fx: %p\n", &fx);
    printf("Address of cht: %p\n", &cht);
    printf("\n");

    printf("Using & and * operator :\n");
    printf("Value at Address of m: %i\n", *(&m));
    printf("Value at Address of fx: %f\n", *(&fx));
    printf("Value at Address of cht: %c\n", *(&cht));
    printf("\n");

    printf("Using only pointer variable :\n");
    printf("Address of m: %p\n", pt1);
    printf("Address of fx: %p\n", pt2);
    printf("Address of cht: %p\n", pt3);
    printf("\n");

    printf("Using only pointer operator :\n");
    printf("Value at Address of m: %i\n", *pt1);
    printf("Value at Address of fx: %f\n", *pt2);
    printf("Value at Address of cht: %c\n", *pt3);
}
