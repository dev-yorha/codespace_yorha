#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Syntax: ./pdf [file_name]\n");
        return 1;
    }
    else
    {
        char *filename = argv[1];

        FILE *src = fopen(filename, "r");

        uint8_t buffer[4];

        fread(buffer, 1, 4, src); // Ở đây không cần dùng &buffer vì buffer đã là 1 array sẵn rồi (?)
        for (int i = 0; i < 4; i++)
        {
            printf("%i\n", buffer[i]);
        }
        
        fclose(src);
    }
}
