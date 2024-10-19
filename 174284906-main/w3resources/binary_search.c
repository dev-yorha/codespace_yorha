#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a program in C for binary search
int binary_search(int array[], int first_element, int last_element, int target);
int main(void)
{
    int arr[] = {1, 3, 4, 7, 8, 9, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]); // hoac co the dung strlen(arr[]);
    int result = binary_search(arr, 0, size - 1, 10);
    printf("Found in element %i\n", result);
}
int binary_search(int array[], int left, int right, int target)
{
    int mid = (left + right) / 2;
    if (array[mid] > target)
    {
        return binary_search(array, left, mid -1, target);
    }
    if (array[mid] < target)
    {
        return binary_search(array, mid + 1, right, target);
    }
    if (array[mid] == target)
    {
        return mid;
    }
    return 0;
}
