#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    int i, j, m_1[m][n], m_2[m][n], m_3[m][n];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &m_1[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &m_2[i][j]);
        }
    }
    printf("\n\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            m_3[i][j] = m_1[i][j] + m_2[i][j];
            printf("%d ", m_3[i][j]);
        }
        printf("\n");
    }



    return 0;
}
