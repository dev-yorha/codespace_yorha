#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int a, b, n;
  cin >> a >> b;
  if (a >= b)
  {
    n = a / 2;
  }
  else
  {
    n = b / 2;
  }
  for (int i = 2; i < n; i++)
  {
    while (a % i == 0 && b % i == 0)
    {
      a/= i;
      b/= i;
    }
  }
  cout << a << " "<< b << endl;
}