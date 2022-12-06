#include<stdio.h>
#include<math.h>

int fact(int x);

int main()
{
    int n;
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));


    return 0;
}


int fact(int x)
{
    int res = 1, i;
    for(i=1; i<=x; i++)
    {
        res *= i;
    }

    return res;
}
