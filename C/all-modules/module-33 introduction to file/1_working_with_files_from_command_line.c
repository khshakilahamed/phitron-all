#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, sum=0, arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }


    printf("sum -> %d\n", sum);


    return 0;
}
