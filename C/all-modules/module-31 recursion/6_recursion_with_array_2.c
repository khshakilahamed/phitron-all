#include<stdio.h>

int solve(int arr[], int n)
{
    if(n==0) return 0;

    int s = solve(arr+1, n-1);

    return s + *arr;
//    return s+arr[0];
}

int main()
{
    int n;
    scanf("%d", &n);
    int i, arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = solve(arr, n);

    printf("%d\n", sum);


    return 0;
}
