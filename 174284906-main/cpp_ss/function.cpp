// #include <iostream>

// using namespace std;

// float avg(int num1, int num2, int num3, int num4, int num5);
// int main(void)
// {
//     int a, b, c, d, e;
//     cout << "Input a: ";
//     cin >> a;

//     cout << "Input b: ";
//     cin >> b;

//     cout << "Input c: ";
//     cin >> c;

//     cout << "Input d: ";
//     cin >> d;

//     cout << "Input e: ";
//     cin >> e;

//     cout << "avg = " << avg(a, b, c, d, e) << "\n";
//     return 0;
// }
// float avg(int num1, int num2, int num3, int num4, int num5)
// {
//     float result = (num1 + num2 + num3 + num4 + num5) / 5.0;
//     return result;
// }

// #include <iostream>

// using namespace std;

// void find(int num1, int num2, int num3, int num4, int num5);
// int main(void)
// {
//     int const a = 13, b = 25, c = 35;
//     int x, y;

// }

// void find(int num1, int num2, int num3, int num4, int num5)
// {

// }

// #include <iostream>

// using namespace std;

// int getMin(int num1, int num2);
// int getMin(int num1, int num2, int num3);

// int main(void)
// {
//     int a = 3, b = 1, c = 5;
//     cout << "Min is " << getMin(a, b, c) << endl;
//     return 0;
// }

// int getMin(int num1, int num2)
// {
//     if (num1 >= num2)
//     {
//         return num2;
//     }
//     else
//     {
//         return num1;
//     }
// }

// int getMin(int num1, int num2, int num3)
// {
//     int temp = getMin(num1, num2);
//     if (temp >= num3)
//     {
//         return num3;
//     }
//     else
//     {
//         return temp;
//     }
// }

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(void)
// {
//     int x;
//     cout << "INPUT: ";
//     cin >> x;

//     cout << "sqrt(x) = " << sqrt(x) << endl;
//     cout << "e^x = " << exp(x) << endl;
// }

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     for (int i = 0; i < 9; i++)
//     {
//         int number = rand() % 98    + 2;
//         cout << number << endl;
//     }
// }

#include <iostream>

using namespace std;
void fibonacci(int end, int &sum);
int sum = 0, ele0 = 0, ele1 = 1;

int main(void)
{
    int k;
    cout << "Input f(k): ";
    cin >> k;
    fibonacci(k, sum);
    cout << "Sum = " << sum << endl;
}

void fibonacci(int end, int &sum)
{
    if (end <= 1)
    {
        cout << "Current 0 = 0" << endl;
        cout << "Current 1 = 1" << endl;
        sum+= 1;
        return;
    }
    fibonacci(end - 1, sum);

    int current = ele0 + ele1;
    sum+= current;
    int temp = current;
    ele0 = ele1;
    ele1 = temp;
    cout << "Current " << end << " = " << current << endl;
}
