#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  string s;
  cin >> k >> s;
  for(int j = 1; j <= k; j++){
    string maxn = "0";
    for(unsigned int i = 0; i < s.length(); i++){
      string b = s;
      b.erase(i, 1);
      if(maxn.compare(b) <  0){
        maxn = b;
      }
    }
    s = maxn;
  }
  cout << s << endl;
  return 0;
}