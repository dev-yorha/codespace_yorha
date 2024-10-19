#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int a1, b1, c1, a2, b2, c2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

  if (( (float)(a1 / a2) == (float)(b1 / b2)) && (float)(a1 / a2) != (float)(c1 / c2)) 
  {
    cout << "0" << endl;
    return 0;
  }
  else if (( (float)(a1 / a2) == (float)(b1 / b2)) && (float)(a1 / a2) == (float)(c1 / c2))
  {
    cout << "Inf" << endl;
    return 0;
  }
  float y = (float) (c2 * a1 - c1 * a2) / (b2 * a1 - b1 * a2);
  float x = (float) (c1 - b1 * y) / a1;

  cout << fixed << setprecision(1) << x << endl << y << endl;
}