#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int a, b, c;
  cin >> a >> b >> c;
  float semiP = (a + b + c) / 2.0;
  float area = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));
  cout << fixed << setprecision(6) << area << endl; 
}