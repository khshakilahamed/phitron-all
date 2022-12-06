#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n],i, j, x, diff = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[i] = x;
    }

    for(i = 0; i < n; i++)
    {
        if(i == n-1)
        {
            break;
        }
        else
        {
            if(arr[i] != arr[i+1])
            {
                diff++;
                break;
            }
        }
    }

    if(diff > 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }




    return 0;
}


