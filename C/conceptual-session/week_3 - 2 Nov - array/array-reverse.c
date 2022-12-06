#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], revArr[n], i, j;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=n-1, j=0; i>=0, j<n; i--, j++)
    {
        revArr[j] = arr[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", revArr[i]);
    }


    return 0;
}
