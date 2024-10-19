#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)// argc != 2
    {
        printf("You must include one key\n");
        return 1;
    }
    else
    {
        int n = strlen(argv[1]);
        for (int a = 0; a < n; a++)
        {
            if (isalpha(argv[1][a]))
            {
            }
            else
            {
                printf("Key must contain only alphabetical\n");
                return 1;
            }
            for (int b = 0; b < n; b++)
            {
                if (a != b && argv[1][a] == argv[1][b]) // argv cotain duplicated character
                {
                    printf("Key must not contain duplicated character\n");
                    return 1;
                }
                else if (n != 26) // length argv != 26
                {
                    printf("Key must contain 26 characters\n");
                    return 1;
                }
            }
        }
        string plain = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0; i < strlen(plain); i++)
        {
            if (isupper(plain[i]))
            {
                printf("%c", toupper(argv[1][plain[i] - 'A']));
            }
            else if (islower(plain[i]))
            {
                printf("%c", tolower(argv[1][plain[i] - 'a']));
            }
            else if (isblank(plain[i]))
            {
                printf(" ");
            }
            else
            {
                printf("%c", plain[i]);
            }
        }
    }
    printf("\n");
}
