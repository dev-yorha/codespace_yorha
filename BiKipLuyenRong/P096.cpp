#include <iostream>
using namespace std;

int main(void)
{
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  int ctr = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int a = 0, b = 0, row = 0, col = 0;
      while (a != m)
      {
        if (a != j)
        {
          if (arr[i][j] > arr[i][a]) break;
          else row++;
        }
        a++;
      }
      while (b != n)
      {
        if (b != i)
        {
          if (arr[i][j] < arr[b][j]) break;
          else col++;
        }
        b++;  
      }
      if (col == n - 1 && row == m - 1) ctr++;
    }
  }
  cout << ctr << endl; 
}