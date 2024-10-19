#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2) // input key
    {
        int k = atoi(argv[1]);
        for (int x = 0; x < strlen(argv[1]); x++) // neu input argv[1] co thu gi do khac ngoai digit thi se stop ngay lap tuc
        {
            if (argv[1][x] < '0' || argv[1][x] > '9')
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        if (k > 0)
        {
            int cipher; // plain -> cipher
            string plain = get_string("plaintext: ");
            printf("ciphertext: ");
            for (int i = 0; i < strlen(plain); i++)
            {
                if (isupper(plain[i]))
                {
                    cipher = (plain[i] + k - 'A') % 26;
                    printf("%c", cipher + 'A');
                }
                else if (islower(plain[i]))
                {
                    cipher = (plain[i] + k - 'a') % 26;
                    printf("%c", cipher + 'a');
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
            printf("\n");
        }
        else // k <= -1
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else // argc != 2
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");
}
