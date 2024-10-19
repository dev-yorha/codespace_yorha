#include <iostream>
#include <string>
using namespace std;

void erase(int array[], int place, int &size)
{
  for (int i = place; i < size - 1; i++)
  {
    array[i] = array[i + 1];
  }
  size--;
  return;
}

int main(void) {
  int n, p;
  cin >> n >> p;

  int arr[n]; 
  for (int i = 0; i < n; i++)
  {
    arr[i] = i + 1;
  }

  int x;
  for (int i = 0; i < p; i++)
  {
    cin >> x;
    for (int j = 0; j < n; j++)
    {
      if (x == arr[j])
      {
        erase(arr, j, n);
      }
    }
  } 

  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> x;
    for (int j = 0; j < n; j++)
    {
      if (x == arr[j])
      {
        erase(arr, j, n);
      }
    }
  }
  if (n == 0) cout << "WIN" << endl;
  else cout << "LOSE" << endl;
}