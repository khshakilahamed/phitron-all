#include<stdio.h>

int main()
{
    int a, b, c;
    a = 22;
    b = 5;
    c = ~a;

    int bitwise_and = a&b;
    int bitwise_or = a|b;

    printf("%d\n", bitwise_and);
    printf("%d\n", bitwise_or);
    printf("%d\n", c);


    return 0;
}
