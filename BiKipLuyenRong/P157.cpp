#include <iostream>
using namespace std;

int main(void)
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
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
    if (ctr == 2)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}