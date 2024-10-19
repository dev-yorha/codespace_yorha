#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float avg = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / (float) 3;
            image[i][j].rgbtBlue = round(avg);
            image[i][j].rgbtGreen = round(avg);
            image[i][j].rgbtRed = round(avg);
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float sepiaRed = .393 * image[i][j].rgbtRed +
                           .769 * image[i][j].rgbtGreen +
                           .189 * image[i][j].rgbtBlue;
            float sepiaGreen = .349 * image[i][j].rgbtRed +
                           .686 * image[i][j].rgbtGreen +
                           .168 * image[i][j].rgbtBlue;
            float sepiaBlue = .272 * image[i][j].rgbtRed +
                           .534 * image[i][j].rgbtGreen +
                           .131 * image[i][j].rgbtBlue;

            image[i][j].rgbtRed = round(sepiaRed);
            image[i][j].rgbtGreen = round(sepiaGreen);
            image[i][j].rgbtBlue = round(sepiaBlue);

            if (sepiaRed > 255)
            {
                image[i][j].rgbtRed = 255;
            }
            if (sepiaGreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                image[i][j].rgbtBlue = 255;
            }
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            int tempRed = image[i][width - j - 1].rgbtRed;
            int tempGreen = image[i][width - j - 1].rgbtGreen;
            int tempBlue = image[i][width - j - 1].rgbtBlue;

            image[i][width - j - 1].rgbtRed = image[i][j].rgbtRed;
            image[i][width - j - 1].rgbtGreen = image[i][j].rgbtGreen;
            image[i][width - j - 1].rgbtBlue = image[i][j].rgbtBlue;

            image[i][j].rgbtRed = tempRed;
            image[i][j].rgbtGreen = tempGreen;
            image[i][j].rgbtBlue = tempBlue;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE raw[height][width];
    int ctr = 0;
    int tempRed = 0, tempGreen = 0, tempBlue = 0;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            for (int a = i - 1; a < i + 2; a++)
            {
                for (int b = j - 1; b < j + 2; b++)
                {
                    if ( a >= 0 && b >= 0 && a <= height - 1 && b <= width - 1)
                    {
                        tempRed+= image[a][b].rgbtRed;
                        tempGreen+= image[a][b].rgbtGreen;
                        tempBlue+= image[a][b].rgbtBlue;
                        ctr++;
                    }
                }
            }
            if (ctr > 0)
            {
                raw[i][j].rgbtRed = round((float)tempRed / (float)ctr);
                raw[i][j].rgbtGreen = round((float)tempGreen / (float)ctr);
                raw[i][j].rgbtBlue = round((float)tempBlue / (float)ctr);
            }
            ctr = 0;
            tempRed = 0, tempGreen = 0, tempBlue = 0;
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = raw[i][j].rgbtRed;
            image[i][j].rgbtGreen = raw[i][j].rgbtGreen;
            image[i][j].rgbtBlue = raw[i][j].rgbtBlue;
        }
    }
    return;
}
