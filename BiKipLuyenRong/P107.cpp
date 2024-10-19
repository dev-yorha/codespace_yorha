#include <iostream>
using namespace std;

int main(void)
{
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  if ((x1 * y2 == x2 * y1) && (x1 * y3 == x3 * y1))
  {
    cout << "1" << endl;
    return 0;
  }
  cout << "0" << endl;
  return 0;
}