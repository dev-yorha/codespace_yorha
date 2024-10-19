#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
// Write a program in C to count the total number of duplicate elements in an array.
int count = 0;
int i, j, n;
int main(void)
{
    int arr[100];
    n = get_int("number of elements: ");
    for (i = 0; i < n; i++)
    {
        arr[i] = get_int("Number %i: ", i + 1);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("There are %i duplicate\n", count);
}

