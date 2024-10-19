#include <iostream>
using namespace std;

int main(void)
{
  int n;
  cin >> n;
  int arr[n][2], ctr = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i][0] >> arr[i][1];
    if (arr[i][1] - arr[i][0] >= 2) ctr++;
  }
  cout << ctr << endl;
}