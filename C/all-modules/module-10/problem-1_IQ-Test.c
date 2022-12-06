// https://codeforces.com/problemset/problem/25/A

#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n+5], even_counter = 0, odd_counter = 0, ans;

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i <= n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even_counter++;
        }
        else{
            odd_counter++;
        }
    }

    if(even_counter == 1)
    {
        for(i = 1; i <= n; i++)
        {
            if(arr[i] % 2 == 0)
            {
                ans = i;
            }
        }
    }
    else{
        for( i = 1; i <= n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                ans = i;
            }
        }
    }

    printf("%d", ans);


    return 0;
}
