#include <stdio.h>
#include <cs50.h>

// int add(int a, int b, int c);
// int main(void)
// {
//     int x = get_int("x=");
//     int y = get_int("y=");
//     int z = get_int("z=");
//     printf("x+y+z=%i\n", add(x, y, z));
// }

// int add(int a, int b, int c) // int ở đầu có tác dụng cho cái return value là một integer, bên trong () có tác dụng để 3 cái input sẽ phải là 3 số nguyên
// {
//     return a + b + c;
// }




// int main(void)
// {
//     int x = get_int("x=");
//     int y = get_int("y=");
//     printf("x/y = %f\n", (float)x/ (float)y); //Nếu không có 2 ngoặc (float) ở đầu x và y thì function sẽ bị *truncation* (lược bỏ)
// }




int main(void)
{
    int x = get_int("x=");
    int y = get_int("y=");
    int z = get_int("z=");
    float result = ((float)x+(float)y)/(float)z;
    printf("The result is %.2f\n", result);
}
// Floating-point imprecision
//%.2f 2 chu so thap phan
