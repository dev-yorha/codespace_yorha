#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a program in C to demonstrate how to handle pointers in a program.
int main(void)
{
    int m = 29;
    int *ab = &m;
    printf("Address of pointer ab: %p\n", ab);
    printf("Content of pointer ab: %i\n", *ab);
    m = 34;
    printf("Address of pointer ab: %p\n", ab);
    printf("Content of pointer ab: %i\n", *ab);
    *ab = 7;
    printf("Address of m: %p\n", &m);
    printf("Content of m: %i\n", m);
}
// ab print out the address of m
// &ab print out the address of ab
// *ab print out the value of m
