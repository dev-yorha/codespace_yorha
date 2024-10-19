#include <cs50.h>
#include <stdio.h>

// Write a program in C to store n elements in an array and print the elements using a pointer
int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", *(arr + i));
    }
    printf("\n");
}
// Array có thể coi là 1 pointer tới phần tử đầu tiên trong array
