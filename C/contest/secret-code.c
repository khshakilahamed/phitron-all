
#include<stdio.h>

int main()
{
    int n, x, i, j, count=0;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if( x == 0 || x == 1)
        {
            count++;
        }

        for(j = 2; j <= x/2; j++)
        {
            if(x % j == 0)
            {
                count++;
                break;
            }
        }

        if(count == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

        count = 0;
    }

    return 0;
}
