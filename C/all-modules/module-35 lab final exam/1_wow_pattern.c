#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        if(i%2!=0)
        {
            for(j=1; j<=2*i-1; j++)
            {
                printf("^");
            }
        }
        else
        {
           for(j=1; j<=2*i-1; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }



    return 0;
}
