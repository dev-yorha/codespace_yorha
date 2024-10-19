#include <iostream>
using namespace std;

int main(void)
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];

  int max = 0, ctr = 0;
  for (int i = 1; i < n; i++)
  {
    if ((arr[i] * arr[i - 1]) < 0) ctr++;
    else ctr = 0;
    if (max < ctr) max = ctr;
  }
  if (max != 0) max++;
  
  cout << max << endl;
}

