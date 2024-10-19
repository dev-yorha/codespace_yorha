#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
//Write a program in C to print all unique elements in an array.
int count = 0;
int i, j, n;
int main(void)
{
    int *array = malloc(n);
    n = get_int("number of ele: ");
    for (i = 0; i < n; i++)
    {
        array[i] = get_int("Number %i: ", i + 1);
    }
    for (i = 0; i < n; i++)
    {
        // for (j = i + 1; j < n; j++) -> SAI ! sai nghiêm trọng
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (array[i] == array[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            printf("%i ", array[i]);
        }
        else
        {
            count = 0;
        }
    }
    printf("\n");
}
