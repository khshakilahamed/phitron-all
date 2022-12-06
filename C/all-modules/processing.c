#include<stdio.h>

int main()
{
    int a , b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int sum;
    sum = a + b;

    printf("The sum of two numbers is %d", sum);

    return 0;
}
