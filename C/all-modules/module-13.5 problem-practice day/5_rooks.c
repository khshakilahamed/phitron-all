#include<stdio.h>

int main()
{
    int n, i, j, a, b, matrix[3][3];
    scanf("%d", &n);

    for(i=1; i<=3; i++)
    {
        for(j=1;j<=3; j++)
        {
            matrix[i][j] = 0;
        }
    }

    for(i = 1; i<=n; i++)
    {
        scanf("%d%d", &a, &b);
        matrix[a][b]=1;

    }

    printf("\n\n\n");
    for(i = 1; i<=3+1; i++)
    {
        for(j = 1; j<=3+1; j++)
        {
            if(matrix[i][j] == 0)
            {
                printf("%d %d", i, j);
                printf("\n");
            }
        }
    }




    return 0;
}
