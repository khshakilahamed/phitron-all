#include<stdio.h>

void safe_rooks(int n)
{
    int arr[n][2], i, j, k;

    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=1; j<2; j++)
        {
            for(k=1; k<n; k++)
            {
                if(arr[i-0][j-0] != arr[])
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    safe_rooks(n);

    return 0;
}
