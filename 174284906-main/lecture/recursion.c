#include <cs50.h>
#include <stdio.h>

int i, j;
void draw (int n);

int main(void)
{
    int height = get_int("Height:");
    draw(height);
}

void draw(int n)
{
    printf("%i", n);
    if (n <= 1)
    {
        return;
    }
    draw(n - 1);

    for (i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

// To visualize it better, think of it like Russian dolls:
// -> You open the largest doll (the outermost call to draw).
// -> Inside, you find a smaller doll (the recursive call to draw with a smaller n).
// -> You keep opening smaller and smaller dolls until you reach the smallest one (the base case).
// -> Then, you start closing the dolls one by one, and at each closing, you print a row of hashes.
// -> This process ensures that the pyramid is built from the bottom up, with each level being added on top of the previous one.

// Key point: The loop to print the blocks only executes after the recursive call has returned. This ensures that the smaller pyramids are built first, forming the base for the larger ones.

// The code before the recursive call does not execute again when the recursion unwinds.
// The code after the recursive call will pause until reach the base case

