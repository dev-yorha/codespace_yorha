#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int x, ctr = 0;
  cin >> x;
  int end = sqrt(x) + 1;
  for (int i = 1; i < end; i++) if (x % i == 0) ctr++;
  cout << ctr << endl;
}