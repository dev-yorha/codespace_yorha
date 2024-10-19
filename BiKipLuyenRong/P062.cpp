#include <bits/stdc++.h>
using namespace std;

int fibonacci(int x)
{
  if (x <= 1) return 1;
  return fibonacci(x - 1) + fibonacci(x - 2);
}
int main(void)
{
  int n;
  cin >> n;

  int i = 1;
  while (fibonacci(i) <= n)
  {
    i++;
  }
   int rslt = fibonacci(i - 1);
   cout << rslt << endl;
}
