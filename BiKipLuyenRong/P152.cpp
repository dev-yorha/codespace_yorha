#include <iostream>
using namespace std;

int main(void)
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  int maxCtr = 0, max = arr[0];
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
    if ((maxCtr <= ctr) && (max <= arr[i])) 
    {
      maxCtr = ctr;
      max = arr[i];
    }
  }
  cout << max << endl;
}