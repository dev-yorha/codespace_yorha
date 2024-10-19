#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Write a program in C to print all permutations of a given string using pointers.
int main(void)
{
    char *name = "yoha";
    char *pt1 = name;
    char *pt2 = name + 1;
    char *pt3 = name + 2;
    char *pt4 = name + 3;
    char *pt5 = name + 4;
    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        printf("%c", *(name + i));
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                printf("%c", *(name + j));
                for (int a = 0; a < n; a++)
                {
                    if (a != i && a != j)
                    {
                        printf("%c", *(name + a));
                        for (int b = 0; b < n; b++)
                        {
                            if (b != i && b != j && b != a)
                            {
                                printf("%c", *(name + b));
                            }
                        }
                    }
                }
            }
        }
    }
}
