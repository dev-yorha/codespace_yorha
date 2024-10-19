#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int a = n;
  int sum = 0;
  while (a != 0)
  {
    int digit = a % 10;
    sum+= digit;
    a/= 10;
  }
  if (n % sum == 0) cout << "YES";
  else cout << "NO";
}