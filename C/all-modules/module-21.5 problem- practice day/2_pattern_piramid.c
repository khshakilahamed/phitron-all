#include<stdio.h>

void pattern(int n);

int main()
{
    int n;
    scanf("%d", &n);

    pattern(n);


    return 0;
}


void pattern(int n)
{
    int i, j;
    for(i=n; i>=1; i--)
    {
        for(j=i; j<=i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=n*2 -1; j++)
        {

        }
    }
}
