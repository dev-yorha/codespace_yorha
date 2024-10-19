#include <stdio.h>

// int main(void)
// {
//     int i = 3;
//     while ( i > 0)
//     {
//         printf("Meow\n");
//         i--;
//     }
// }

// NOTE
// 3 ways to change the counter
// i -=1
// i = i - 1
// i--
// "void" có tác dụng để thông báo rằng hàm sẽ không có return value, không có arguments.


// alternative syntax
// int main(void)
// {
//     for(int i = 0; i < 3; i++)
//     {
//         printf("meo meo\n");
//     }
// }

// void meow(void);  //hint cho compiler rằng ở phía dưới sẽ có define function meow
// int main(void)
// {
//     for(int i = 0; i < 3; i++)
//     {
//         meow();
//     }
// }
// void meow(void) //define function meow
// {
//     printf("meow\n");
// }

void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("helu mèo béo\n");
    }
}
int main(void)
{
    meow(4);
}
