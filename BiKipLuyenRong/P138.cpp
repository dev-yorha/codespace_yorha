#include <iostream>
using namespace std;

int main(void)
{
  int arr[6];
  for (int i = 0; i < 6; i++)
  {
    cin >> arr[i];
  }

  int max = 0, min = 1;
  for (int i = 0; i < 6; i++)
  {
    int ctr = 0;
    for (int j = 0; j < 6; j++)
    {
      if (i != j)
      {
        if (arr[i] == arr[j]) ctr++;
      }
    }
    if (ctr > max) max = ctr;
    else if (ctr < min) min = ctr;
  }
  if (max < 3) 
  {
    cout << "Alien" << endl;
  }
  else if (max >= 3 && min == 1)
  {
    cout << "Elephant" << endl;
  }
  else cout << "Bear" << endl;
  return 0;
}