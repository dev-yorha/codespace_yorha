#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  string s;
  cin >> s;
  cout << s;
  int n = s.length();
  for (int i = n - 1; i >= 0; i--)
  {
    cout << s[i];
  }
  cout << endl;
}