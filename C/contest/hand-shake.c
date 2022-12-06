
#include<stdio.h>

int main()
{
    long long int n;
    int handShakes;
    scanf("%lld", &n);

    if( n == 1 || n == 0)
    {
        handShakes = 0;
    }
    else
    {
        handShakes = (n*(n-1)) / 2;
    }


    printf("%d\n", handShakes);


    return 0;
}

