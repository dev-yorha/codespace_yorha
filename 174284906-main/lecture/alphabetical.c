#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("name: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        s[i] = toupper(s[i]);
    }
    for (int i = 0, n = strlen(s); i < n - 1; i++)
    {
        if (s[i] >= s[i + 1])
        {
            printf("False\n");
            return 0; //end program here
        }
    }
    printf("True\n");
    return 0; //end program here
}
