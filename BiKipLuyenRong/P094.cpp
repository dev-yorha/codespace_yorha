#include <iostream>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int arr[n][n];
  arr[0][0] = 1;
  arr[1][0] = 1; 
  arr[1][1] = 1;

  if (n == 1) 
  {
    cout << "1" << endl;
    return 0;
  }
  cout << "1" << endl << "1 1" << endl; 

  for (int i = 2; i < n; i++)
  {
    arr[i][0] = 1;
    cout << "1 ";
    for (int j = 1; j < i; j++)
    {
      arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
      cout << arr[i][j] << " ";
    }
    arr[i][i] = 1;
    cout << "1 " << endl;
  }
  return 0;
}