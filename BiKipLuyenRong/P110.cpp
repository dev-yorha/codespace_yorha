#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  int v1, v2, dT, d;
  cin >> v1 >> v2 >> dT >> d;

  if (v1 >= v2)
  {
    cout << "INF" << endl;
    return 0;
  }
  
  int t = round((float)((v1 * dT) / (v2 - v1)));
  cout << t << endl;
  int t1 = round((float)(d / v1));
  if (v1 * dT >= d) 
  {
    cout << dT << endl;
    return 0;
  }
  int t2 = round((float)(d / v2));
  cout << min(t1, t2) << endl;
}