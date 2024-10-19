#include <iostream>
using namespace std;

int main(void)
{
  int d, m, y;
  cin >> d >> m >> y;

  if (m == 1)
  {
    m = 13;
    y-= 1;
  }
  else if (m == 2)
  {
    m = 14;
    y-= 1;
  }
  int k = y % 100, j = y / 100;
  int h = d + ((13 * (m + 1)) / 5) + k + (j / 4) + (k / 4) - 2 * j;
  h%= 7;
  string s[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", 
                "Thursday", "Friday"};
  cout << s[h] << endl;
}