#include <iostream>

using namespace std;

int totalApples;
int main(void)
{
    int numberOfBaskets = 5;
    int applePerBasket;

    do
    {
        cout << "Enter number of apples per baskets: ";
        cin >> applePerBasket;
    }
    while (applePerBasket < 0);

    totalApples = applePerBasket * numberOfBaskets;
    cout << "Number of apples is " << totalApples << "\n";
}
