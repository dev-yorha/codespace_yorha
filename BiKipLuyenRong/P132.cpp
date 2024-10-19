#include <iostream>
using namespace std;

int gcd(int x, int y)
{
  if (x == 0 || y == 0) return 0;
  if (x == y) return x;
  else if (x > y) return gcd(x - y, y);
  return gcd(x, y - x);
}

void check(int x)
{
  for (int i = 2; i < x / 2; i++)
  {
    if (x % i == 0)
    {
      cout << "no" << endl;
      return;
    }
  }
  cout << "yes" << endl;
  return;
}

int main(void)
{
  int a, b;
  cin >> a >> b;

  int c = gcd(a, b);
  check(c);
  return 0;
}