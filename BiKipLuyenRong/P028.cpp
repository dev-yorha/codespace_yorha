#include <bits/stdc++.h>
using namespace std;

int rslt = 0;
int calc(int a, int b);
int main(void)
{
  int n, k;
  cin >> n >> k;
  int out = calc(n, k);
  cout << out << endl;
}

int calc(int a, int b) 
{
  if (a == 1)
  {
    rslt+= 1 + b;
    return rslt;
  }
  calc(a - 1, b);
  {
    rslt+= a * (a + b);
  }
  return rslt;
}