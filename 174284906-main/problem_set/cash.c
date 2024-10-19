#include <cs50.h>
#include <stdio.h>

int charge;
int main(void)
{
    do
    {
        charge = get_int("Charge: ");
    }
    while (charge < 1);
    int x = charge / 25;
    int y = (charge - 25 * x) / 10;
    int z = (charge - 25 * x - 10 * y) / 5;
    int a = charge - 25 * x - 10 * y - 5 * z;
    int coin = x + y + z + a;
    printf("The number of coins: %i\n", coin);
}
