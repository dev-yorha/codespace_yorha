#include <iostream>

using namespace std;
int main(void)
{
  int n;
  cin >> n;

  for (int i = 1; i < n; i++)
  {
    int buffer = n;
    int j = i;
    while (true)
    {
      buffer-= j;
      if (buffer == 0)
      {
        for (int k = i; k <= j; k++)
        {
          cout << k << " ";
        }
        return 0;
      }
      else if (buffer < 0)
      {
        break;
      }
      j++;
    }
  }
}
