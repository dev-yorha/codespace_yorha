#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Write a program in C to find the largest sum of contiguous subarrays in an array.
//  Using Kadane's algorithm
int i, n;
int main(void)
{
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    int *arr = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        arr[i] = get_int("Number %i: ", i + 1);
    }
// Kadane's algorithm solution
    int max = arr[0];
    for (i = 1; i < n + 1; i++)
    {
        int sum = arr[i] + arr[i - 1];
        arr[i] = fmax(arr[i], sum);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    free(arr);
    printf("Biggest contiguous subarray: %i\n", max);
}




// Brute force solution
    // int sum = 0;
    // int ctr = 0;
    // int max = arr[0];
    // for (i = 0; i < n; i++) // find ele
    // {
    //     for (j = 0; j < n - i; j++)
    //     {
    //         for (k = 0; k < i + 1; k++)
    //         {
    //             sum += arr[k + ctr];
    //         }
    //         if (sum > max)
    //         {
    //             max = sum;
    //         }
    //         ctr++;
    //         sum = 0;
    //     }
    //     ctr = 0;
    // }
    // printf("Biggest sum: %i\n", max);
// }
