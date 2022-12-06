// https://cses.fi/problemset/task/1094

#include<stdio.h>

int main()
{
    int n, i, moves = 0, arr[200003];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    printf("%d", moves);


    return 0;
}
