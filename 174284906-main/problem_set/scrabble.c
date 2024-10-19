#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int point[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int sum1 = 0;
int sum2 = 0;
int main(void)
{
    string s1 = get_string("Player 1: ");
    string s2 = get_string("Player 2: ");
    for (int i = 0, length1 = strlen(s1); i < length1; i++)
    {
        s1[i] = toupper(s1[i]);
        if (s1[i] < 65 || s1[i] > 90)
        {
            printf("ONLY WORD!\n");
            return 1;
        }
        sum1 += point[s1[i] - 65];
    }
    for (int i = 0, length1 = strlen(s1); i < length1; i++)
    {
        s2[i] = toupper(s2[i]);
        if (s1[i] < 65 || s1[i] > 90)
        {
            printf("ONLY WORD!\n");
            return 1;
        }
        sum2 += point[s2[i] - 65];
    }
    if (sum1 == sum2)
    {
        printf("TIE!");
    }
    else if (sum1 > sum2)
    {
        printf("PLAYER 1 WIN!");
    }
    else
    {
        printf("PLAYER 2 WIN!");
    }
    printf("\n");
}
