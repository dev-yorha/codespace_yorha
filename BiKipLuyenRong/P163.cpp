#include <iostream>
#include <algorithm>
using namespace std;
void binarySearch(int a[], int left, int right, int target)
{
  if (left > right)
  {
    cout << "0" << endl;
    return;
  }
  int middle = (left + right) / 2;
  if (target == a[middle])
  {
    cout << "1" << endl;
    return;
  }
  else if (target > a[middle])
  {
    return binarySearch(a, middle + 1, right, target);
  }
  else if (target < a[middle])
  {
    return binarySearch(a, left, middle - 1, target);
  }
}

int main(void)
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int x;
  cin >> x;
  sort(arr, arr + n);
  binarySearch(arr, 0, n - 1, x);
}