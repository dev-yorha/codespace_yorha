#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Define a element size in jpeg
int const JPEG_byte = 512;
int main(int argc, char *argv[])
{
    // Check if it has wrong usage command
    if (argc != 2)
    {
        printf("Usage: ./recover [filename]\n");
        return 1;
    }

    // Open a file (the memory card) to read
    FILE *raw_file = fopen(argv[1], "r");

    // Check whether the file is valid
    if (raw_file == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    // Create a jpeg counter, a buffer store the raw memory, a boolean
    int ctr = 0;
    uint8_t buffer[JPEG_byte];
    bool found_JPEG = false;

    // Create a pointer outptr but not point to anything
    FILE *outptr = NULL;

    // Create an array to store the filename like 001.jpg , 002.jpg ... 8 means "6 words 1 dots 1 /0"
    char JPEG_name[8];

    // Loop until it != 1 (in the end)
    while (fread(buffer, JPEG_byte, 1, raw_file) == 1)
    {

        // Check if it is a jpeg header
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // If there is a JPEG before, close that previous JPEG
            if (found_JPEG)
            {
                fclose(outptr);
            }

            // If no JPEG is founded before, set the boolean to true for the first time
            else
            {
                found_JPEG = true;
            }

            // Print the image into the array "JPEG_name"
            sprintf(JPEG_name, "%03i.jpg", ctr);

            // Open the JPEG_name for writing
            outptr = fopen(JPEG_name, "w");

            // Check whether outptr is valid
            if (outptr == NULL)
            {
                fclose(raw_file);
                return 3;
            }
            ctr++;
        }
        // If found the header, write until find the new header
        if (found_JPEG)
        {
            fwrite(buffer, JPEG_byte, 1, outptr);
        }
    }
    fclose(raw_file);
    if (found_JPEG)
    {
        fclose(outptr);
    }
    return 0;
}
