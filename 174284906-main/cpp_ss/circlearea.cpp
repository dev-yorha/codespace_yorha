// #include <iostream>

// using namespace std;
// float pi = 3.14;

// int main(void)
// {
//     float r;
//     cout << "Enter radius: ";
//     cin >> r;
//     float area = r * r * pi;
//     cout << "Area is " << area << "\n";
// }


// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int peter, essen;
//     cout << "Peter's length: ";
//     cin >> peter;
//     cout << "Essen's length: ";
//     cin >> essen;

//     float gap = (float) peter / (float) essen;
//     cout << "Peter is " << gap << " times as tall tas Essen" << "\n";
// }

// #include <iostream>

// using namespace std;

// float const width = 3.17654;
// float const length = 10.03212;

// int main(void)
// {
//     float area = width * length;
//     cout << "The area is " << area << " when width is " << width << " and length is " << length << "\n";
// }

#include <iostream>

using namespace std;

int a, b, c, d;

int main(void)
{
    cout << "Input a: ";
    cin >> a;

    cout << "Input b: ";
    cin >> b;

    cout << "Input c: ";
    cin >> c;

    cout << "Input d: ";
    cin >> d;

    if (a + b > c + d)
    cout << a + b << " > " << c + d << "\n";
    else if (a - b > c - d)
    cout << a - b << " > " << c - d << "\n";
    else
    cout << "bruh" << "\n";
}
