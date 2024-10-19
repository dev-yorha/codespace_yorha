#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s[2]; // Declare an array s that can hold 2 strings (size 2)
    s[0] = "Hi";
    s[1] = "Yorha";
    printf("%c%c\n%c%c%c%c%c\n", s[0][0], s[0][1], s[1][0], s[1][1], s[1][2], s[1][3], s[1][4]);
}
