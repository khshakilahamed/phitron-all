#include<stdio.h>

int isPrime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t, j=1;
    scanf("%d", &t);

    while(j<=t)
    {
        int l, r, i;
        scanf("%d%d", &l, &r);

        for(i=l; i<=r; i++)
        {
            if(i==1 || i == 2)
            {
                printf("%d ", i);
                continue;
            }

            if(isPrime(i) == 1)
            {
                printf("%d ", i);
            }

        }

        printf("\n");

        j++;
    }




    return 0;
}
