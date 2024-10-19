#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int sum = n + 1;
  for (int i = 2; i < n / 2 + 1; i++)
  {
    if (n % i == 0) sum+= i;
  }
  cout << sum << endl;
}