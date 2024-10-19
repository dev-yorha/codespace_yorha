#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int a[n], ctr = 0;
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i++)
  {
    int x = sqrt(a[i]);
    if (x * x == a[i]) ctr++;
  }
  cout << ctr << endl;
}