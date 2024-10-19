#include <iostream>
using namespace std;

int main(void)
{
  int arr[5], x;
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }
  for (int i = 1; i < 1000000000; i++)
  {
    if ((i % arr[0] == 0) && (i % arr[1] == 0) && (i % arr[2] == 0) && 
        (i % arr[3] == 0) && (i % arr[4] == 0))
    {
      x = i;
      break;
    }
  }

  cout << x << endl;
}