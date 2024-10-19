#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int sentence = 1;
    int word = 1;
    int letter = 0;
    string s = get_string("Enter text: ");
    int n = strlen(s);
    for (int i = 0; i < n - 1; i++) // count sentences
    {
        if (((s[i] == 46) || (s[i] == 33) || (s[i] == 63)) && (s[i + 1] == 32))
        {
            sentence++;
        }
        else if ((s[i] == 46) && (isupper(s[i + 1]))) // neu gap tu rut gon thi -1 cau
        {
            sentence--;
        }
    }
    for (int i = 0; i < n; i++) // count words
    {
        if (s[i] == 32)
        {
            word++;
        }
        // else if (s[i] == 39) // Dont know if a'b considered 1 or 2 words
        // {
        //     word++;
        // }
    }
    for (int i = 0; i < n; i++) // count letters
    {
        if (isalpha(s[i]))
        {
            letter++;
        }
        else if (isdigit(s[i]))
        {
            letter++;
        }
    }
    float L = (100 * letter) / word;
    float S = (100 * sentence) / word;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index <= 1)
    {
        printf("Before Grade 1");
    }
    else if (index >= 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("%f\n", index);
        printf("Grade %i", (int) round(index));
    }
    printf("\n");
}
