#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int x;
  cin >> x;

  for (int i = x; i >= 2; i--)
  {
    int ctr = 0;
    for (int j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0) 
      {
        ctr++;
        break;
      }
    }
    if (ctr == 0) 
    {
      cout << i << endl;
      break;
    }
  }
}