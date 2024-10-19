// #include <iostream>

// using namespace std;

// struct Time {
//     int hour;
//     int minute;
//     int second;
// };

// void print(const Time &t)
// {
//     cout << t.hour << "." << t.minute << "." << t.second;
// }

// void setTime(Time &t, int h, int m, int s)
// {
//     t.hour = h;
//     t.minute = m;
//     t.second = s;
// }

// int main(void)
// {
//     Time dinnerTime, midnight;

//     setTime(dinnerTime, 18, 30, 0);
//     setTime(midnight, 0, 0, 0);

//     cout << "Dinner will be held at ";
//     print(dinnerTime);
//     cout << endl;
//     cout << "Light will be switched off at ";
//     print(midnight);
//     cout << endl;

//     return 0;
// }


// #include <iostream>

// using namespace std;

// class Time {
// public:
//     void print()
//     {
//         cout << hour << ":" << minute << ":" << second;
//     }

//     void setTime(int h, int m, int s)
//     {
//         hour = h; minute = m; second = s;
//     }

//     int hour;
//     int minute;
//     int second;
// };

// int main(void)
// {
//     Time dinnerTime, midnight;

//     dinnerTime.setTime(18, 30, 0);
//     midnight.setTime(0, 0, 0);

//     cout << "Dinner will be held at ";
//     dinnerTime.print();
//     cout << endl;
//     cout << "Light will be switched off at ";
//     midnight.print();
//     cout << endl;

//     return 0;
// }


// #include <iostream>

// using namespace std;

// class Time {
// public:
//     void print()
//     {
//         cout << hour << ":" << minute << ":" << second;
//     }

//     bool setTime(int h, int m, int s);

// private:
//     int hour;
//     int minute;
//     int second;
//     bool isValid(int h, int m, int s)
//     {
//         return (h >= 0 && h < 24) &&
//             (m >= 0 && m < 60) && (s >= 0 && s < 60);
//     }
// };

// bool Time::setTime(int h, int m, int s)
// {
//     if (!isValid(h,m,s))
//     {
//         return false;
//     }
//     hour = h; minute = m; second = s;
//     return true;
// }
// int main(void)
// {
//     Time dinnerTime, midnight;

//     dinnerTime.setTime(18, 30, 0);
//     midnight.setTime(0, 0, 0);

//     cout << "Dinner will be held at ";
//     dinnerTime.print();
//     cout << endl;
//     cout << "Light will be switched off at ";
//     midnight.print();
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// #include <cstring>

// using namespace std;

// class Time
// {
// public:
//     Time()
//     {
//         hour = minute = second = 0;
//         note = 0;
//     }

//     Time(int h, int m, int s, const char *n)
//     {
//         setTime(h, m, s);
//         note = new char[strlen(n) + 1];
//         strcpy(note, n);
//     }

//     ~Time()
//     {
//         delete [] note;
//     }

//     bool setTime(int h, int m, int s)
//     {
//         if (!isValid(h,m,s))
//         {
//             return false;
//         }
//         hour = h; minute = m; second = s;
//         return true;
//     }

//     void print()
//     {
//         cout << hour << ":" << minute << ":" << second;
//         if (note != 0)
//         {
//             cout << " (" << note << ")";
//         }
//     }
// private:
//     int hour, minute, second;
//     char *note;
//     bool isValid(int h, int m, int s)
//     {
//         return (h >= 0 && h < 24) &&
//                (m >= 0 && m < 60) && (s >= 0 && s < 60);
//     }
// };

// int main(void)
// {
//     Time dinnerTime(19, 30, 0, "first date");
//     Time midnight;

//     cout << "Dinner will be held at ";
//     dinnerTime.print();
//     cout << endl << "Light will be switched off at ";
//     midnight.print();
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// #include <cmath>
// #include <cstdlib>

// using namespace std;

// class triangle
// {
// public:
//     float area(int first, int second, int third)
//     {
//         float semip = (first + second + third) / 2.0;
//         float s = sqrt(semip * (semip - first) * (semip - second) * (semip - third));
//         return s;
//     }

//     bool check(int first, int second, int third)
//     {
//         if (!isValid(first, second, third))
//         {
//             return false;
//         }
//         a = first;
//         b = second;
//         c = third;
//         return true;
//     }

//     void type(int first, int second, int third)
//     {
//         if ((first == second) && (second == third))
//         {
//             cout << "This is equilateral triangle" << endl;
//             return;
//         }
//         else if (((first == second) && (first!= third)) || ((first == third) && (first != second)) ||
//                 ((second == third) && (second != first)))
//         {
//             cout << "This is isoceles triangle" << endl;
//             return;
//         }

//         else
//         {
//             cout << "This is scalene triangle" << endl;
//             return;
//         }
//     }
// private:
//     int a, b, c;
//     bool isValid(int first, int second, int third)
//     {
//         return (first + second > third) && (first + third > second) &&
//                (second + third > first);
//     }
// };

// int main(int argc, char *argv[])
// {
//     if (argc != 4)
//     {
//         cout << "Syntax: ./structure a b c" << endl;
//         return 1;
//     }

//     int x = atoi(argv[1]);
//     int y = atoi(argv[2]);
//     int z = atoi(argv[3]);

//     triangle t;

//     if (!t.check(x, y, z))
//     {
//         cout << "This is not a triangle" << endl;
//         return 1;
//     }

//     cout << "Area of the triangle is " << t.area(x, y, z) << endl;
//     t.type(x, y, z);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int const toDay = 1, toMonth = 1, toYear = 2020;

// class date {
// public:
//     date(int d, int m, int y) // constructor
//     {
//         if(!check(d, m, y))
//         {
//             cout << "Invalid date" << endl;
//         }
//     }

//     void prev(int d, int m, int y)
//     {
//         if (!check(d, m, y))
//         {
//             return;
//         }
//         int newd, newm, newy;
//         if (d > 1)
//         {
//             newd = d - 1;
//             newm = m;
//             newy = y;
//         }
//         else
//         {
//             if (m == 1)
//             {
//                 newd = 31;
//                 newm = 12;
//                 newy = y - 1;
//             }
//             else if (m == 2 || m == 4 || m == 6 || 
//                      m == 8 || m == 9 || m == 11)
//             {
//                 newd = 31;
//                 newm = m - 1;
//                 newy = y;
//             }
//             else if (m == 3)
//             {
//                 newm = 2;
//                 newy = y;
//                 if (y % 4 == 0)
//                 {
//                     newd = 29;
//                 }
//                 else
//                 {
//                     newd = 28;
//                 }
//             }
//             else
//             {
//                 newd = 30;
//                 newm = m - 1;
//                 newy = y;
//             }
//         }
//         cout << newd << "/" << newm << "/" << newy << endl;
//     }

//     int count(int d, int m, int y)
//     {
//         int days = 0;
//         int gapYear = toYear - y;

//         if (gapYear != 1)
//         {
//             for (int i = 1; i < gapYear; i++)
//             {
//                 if ((y + i) % 4 == 0)
//                 {
//                     days += 366;
//                 }
//                 else
//                 {
//                     days += 365;
//                 }
//             }
//         }
//         for (int i = m; i <= 12; i++)
//         {
//             switch(i)
//             {
//                 case 2:
//                     if (y % 4 == 0)
//                     {
//                         days+= 29;
//                         break;
//                     }
//                     else
//                     {
//                         days+= 28;
//                         break;
//                     }
//                 case 4: case 6: case 9: case 11:
//                 {
//                     days+= 30;
//                     break;
//                 }
//                 default:
//                 {
//                     days+= 31;
//                     break;
//                 }
//             }
//         } 
//         days-= (d - 1);
//         return days;
//     }

// private:
//     int day, month, year;
//     bool myValid(int month, int year)
//     {
//         return (1 <= month && month <= 12) && (0 <= year && year <= 2019);
//     }

//     bool dayValid(int day, int month, int year)
//     {
//         if (month == 2)
//         {
//             if (year % 4 == 0)
//             {
//                 return (1 <= day && day <= 29);
//             }
//             else
//             {
//                 return (1 <= day && day <= 28);
//             }
//         }
//         else if (month == 1 || month == 3 || month == 5 ||
//                  month == 7 || month == 8 || month == 10 ||
//                  month == 12)
//         {
//             return (1 <= day && day <= 31);
//         }
//         else 
//         {
//             return (1 <= day && day <= 30);
//         }
//     }

//     bool check(int d, int m, int y)
//     {
//         if (!myValid(m, y))
//         {
//             return false;
//         }
//         if (!dayValid(d, m, y))
//         {
//             return false;
//         }
//         day = d;
//         month = m;
//         year = y;
//         return true;
//     }  
// };

// int main(void)
// {
//     date x(31, 3, 2006);
//     x.prev(31, 3, 2006);
//     cout << "There are " << x.count(31, 3, 2006) << " days to 1/1/2020" << endl;
// }



// #include <iostream>
// #include <cstring>
// #include <string>
// using namespace std;

// int const toDay = 22, toMonth = 9, toYear = 2024;
// class student
// {
// public:
//     bool rankCheck(float r)
//     {
//         if (!rankValid(r))
//         {
//             return false;
//         }
//         rank = r;
//         return true;
//     }

//     bool dateCheck(int d, int m, int y)
//     {
//         if ((!myValid(m, y)) || (!dayValid(d, m, y)))
//         {
//             return false;
//         }
//         day = d;
//         month = m;
//         year = y;
//         return true;
//     }

//     int ageCalc(int d, int m, int y)
//     {
//         if ((m <= toMonth) && (d < toDay))
//         {
//             return toYear - y - 1;
//         } 
//         else
//         {
//             return toYear - y;
//         }
//     }

//     void rankCalc(float r)
//     {
//         if (r < 6.0)
//         {
//             cout << "Kem" << endl;
//         }
//         else if (r >= 6.0 && r < 8.0)
//         {
//             cout << "Trung binh" << endl;
//         }
//         else if (r >= 8.0 && r < 9.0)
//         {
//             cout << "Gioi" << endl;
//         }
//         else
//         {
//             cout << "Xuat sac" << endl;
//         }
//     }

//     void cityCheck(string t)
//     {
//         town = t;
//         if (t == "Ha Noi" || t == "Ho Chi Minh" || t == "Da Nang")
//         {
//             cout << "Big city" << endl;
//         }
//         else
//         {
//             cout << "Small city" << endl;
//         }
//     }

//     student(string n, int d, int m, int y, string t, string c, float r)
//     {
//         dateCheck(d, m, y);
//         rankCheck(r);
//         name = n;
//         town = t;
//         classroom = c;
//     }

//     void display()
//     {
//         cout << name << endl;
//         cout << day << "/" << month << "/" << year << endl;
//         cout << town << endl;
//         cout << classroom << endl;
//         cout << rank << endl;
//         cout << "Check:" << endl;
//         cout << ageCalc(day, month, year) << " tuoi" << endl;
//         rankCalc(rank);
//         cityCheck(town);
//     }

// private:
//     string name;
//     int day, month, year;
//     string town;
//     string classroom;
//     float rank;

//     bool rankValid(float rank)
//     {
//         return (0.0 <= rank && rank <= 10.0); 
//     }

//     bool myValid(int month, int year)
//     {
//         return (1 <= month && month <= 12) && (2000 <= year && year <= 2023);
//     }

//     bool dayValid(int day, int month, int year)
//     {
//         if (year % 4 == 0)
//         {
//             if (month == 1 || month == 3 || month == 5 || month == 7 ||
//                 month == 8 || month == 10 || month == 12)
//             {
//                 return (1 <= day && day <= 31);
//             }
//             else if (month == 2)
//             {
//                 return (1 <= day && day <= 29);
//             }
//             else
//             {
//                 return (1 <= day && day <= 30);
//             }
//         }
//         else
//         {
//             if (month == 1 || month == 3 || month == 5 || month == 7 ||
//                 month == 8 || month == 10 || month == 12)
//             {
//                 return (1 <= day && day <= 31);
//             }
//             else if (month == 2)
//             {
//                 return (1 <= day && day <= 28);
//             }
//             else
//             {
//                 return (1 <= day && day <= 30);
//             }
//         }
//     }
// };

// int main(void)
// {
//     student student("Yorha", 31, 3, 2006, "Ha Noi", "AI5", 10.0);
//     student.display();

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

class student {
public:
    student (string n, string t, float m)
    {
        if (!markValid(m))
        {
            cout << "Invalid mark" << endl;
            return;
        }
        name = n;
        town = t;
        mark = m;
    }
private:
    string name, town;
    float mark;

    bool markValid(float mark)
    {
        return (0 <= mark && mark <= 10);
    }
};

int main(void)
{
    int n;
    cout << "Input number of students: " << endl;
    cin >> n;
    student* ls;
    ls = new student[n]; 

    for (int i = 0; i < n; i++)
    {
        cout << "Input student's first name: " << endl;
        cin >> ls[i].name;
        cout << "Input student's town: " << endl;
        cin >> ls[i].town;
        cout << "Input student's mark: " << endl;
        cin >> ls[i].mark;
    }
}