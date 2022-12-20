#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    int maxx = num1>num2 ? num1 : num2;

    printf("The maximum value is: %d\n", maxx);

    return 0;
}
