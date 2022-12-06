#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);

    int arr[n][m], i, j, k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    int row_col = 0;
    for(i=1; i<n; i++)
    {
        for(j=1; j<m-1; j++)
        {
            for(k=1; k<m; k++)
            {
                if((arr[0][0] != arr[j][k]) || (arr[0][0] != arr[k][j]))
                {
                    row_col++;
                }
            }
            if(row_col == 0)
            {
                arr[0][0] = arr[0][0] + 3;
            }
        }
    }


    int row = 0, col = 0;
    for(i=1; i<n; i++)
    {
        for(j=0; j<m-1; j++)
        {
            if(arr[i][j] != arr[i][j+1])
                col++;
        }

        if(col==0)
        {
            arr[i][0] = arr[i][0] + 1;
        }



        for(j=0; j<m-1; j++)
        {
            if(arr[j][i] != arr[j+1][i])
                row++;
        }
        if(row==0)
        {
            arr[0][i] = arr[0][i] + 2;
        }


    }




    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}



/*
int col=0, row = 0;
    for(i=0; i<1; i++)
    {
        for(j=1; j<m-1; j++)
        {
            if(arr[i][j] != arr[i][j+1])
                col++;

            if(arr[j][i] != arr[j+1][i])
                row++;
        }
    }

    if(col == 0)
    {
        for(i=0; i<1; i++)
        {
            for(j=1; j<m; j++)
            {
                arr[i][j] = arr[i][j] + 2;
            }
        }
    }

    if(row == 0)
    {
        for(i=0; i<1; i++)
        {
            for(j=1; j<m; j++)
            {
                arr[j][i] = arr[j][i] + 1;
            }
        }
    }

*/
