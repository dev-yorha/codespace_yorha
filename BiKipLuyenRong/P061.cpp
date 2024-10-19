// #include <bits/stdc++.h>
// using namespace std;

// int a = 1, b = 1;
// int calc(int n);
// int main(void)
// {
//   int n;
//   cin >> n;
//   int rslt = calc(n);
//   cout << rslt << endl;
// }

// int calc(int n)
// {
//   if (n == 2) return 1;
//   calc(n - 1);
//   int temp = b;
//   b = a + b;
//   a = temp;
//   return b;
// }

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n);
int main(void)
{
  int x;
  cin >> x;
  int rslt = fibonacci(x);
  cout << rslt << endl;
}
int fibonacci(int n)
{
  if (n <= 1) return n;
  return fibonacci (n - 2) + fibonacci (n - 1);
}