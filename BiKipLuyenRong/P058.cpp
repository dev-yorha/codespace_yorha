#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int x;
  cin >> x;
  if (x % 2 != 0) cout << x / 2 << " " << x / 2 + 1 << endl;
  else cout << x / 2 << " " << x / 2 << endl;
}