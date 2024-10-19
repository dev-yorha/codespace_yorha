#include <iostream>
using namespace std;

int main(void)
{
  int n, k;
  cin >> n >> k;
  int arr[n], sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum+= arr[i];
  }

  if (sum % (k + 1) != 0)
  {
    cout << "NO" << endl;
    return 0;
  }

  int small = sum / (k + 1), temp = 0, ctr = 0, i = 0;
  while (temp < small)
  {
    temp+=arr[i];
    i++;
    ctr++;
    if (temp == small)
    {
      cout << ctr << " " << n - ctr << endl;
      return 0;
    }
    else if (temp > small)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
}