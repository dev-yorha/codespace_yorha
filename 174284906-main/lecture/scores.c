#include <cs50.h>
#include <stdio.h>

const int N = 4; //constant
float average(int length, int array[]); //prototype

int main(void)
{
    int scores[N]; // Declares an array 'scores' that can hold N integers (size N)
    for (int i = 0; i < N; i++)
    {
        scores[i]=get_float("Score: ");
    }
    printf("Average score: %.2f\n", average(N, scores));
}

float average(int length, int array[]) // Define a function named average with 2 elements length and array, and return a float value
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}
