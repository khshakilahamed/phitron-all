#include<stdio.h>

int main()
{
    int n, q, a, b;
    scanf("%d", &n);

    int arr[n], i, j;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d",&q);

    for(i=0; i<q; i++)
    {
        scanf("%d%d", &a, &b);

        int temp = arr[a-1];
        arr[a -1] = arr[b-1];
        arr[b-1] = temp;

    }

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
