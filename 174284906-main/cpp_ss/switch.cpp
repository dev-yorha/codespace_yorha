// #include <iostream>

// using namespace std;

// int main(void)
// {
//     char grade = 'Z';
//     switch (grade)
//     {
//         case 'A':
//             cout << "grade = A" << "\n";
//             break;
//         case 'B':
//             cout << "grade = B" << "\n";
//             break;
//         case 'C':
//             cout << "grade = C" << "\n";
//             break;
//         default:
//             cout << "NOT RANKING";
//     }
// }

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int mark;
//     do
//     {
//         cout << "What is your mark? ";
//         cin >> mark;
//     }
//     while (mark < 0 || mark > 10);
//     switch (mark)
//     {
//         case 0 ... 4:
//             {
//                 cout << "Kem" << "\n";
//                 break;
//             }
//         case 5 ... 6:
//             {
//                 cout << "Trung binh" << "\n";
//                 break;
//             }
//         case 7 ... 9:
//             {
//                 cout << "Gioi" << "\n";
//                 break;
//             }
//         default:
//             {
//                 cout << "Xuat sac" << "\n";
//                 break;
//             }
//     }
// }

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(void)
// {
//     float a, b, c;
//     do
//     {
//         cout << "Input a: ";
//         cin >> a;
//     }
//     while (a <= 0);

//     do
//     {
//         cout << "Input b: ";
//         cin >> b;
//     }
//     while (b <= 0);

//     do
//     {
//         cout << "Input c: ";
//         cin >> c;
//     }
//     while (c <= 0);

//     if (a + b <= c || a + c <= b || b + c <= a)
//     {
//         cout << "This is not a triangle\n";
//     }

//     else
//     {
//         float p = (a + b + c) / 2;
//         float area = sqrt(p * (p - a) * (p - b) * (p - c));
//         cout << "This triangle has the area of " << area << "\n";
//     }
// }


// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int ctr = 0, crr, sum = 0;
//     while (true)
//     {
//         cout << "Input mark: ";
//         cin >> crr;
//         if (crr < 0)
//         {
//             break;
//         }
//         sum+= crr;
//         ctr++;
//     }
//     float avg = (float) sum / (float) ctr;
//     cout << "Average: " << avg << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int number;
//     do
//     {
//         cout << "Input the number";
//         cin >> number;
//     }
//     while (number < 0);

//     int sum = 0;
//     int crr = 1;
//     while (crr < number)
//     {
//         sum+= crr;
//         crr+= 2;
//     }
//     cout << "sum = " << sum << endl;
// }

#include <iostream>

using namespace std;

int main(void)
{
    unsigned int number;
    do
    {
        cout << "Input number: ";
        cin >> number;
    }
    while (number < 0);
    if (number == 1 || number == 2)
    {
        cout << number << " is a prime number\n";
        return 0;
    }
    else if (number == 0)
    {
        cout << number << " is not a prime number\n";
        return 0;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << number << " is not a prime number\n";
            return 0;
        }
    }
    cout << number << " is a prime number\n";
    return 0;
}
