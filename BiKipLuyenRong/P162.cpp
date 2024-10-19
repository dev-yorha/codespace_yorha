#include <iostream>
using namespace std;

int main(void)
{
  int a, b, c, t;
  cin >> a >> b >> c >> t;

  if (a == 0 || b == 0 || c == 0 || t == 0)
  {
    cout << "0" << endl;
    return 0;
  }
  int ctr = 0;
  for (int x = 0; x <= t / a; x++)
  {
    for (int y = 0; y <= t / b; y++)
    {
      for (int z = 0; z <= t / c; z++)
      if (a * x + b * y + c * z == t) ctr++;
    }
  }
  cout << ctr << endl;
}