#include <iostream>
using namespace std;

int main(void)
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = i + 1; j < 4; j++)
    if (arr[j] > arr[j + 1])
    {
      int temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    int ctr = 0;
    for (int j = 0; j < 5; j++)
    {
      if (i != j)
      {
        if (arr[i] == arr[j]) ctr++;
      }
    }
    if (ctr > 1)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  
  if (arr[0] == arr[1])
  {
    if ((arr[2] == arr[3]) && (arr[0] != arr[3]))
    {
      cout << "YES" << endl;
      return 0;
    }
    else if ((arr[3] == arr[4]) && (arr[0] != arr[3]))
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  else if (arr[1] == arr[2])
  {
    if ((arr[3] == arr[4]) && (arr[1] != arr[3]))
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}