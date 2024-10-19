#include <iostream>
#include <string>
using namespace std;

string fibonacci(int x)
{
    if (x == 1) return "A";  
    if (x == 2) return "B"; 
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
    int n;
    cin >> n;

    string rslt = fibonacci(n);
    cout << rslt << endl;

    return 0;
}
