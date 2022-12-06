// https://codeforces.com/problemset/problem/158/A

#include<stdio.h>

int main()
{
    int n, k, i, count = 0;
    scanf("%d%d", &n, &k);

    int arr[n+5];

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i <= n; i++)
    {
        if(arr[i] > 0 && arr[i] >= arr[k])
        {
            count++;
        }
    }

    printf("%d", count);



    return 0;
}

