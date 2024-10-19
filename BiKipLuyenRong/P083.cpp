#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n, rslt = 0;
  cin >> n;

  int arr[n];
  for (int i = 1; i <= n; i++) cin >> arr[i];
  for (int i = 1; i <= n; i++)
  {
    rslt+= i * arr[i];
  }
  cout << rslt << endl;
}