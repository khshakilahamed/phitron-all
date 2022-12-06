#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n],i, j, x, index, value;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[i] = x;
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d", &index, &value);
        arr[index] += value;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }




    return 0;
}

