#include<stdio.h>

int factorial(int n)
{
    int i, fact=1;
    for(i=n; i>=1; i--)
    {
        fact *= i;
    }

    return fact;
}


double ratio (int a, int b)
{
    return factorial(a)/factorial(b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    double result = ratio(a, b);

    printf("%0.2lf\n", result);

    return 0;
}
