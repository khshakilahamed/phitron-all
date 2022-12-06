#include<stdio.h>

void divisors(int n);

int main()
{
    int n;
    scanf("%d", &n);

    divisors(n);


    return 0;
}


void divisors(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
            printf("%d ", i);
    }
}
