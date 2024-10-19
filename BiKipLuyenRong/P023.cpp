#include <bits/stdc++.h>
using namespace std;

int a = 1;
int b = 2;

int calc(int n);
int main(void)
{
  int x;
  cin >> x;
  if (x < 0)
  {
    return 1;
  }
  else if (x == 0)
  {
    cout << "1" << endl;
  }
  else if (x == 1)
  {
    cout << "2" << endl;
  }
  else {
    cout <<  calc(x) << endl;
  }
}

int calc(int n)
{
  if (n <= 2)
  {
    return 0;
  }
  calc(n - 1);
  
  int temp = b;
  b = 2 * b - a;
  a = temp;

  return b;
}