#include <cs50.h>
#include <stdio.h>

// int main(int argc, string argv[])
// {
//     if (argc == 3)
//     {
//         printf("Hello, %s %s ", argv[1], argv[2]);
//     }
//     else
//     {
//         printf("Hello world");
//     }
//     printf("\n");
// }


// int main(int argc, string argv[])
// {
//     printf("Hello, ");
//     for (int i = 0; i < argc - 1 ; i++)
//     {
//         printf("%s ", argv[i+1]);
//     }
//     printf("\n");
// }

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Missing command=line");
        return 0;
    }
    else
    {
        printf("Hello, %s", argv[2]);
        return 1;
    }
    printf("\n");
}
