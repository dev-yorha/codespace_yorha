#include <iostream>
using namespace std;

int main(void)
{
  int n, d;
  cin >> n >> d;
  float arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int ctr = 0;
  if (arr[0] >= d) ctr++; 
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i + 1] - arr[i] >= d) ctr++;
  }
  cout << ctr << endl;
}