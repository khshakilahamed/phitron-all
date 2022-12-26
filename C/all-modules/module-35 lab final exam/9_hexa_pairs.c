#include<stdio.h>
int gcd_f(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    else
    {
        return gcd_f(n2, n1 % n2);
    }
}
int main()
{
    int t, i=1, count=0;
    scanf("%d", &t);

    while(i<=t)
    {
        int n, j, k;
        scanf("%d", &n);

        int arr[n];

        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                if(j==k)
                {
                    continue;
                }
                else
                {
                    if(gcd_f(arr[j], arr[k]) == 1)
                    {
                        count++;
                    }
                }
            }
        }


        printf("%d\n", count);
        count=0;

        i++;
    }





    return 0;
}

