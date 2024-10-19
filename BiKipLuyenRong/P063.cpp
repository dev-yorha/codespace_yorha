#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n);
int main(void)
{
  int x;
  cin >> x;
  
  int i = 1;
  while (fibonacci(i) < x) i++;
  if (x == fibonacci(i) || x == fibonacci(i - 1)) cout << "YES";
  else cout << "NO";
}

int fibonacci(int n)
{
  if (n <= 1) return n;
  return fibonacci (n - 2) + fibonacci (n - 1);
}