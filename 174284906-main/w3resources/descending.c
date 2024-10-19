#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
// Write a program in C to merge two arrays of the same size sorted in descending order.

int n, i, j;
int x = 0;
int count = 0;
int main(void)
{
    int *arr_1 = malloc(n);
    int *arr_2 = malloc(n);
    int *arr = malloc(n * 2);
    int *arr_result = malloc(n * 2);
    n = get_int("Size: ");
    printf("ARRAY 1\n");
    for (i = 0; i < n; i++)
    {
        arr_1[i] = get_int("Number %i: ", i + 1);
    }
    printf("ARRAY 2\n");
    for (i = 0; i < n; i++)
    {
        arr_2[i] = get_int("Number %i: ", i + 1);
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = arr_1[i];
        arr[i + n] = arr_2[i];
    }
    for (i = 0; i < n * 2; i++)
    {
        for (j = 0; j < n * 2; j++)
        {
            if (i != j)
            {
                if (arr[i] < arr[j])
                {
                    count++;
                }
                else if (arr[i] == arr[j])
                {
                    x++;
                }
            }
        }
        for (j = 0; j < x + 1; j++)
        {
            arr_result[count + j] = arr[i];
        }
        x = 0;
        count = 0;
    }
    for (i = 0; i < n * 2; i++)
    {
        printf("%i ", arr_result[i]);
    }
    printf("\n");
}
