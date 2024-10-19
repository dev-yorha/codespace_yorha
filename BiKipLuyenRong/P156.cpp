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
    for (int j = i + 1; j < 5; j++)
    {
      if (arr[i] == arr[j])
      {
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  cout << "YES" << endl;
}