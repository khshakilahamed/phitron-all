#include<stdio.h>

void add(int *x, int *y)
{
    printf("%d\n", *x + *y);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int *num1, *num2;
    num1 = &a;
    num2 = &b;

    add(num1, num2);

    return 0;
}

