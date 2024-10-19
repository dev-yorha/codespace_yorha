#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int a = sqrt(n);
  if (a * a == n) cout << a * a << endl;
  else cout << (a + 1) * (a + 1) << endl; 
}