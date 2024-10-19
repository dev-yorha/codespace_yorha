#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b;
	char c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(2);
	if(c == '+') cout << a+b;
	if(c == '-') cout << a-b;
	if(c == '*') cout << a*b;
	if(c == '/') cout << a/b;
	return 0;
}