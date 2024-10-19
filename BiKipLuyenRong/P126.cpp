#include <iostream>
using namespace std;

void check(int x, int c)
{
  if (x == 1)
  {
    cout << "NO" << endl;
    return;
  }
  
  if (c % x != 0)
  {
    cout << "NO" << endl;
    return;
  }

  for (int i = 2; i <= x / 2; i++)
  {
    if (x % i == 0)
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
  return;
}
int main(void)
{
  int m, n;
  cin >> m >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    check(arr[i], m);
  }
}