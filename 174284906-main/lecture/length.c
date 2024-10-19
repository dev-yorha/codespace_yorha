#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
// Count the length of an array

// int n = 0; //prototype
// int string_length(string s); //prototype
// int main(void)
// {
//     string name = get_string("Name: ");
//     printf("%i\n", string_length(name));
// }

// int string_length(string s) //define function "string_length" -> n = length
// {
//     n = 0;
//     while ( s[n] != '\0' )
//     {
//         n++;
//     }
//     return n;
// }


// simplest way
// int main(void)
// {
//     string s = get_string("Name: ");
//     int length = strlen(s);
//     printf("%i\n", length);
// }

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        char c = toupper(s[i]);
        printf("%c", c);
    }
    printf("\n");
}
