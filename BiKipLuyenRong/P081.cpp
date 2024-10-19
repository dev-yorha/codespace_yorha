#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int a, b, digits = 0;
  cin >> a >> b;

  int newa = (a % 10) * 10 + a / 10;
  int newb = (b % 10) * 10 + b / 10;
  while (b != 0) 
  {
    b/= 10;
    digits++;
  }
  int c = newb;
  for (int i = 0; i < digits; i++)
  {
    c*= 10;
  }
  c+= newa;
  cout << c << endl;
}