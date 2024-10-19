#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int a = sqrt(n);
  if (a * a == n) cout << "YES" << endl;
  else cout << "NO" << endl;
}