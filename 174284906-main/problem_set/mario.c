#include <cs50.h>
#include <stdio.h>

void row_dot(int n);
void row_block(int n);
int height;
int main(void)
{
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    for (int i = 0; i < height; i++)
    {
        row_dot(height - i - 1);
        row_block(i + 1);
        printf("  ");
        row_block(i + 1);
        printf("\n");
    }
}


void row_dot(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void row_block(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}
