#include<stdio.h>

int sum (int arr[], int i, int n)
{
    if(i == n) return 0;

    int s = sum(arr, i+1, n);

    return arr[i]%10 + s;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int value = sum(arr, 0, n);

    printf("%d\n", value);

    return 0;
}
