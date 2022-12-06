/*
Identity Matrix = Scalar matrix + Diagonal Matrix + Square

diagonal value will be 1, and every value will be zero(0) without diagonal
*/


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
                    // special checking for diagonal
                    if(a[i][j] != 1)
                    {
                        ans=0;
                    }
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
            printf("Identity Matrix\n");
        }
        else
        {
            printf("NOt Identity Matrix\n");
        }
    }
    else
    {
        printf("Not Identity Matrix\n");
    }

    return 0;
}
