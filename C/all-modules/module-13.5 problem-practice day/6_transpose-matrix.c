#include<stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);

    int normalMatrix[n][m];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &normalMatrix[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", normalMatrix[j][i]);
        }
        printf("\n");
    }


    return 0;
}
