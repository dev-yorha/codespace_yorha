#include <cs50.h>
#include <math.h>
#include <stdio.h>

long left;
int count = 0;
int digit, right_digit, first_digit, second_digit;
int sum = 0;
int main(void)
{
    long credit = get_long("What is your credit card number? "); // biến gốc
    long first_credit = credit / 1;  // tạo ra 1 biến mới giống hệt biến gốc
    long second_credit = credit / 1; // tạo ra 1 biến mới giống hệt biến gốc
    while (credit > 0)               // tìm số chữ số + tính tổng = Luhn's algorithm
    {
        digit = credit % 10;
        credit /= 10;
        count++;
        if (count % 2 != 0)
        {
            sum += digit;
        }
        else
        {
            digit *= 2;
            if (digit > 9)
            {
                right_digit = digit % 10;
                sum += 1 + right_digit;
            }
            else
            {
                sum += digit;
            }
        }
    } // Tại sao khi debug tại đây thì nó không hiện value của sum và count ?
    if (sum % 10 == 0)
    {
        first_digit = first_credit / pow(10, count - 1);
        second_digit = second_credit / pow(10, count - 2);
        if ((count == 13 || count == 16) && (first_digit == 4))
        {
            printf("Your card is VISA");
        }
        else if ((count == 15) && (second_digit == 34 || second_digit == 37))
        {
            printf("Your card is American Express");
        }
        else if (count == 16 && second_digit == 35)
        {
            printf("Your card is JCB");
        }
        else if ((count == 16) && (second_digit == 51 || second_digit == 52 || second_digit == 53 ||
                                   second_digit == 54 || second_digit == 55))
        {
            printf("Your card is Mastercard");
        }
        else
        {
            printf("Invalid card");
        }
    }
    else
    {
        printf("Invalid card");
    }
    printf("\n");
}

// Visa (13 || 16): 4
// American Express (15): 34,37
// JCB (16): 35
// Mastercard (16): 51, 52, 53, 54, 55
