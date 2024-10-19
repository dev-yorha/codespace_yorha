#include <iostream>
using namespace std;

int main(void)
{
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];

  int max = 0, ctr = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % k == 0) ctr++;
    else ctr = 0;
    if (max < ctr) max = ctr;
  }

  cout << max << endl;
}