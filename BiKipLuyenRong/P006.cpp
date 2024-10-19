#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  string name;
  cin >> name;

  int n = name.length();
  string rslt;
  for (int i = n - 1; i >= 0; i--)
  {
    rslt += name[i];
  }
  cout << rslt << endl;
}