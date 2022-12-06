#include<stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);

    int matrix[n][m], matrix2[n][m], addition[n][m];

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<m; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<m; j++)
        {
            addition[i][j] = matrix[i][j] + matrix2[i][j];
            printf("%d ", addition[i][j]);
        }
         printf("\n");
    }


    return 0;
}
