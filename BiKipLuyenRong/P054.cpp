#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int half = n / 2;
  for (int i = 2; i < half; i++)
  {
    while (n % i == 0)
    {
      n/= i;
      cout << i << " ";
    }
  }
  cout << endl;
}