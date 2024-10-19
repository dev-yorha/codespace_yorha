// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int scores[7] = {1, 2, 3, 4, 5, 6, 7};
//     int sum = 0;

//     for (int count = 0; count < 7; count++)
//     {
//         sum+= *(scores + count);
//     }
//     cout << sum << endl;
//     return 0;
// }


// #include <iostream>

// using namespace std;

// int main(int argc, char *argv[])
// {
//     int *ptrApples;
//     ptrApples = new int;

//     *ptrApples = 5;
//     cout << "value at ptrApples: " << *ptrApples << endl;
//     *ptrApples += 2;
//     cout << "value at ptrApples: " << *ptrApples << endl;

//     delete ptrApples;

//     return 0;
// }


// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int numberCourses;
//     cout << "Enter the number of courses: ";
//     cin >> numberCourses;

//     int *courses;
//     courses = new int[numberCourses];

//     for(int i = 0; i < numberCourses; i++)
//     {
//         cout << "Enter the mark of course " << i << ": ";
//         cin >> courses[i];
//     }

//     int totalMark = 0;
//     for (int i = 0; i < numberCourses; i++)
//     {
//         totalMark+= courses[i];
//     }

//     cout << "Total mark: " << totalMark << endl;

//     delete [] courses;

//     return 0;
// }



// #include <iostream>

// using namespace std;

// void getMark(int *courses, int numberCourses);
// int calculateMark(const int *courses_NUM, int numberCourses);

// int main(int argc, char *argv[])
// {
//     int numberCourses;
//     cout << "Enter the number of courses: ";
//     cin >> numberCourses;
//     int *courses;
//     courses = new int[numberCourses];

//     getMark(courses, numberCourses);
//     int totalMark = calculateMark(courses, numberCourses);
//     cout << "Total mark: " << totalMark << endl;

//     delete courses;

//     return 0;
// }

// void getMark(int *courses, int numberCourses)
// {
//     for (int i = 0; i < numberCourses; i++)
//     {
//         cout << "Enter the mark of course " << i + 1 << ":";
//         cin >> courses[i];
//     }
// }

// int calculateMark(const int *courses_NUM, int numberCourses)
// {
//     int totalMark = 0;
//     for (int i = 0; i < numberCourses; i++)
//     {
//         totalMark+= courses_NUM[i];
//     }
//     return totalMark;
// }



// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int apples = 10;
//     int *ptrApp = &apples;
//     int *ptrApp2 = ptrApp;
//     apples+= 2;
//     *ptrApp--; // This step do not change the value of apples, but if we use *ptrApp-= 1, apples value will - 1
//     *ptrApp2+= 3;
//     cout << apples << endl;
// }



// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int *p1 = new int;
//     int *p2;
//     *p1 = 5;
//     p2 = p1;
//     cout << "*p1 = " << *p1 << endl;
//     cout << "*p2 = " << *p2 << endl;

//     *p2 = 10;
//     cout << "*p1 = " << *p1 << endl;
//     cout << "*p2 = " << *p2 << endl;

//     p1 = new int;
//     *p1 = 20;
//     cout << "*p1 = " << *p1 << endl;
//     cout << "*p2 = " << *p2 << endl;
// }


// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int num;
//     do
//     {
//         cout << "Enter the number of elements: ";
//         cin >> num;
//     }
//     while(num < 1);

//     int *arr;
//     arr = new int[num];

//     for (int i = 0; i < num; i++)
//     {
//         cout << "Enter the value: ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] % arr[0] == 0)
//         {
//             cout << arr[i] << endl;
//         }
//     }
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main(void)
// {
//     int size;
//     cout << "Number of students: ";
//     cin >> size;

//     string *arr;
//     arr = new string[size];

//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter student name: ";
//         cin >> arr[i];
//     }

//     string temp;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i].length() > arr[j].length())
//             {
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Syntax: ./pointer width length" << "\n";
        return 1;
    }
    int width = atoi(argv[1]);
    int length = atoi(argv[2]);

    char **arr;
    arr = new char *[width];
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            arr[i] = new char[sizeof(char)];
        }
    }

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << "Element[" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Check row
    for (int i = 0; i < width; i++)
    {
        for (int j = 1; j < length; j++)
        {
            if (arr[i][0] != arr[i][j])
            {
                break;
            }
            else if ((j == length - 1) && (arr[i][0] == arr[i][j]))
            {
                cout << "Row " << i << endl;
            }
        }
    }

    // Check column
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j < width; j++)
        {
            if (arr[0][i] != arr[j][i])
            {
                break;
            }
            else if ((j == width - 1) && (arr[0][i] == arr[j][i]))
            {
                cout << "Column " << i << endl;
            }
        }
    }

    // Check diagonal
    if (width == length)
    {
        for (int i = 1; i < width; i++)
        {
            if (arr[0][0] != arr[i][i])
            {
                break;
            }
            else if ((i == width - 1) && (arr[0][0] == arr[i][i]))
            {
                cout << "Left diagonal" << endl;
            }
        }

        for (int i = 1; i < width; i++)
        {
            if (arr[0][length - 1] != arr[i][length - i - 1])
            {
                break;
            }
            else if ((i == width - 1) && (arr[width - 1][width - 1] == arr[i][i]))
            {
                cout << "Right diagonal" << endl;
            }
        }
    }
}
