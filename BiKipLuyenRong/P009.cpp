#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  char c;
  int n;
  cin >> c >> n;
  char newc = 97 + ((c + n - 97) % 26);
  cout << newc << endl;
}