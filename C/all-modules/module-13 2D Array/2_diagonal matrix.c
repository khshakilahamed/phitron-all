#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col];

    for(int i=0; i<=row-1; i++)
    {
        for(int j=0; j<=col-1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(row==col)
    {
        int ans=1;
        for(int i=0; i<=row-1; i++)
        {
            for(int j=0; j<=col-1; j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(a[i][j] != 0)
                {
                    ans=0;
                }
            }
        }
        if(ans==1)
        {
            printf("Diagonal\n");
        }
        else
        {
            printf("Not Diagonal\n");
        }
    }
    else
    {
        printf("Not diagonal\n");
    }

    return 0;
}
