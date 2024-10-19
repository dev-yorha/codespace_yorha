// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int size;
//     cout << "Input size: ";
//     cin >> size;

//     int arr[size - 1];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Input number: ";
//         cin >> arr[i];
//     }
//     int max = arr[0], min = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] >= max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] <= min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << "Min is " << min << endl;
//     cout << "Max is " << max << endl;

//     int temp;
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < arr[i - 1])
//         {
//             temp = arr[i - 1];
//             arr[i - 1] = arr[i];
//             arr[i] = temp;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(void)
// {
//     int size;
//     cout << "Input size: ";
//     cin >> size;

//     char **arr = (char**) malloc(size * sizeof(char*));
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Input student's name: ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         char min = arr[i][0];
//         for (int j = i + 1; j < size; j++)
//         {
//             if (min > arr[j][0])
//             {
//                 char* temp;
//                 strcpy(temp, arr[i]);
//                 strcpy(arr[i], arr[j]);
//                 strcpy(arr[j], temp);
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     free(arr);
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(void)
// {
//     int class_size = 3;
//     char *arr[class_size];
//     for (int i = 0; i < class_size; i++)
//     {
//         arr[i] = (char *) malloc(100);
//         cout << "Input student's name: ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < class_size; i++)
//     {
//         for (int j = i + 1; j < class_size; j++)
//         {
//             if (strncmp(arr[j], arr[i], 1) < 0)
//             {
//                 char *temp = (char *) malloc(100);
//                 strcpy(temp, arr[j]);
//                 strcpy(arr[j], arr[i]);
//                 strcpy(arr[i], temp);
//             }
//         }
//     }
//     for (int i = 0; i < class_size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < class_size; i++)
//     {
//         free(arr[i]);
//     }
// }


// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int size;
//     cout << "Input size: ";
//     cin >> size;

//     int *arr = (int *)malloc(size * sizeof(int));
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Input number: ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             for (int k = j + 1; k < size; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == 25)
//                 {
//                     cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
//                 }
//             }
//         }
//     }
// }

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int width, length;
//     do
//     {
//         cout << "Width: ";
//         cin >> width;
//     }
//     while (width < 3);

//     do
//     {
//         cout << "Length: ";
//         cin >> length;
//     }
//     while (length < 3);

//     int **arr = (int **)malloc(width * sizeof(int*));
//     for (int i = 0; i < width; i++)
//     {
//         arr[i] = (int *)malloc(length * sizeof(int));
//     }
//     for(int i = 0; i < width; i++)
//     {
//         for (int j = 0; j < length; j++)
//         {
//             cout << "Enter number [" << i << "]" << "[" << j << "]: ";
//             cin >> arr[i][j];
//         }
//     }

//     int max = arr[0][0];
//     int min = arr[0][0];
//     for (int i = 0; i < width; i++)
//     {
//         for (int j = 0; j < length; j++)
//         {
//             if (arr[i][j] > max)
//             {
//                 max = arr[i][j];
//             }
//             if (arr[i][j] < min)
//             {
//                 min = arr[i][j];
//             }
//         }
//     }
//     cout << "Min = " << min;
//     cout << "Max = " << max;

//     cout << "Max 3-3:";
//     int ctr = 0;
//     for (int i = 1; i < width - 1; i++)
//     {
//         for (int j = 1; j < length - 1; j++)
//         {
//             for (int m = i - 1; m < i + 2; m++)
//             {
//                 for (int n = j - 1; n < j + 2; n++)
//                 {
//                     if (arr[i][j] > arr[m][n])
//                     {
//                         ctr++;
//                     }
//                 }
//             }
//             if (ctr == 8)
//             {
//                 cout << arr[i][j] << endl;
//             }
//             ctr = 0;
//         }
//     }

//     cout << "Min 3-3:";
//     for (int i = 1; i < width - 1; i++)
//     {
//         for (int j = 1; j < length - 1; j++)
//         {
//             for (int m = i - 1; m < i + 2; m++)
//             {
//                 for (int n = j - 1; n < j + 2; n++)
//                 {
//                     if (arr[i][j] < arr[m][n])
//                     {
//                         ctr++;
//                     }
//                 }
//             }
//             if (ctr == 8)
//             {
//                 cout << arr[i][j] << endl;
//             }
//             ctr = 0;
//         }
//     }
// }

// #include <iostream>
// #include <cstring>
// #include <ctype.h>
// #include <cstdlib>
// using namespace std;

// int main(void)
// {
//     char* word = (char *)malloc(100 * sizeof(char));
//     cout << "Input word: ";
//     cin >> word;

//     int ctr = 0, i = 0;
//     while (word[i] != '\0')
//     {
//         ctr++;
//         i++;
//     }
//     int length = ctr;
//     ctr = 0;
//     cout << length << endl;

//     char *word2 = (char *)malloc(length);
//     for (int i = 0; i < length; i++)
//     {
//         if(isalpha(word[i]) || isdigit(word[i]))
//         {
//             word2[ctr] = word[i];
//             ctr++;
//         }
//     }
//     cout << word2 << endl;

//     char *word3 = (char *)malloc(length + 3);
//     int mid = length / 2;
//     for (int i = 0; i < length; i++)
//     {
//         if (i < mid)
//         {
//             word3[i] = word[i];
//         }
//         else if (i == mid)
//         {
//             word3[i] = 'C';
//             word3[i + 1] = '+';
//             word3[i + 2] = '+';
//             word3[i + 3] = word[i];
//         }
//         else
//         {
//             word3[i + 3] = word[i];
//         }
//     }
//     word3[length + 3] = '\0';
//     cout << word3 << endl;

//     if (length >= 7)
//     {
//         char* word4 = (char *)malloc(length - 5);
//         int mid = length / 2;

//         for (int i = 0; i < length; i++)
//         {
//             if (i < mid - 2)
//             {
//                 word4[i] = word[i];
//             }
//             else if (i > mid + 2)
//             {
//                 word4[i - 5] = word[i];
//             }
//         }
//         cout << word4 << endl;
//         free(word4);
//     }
//     free(word);
//     free(word2);
//     free(word3);
// }


// #include <iostream>

// using namespace std;

// int main() {
//     int class_size = 17;
//     int ctrT = 0, ctrC = 0, ctrV = 0, ctrA = 0, ctrQ = 0;
//     string students[class_size] = {"Alice", "Bob", "Charlie", "Yorha", "Vu", "Hoang", "Dung", "Toan", "Bi", "Quyen", "Minh", "Chi", "Linh", "Chau", "Hai", "Duong"};
//     for (int i = 0; i < class_size; i++)
//     {
//         switch (students[i][0])
//         {
//             case 'T':
//                 ctrT++;
//                 break;
//             case 'C':
//                 ctrC++;
//                 break;
//             case 'V':
//                 ctrV++;
//                 break;
//             case 'A':
//                 ctrA++;
//                 break;
//             case 'Q':
//                 ctrQ++;
//                 break;
//         }
//     }
//     cout << "Student starts with T: " << ctrT << endl;
//     cout << "Student starts with C: " << ctrC << endl;
//     cout << "Student starts with V: " << ctrV << endl;
//     cout << "Student starts with A: " << ctrA << endl;
//     cout << "Student starts with Q: " << ctrQ << endl;
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// #include <string>

// using namespace std;

// int main(void)
// {
//     int ctr = 1, i = 0, length = 0;
//     string ls;

//     cout << "Input student's name: ";
//     getline(cin, ls);
//     while (ls[i] != '\0')
//     {
//         length++;
//         i++;
//     }
//     for (int i = 0; i < length; i++)
//     {
//         if (ls[i] == ' ')
//         {
//             if (ls[i + 1] != ' ' || ls[i + 1] == '\0')
//             {
//                 ctr++;
//             }
//         }
//     }
//     cout << ctr << endl;
// }

#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(void)
{
    string stc;
    cout << "Input sentence: ";
    getline(cin, stc);

    int length = 0, i = 0;
    while (stc[i] != '\0')
    {
        length++;
        i++;
    }
    string rslt;
    int new_length = 0;

    int ctr = 0;
    if (isalnum(stc[0]))
    {
        rslt+= toupper(stc[0]);
    }
    else
    {
        ctr++;
    }

    for (i = 1; i < length; i++)
    {
        if ((isalnum(stc[i])))
        {
            if (stc[i - 1] == ' ')
            {
                rslt+= toupper(stc[i]);
                new_length++;
            }
            else
            {
                rslt+= tolower(stc[i]);
                new_length++;
            }
        }

        else if (stc[i] == ' ')
        {
            if (stc[i - 1] != ' ')
            {
                rslt+= stc[i];
                new_length++;
            }
        }
    }

    for (i = 0; i <= new_length; i++)
    {
        cout << rslt[i];
    }
    cout << endl;
}
