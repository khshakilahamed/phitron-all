// https://codeforces.com/problemset/problem/1512/A

#include<stdio.h>
int main()
{
    int t, j;
    scanf("%d", &t);

    for(j = 0; j < t; j++)
    {
        int n, i, maxN = 101;
        scanf("%d", &n);

        int input[n+1];
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &input[i]);
        }

        int arr[maxN];
        for(i = 0; i < maxN; i++)
        {
            arr[i] = 0;
        }

        for(i = 1; i<=n; i++)
        {
            arr[input[i]] += 1;
        }

        int index;

        for(i = 1; i <= n; i++)
        {
            if(arr[input[i]] == 1)
            {
                index = i;
                break;
            }
        }

        printf("%d\n", index);
    }


    return 0;
}
