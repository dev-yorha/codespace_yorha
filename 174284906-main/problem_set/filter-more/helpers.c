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

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    // New array with past-border-value and original value
    RGBTRIPLE raw[height + 2][width + 2];
    for (int i = 0; i < height + 2; i++)
    {
        for (int j = 0; j < width + 2; j++)
        {
            if (i == 0 || j == 0 || i == height + 1 || j == width + 1)
            {
                raw[i][j].rgbtRed = 0;
                raw[i][j].rgbtGreen = 0;
                raw[i][j].rgbtBlue = 0;
            }
            else
            {
                raw[i][j].rgbtRed = image[i - 1][j - 1].rgbtRed;
                raw[i][j].rgbtGreen = image[i - 1][j - 1].rgbtGreen;
                raw[i][j].rgbtBlue = image[i - 1][j - 1].rgbtBlue;
            }
        }
    }

    int GxA[3][3] = {
        {-1, 0, 1},
        {-2, 0, 2},
        {-1, 0, 1}
    };
    int GyA[3][3] = {
        {-1, -2, -1},
        {0, 0, 0},
        {1, 2, 1}
    };
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int GxRed = 0, GxGreen = 0, GxBlue = 0;
            int GyRed = 0, GyGreen = 0, GyBlue = 0;
            for (int ctrGy = 0; ctrGy < 3; ctrGy++)
            {
                for (int ctrGx = 0; ctrGx < 3; ctrGx++)
                {
                    GxRed += GxA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtRed;
                    GxGreen += GxA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtGreen;
                    GxBlue += GxA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtBlue;

                    GyRed += GyA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtRed;
                    GyGreen += GyA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtGreen;
                    GyBlue += GyA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtBlue;
                }
            }
            image[i][j].rgbtRed = fmin(round(sqrt(pow(GxRed, 2.0) + pow(GyRed, 2.0))), 255);
            image[i][j].rgbtGreen = fmin(round(sqrt(pow(GxGreen, 2.0) + pow(GyGreen, 2.0))), 255);
            image[i][j].rgbtBlue = fmin(round(sqrt(pow(GxBlue, 2.0) + pow(GyBlue, 2.0))), 255);
        }

    }
}





// Wrong version idk why

// void edges(int height, int width, RGBTRIPLE image[height][width])
// {
//     // New array with past-border-value and original value
//     RGBTRIPLE raw[height + 2][width + 2];
//     for (int i = 0; i < height + 2; i++)
//     {
//         for (int j = 0; j < width + 2; j++)
//         {
//             if (i == 0 || j == 0 || i == height + 1 || j == width + 1)
//             {
//                 raw[i][j].rgbtRed = 0;
//                 raw[i][j].rgbtGreen = 0;
//                 raw[i][j].rgbtBlue = 0;
//             }
//             else
//             {
//                 raw[i][j].rgbtRed = image[i - 1][j - 1].rgbtRed;
//                 raw[i][j].rgbtGreen = image[i - 1][j - 1].rgbtGreen;
//                 raw[i][j].rgbtBlue = image[i - 1][j - 1].rgbtBlue;
//             }
//         }
//     }

//     RGBTRIPLE Gx[height][width];
//     RGBTRIPLE Gy[height][width];
//     int GxA[3][3] = {
//         {-1, 0, 1},
//         {-2, 0, 2},
//         {-1, 0, 1}
//     };
//     int GyA[3][3] = {
//         {-1, -2, -1},
//         {0, 0, 0},
//         {1, 2, 1}
//     };
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             Gx[i][j].rgbtRed = 0; Gx[i][j].rgbtGreen = 0; Gx[i][j].rgbtBlue = 0;
//             Gy[i][j].rgbtRed = 0; Gy[i][j].rgbtGreen = 0; Gy[i][j].rgbtBlue = 0;
//             for (int ctrGy = 0; ctrGy < 3; ctrGy++)
//             {
//                 for (int ctrGx = 0; ctrGx < 3; ctrGx++)
//                 {
//                     Gx[i][j].rgbtRed += GxA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtRed;
//                     Gx[i][j].rgbtGreen += GxA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtGreen;
//                     Gx[i][j].rgbtBlue += GxA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtBlue;

//                     Gy[i][j].rgbtRed += GyA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtRed;
//                     Gy[i][j].rgbtGreen += GyA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtGreen;
//                     Gy[i][j].rgbtBlue += GyA[ctrGy][ctrGx] * raw[ctrGy + i][ctrGx + j].rgbtBlue;
//                 }
//             }
//             image[i][j].rgbtRed = fmin(round(sqrt(pow(Gx[i][j].rgbtRed, 2.0) + pow(Gy[i][j].rgbtRed, 2.0))), 255);
//             image[i][j].rgbtGreen = fmin(round(sqrt(pow(Gx[i][j].rgbtGreen, 2.0) + pow(Gy[i][j].rgbtGreen, 2.0))), 255);
//             image[i][j].rgbtBlue = fmin(round(sqrt(pow(Gx[i][j].rgbtBlue, 2.0) + pow(Gy[i][j].rgbtBlue, 2.0))), 255);
//         }
//     }
// }
