#include<stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d-th position value: %d\n", i, arr[i]);
    }

    return 0;
}
