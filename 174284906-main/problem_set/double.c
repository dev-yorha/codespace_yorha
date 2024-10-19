#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int N;
int main(void)
{
    int *list = malloc(N); // Allocate memory dynamically for array list
    list[0] = 1;
    do
    {
        N = get_int("Size: ");
    }
    while (N < 1);
    printf("%i ", list[0]);
    for (int i = 1; i < N; i++)
    {
        list[i] = 2 * list[i - 1];
        printf("%i ", list[i]);
    }
    printf("\n");
}
