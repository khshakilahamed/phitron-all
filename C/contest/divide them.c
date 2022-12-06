
#include<stdio.h>

int main()
{
    int n, k, i;
    scanf("%d", &n);

    int arr[n+1];

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for(i = k+1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(i = 1; i <= k; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

