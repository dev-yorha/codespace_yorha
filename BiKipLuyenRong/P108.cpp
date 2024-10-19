#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  float r;
  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> r >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  float c1 = sqrt(pow((float)(x2 - x1), 2) + pow((float)(y2 - y1), 2));
  float c2 = sqrt(pow((float)(x2 - x1), 2) + pow((float)(2 - y1), 2));
  float a2 = r * r;
  float a1 = c1 * c2;

  if (a1 > a2) cout << ">" << endl;
  else if (a1 < a2) cout << "<" << endl;
  else cout << "=" << endl;
}