#include <iostream>
using namespace std;

int main(void)
{
  int x, y;
  cin >> x >> y;

  int ctr = 0;
  if (x >= 0 && y >= 0)
  {
    cout << "1";
    ctr++;
  }
  
  if (x <= 0 && y >= 0)
  {
    if (ctr != 0) cout << " ";
    ctr++;
    cout << "2";
  }

  if (x <= 0 && y <= 0)
  {
    if (ctr != 0) cout << " ";
    ctr++;
    cout << "3";
  }

  if (x >= 0 && y <= 0)
  {
    if (ctr != 0) cout << " ";
    cout << "4";
  }
  cout << endl;
}