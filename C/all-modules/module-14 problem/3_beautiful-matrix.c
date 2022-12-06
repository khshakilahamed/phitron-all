// https://codeforces.com/problemset/problem/263/A
#include<stdio.h>

int main()
{
    int matrix[6][6], i, j;
    int row, col;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1)
            {
                row=i;
                col=j;
                break;
            }
        }
    }

    int ans = 0, row_change, col_change;
    if(row>2)
        row_change = (row-2);
    else
        row_change = (2-row);

    if(col>2)
        col_change = (col-2);
    else
        col_change = (2-col);

    ans = row_change + col_change;

    printf("%d\n", ans);


    return 0;
}
