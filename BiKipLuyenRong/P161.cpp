#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  int m, n;
  cin >> m >> n;
  int arr1[m], arr2[n];
  for (int i = 0; i < m; i++)
  {
    cin >> arr1[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> arr2[i];
  }

  int x = 0, y = 0;
  for (int i = 0; i < m; i++)
  {
    x+= arr1[i] * pow(10, m - i - 1);
  }
  for (int i = 0; i < n; i++)
  {
    y+= arr2[i] * pow(10, n - i - 1);
  }
  cout << x + y << endl;
}