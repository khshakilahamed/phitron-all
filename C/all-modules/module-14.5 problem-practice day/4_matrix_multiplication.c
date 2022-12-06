#include<stdio.h>

int main()
{
    int m1[3][3], m2[3][3], result[3][3], i, j, k;

    printf("Enter the first matrix value: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nEnter the second matrix value: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\n");
    printf("\nmatrix 1: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\nmatrix 2: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }


    int sum = 0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                sum = sum+m1[i][k] * m2[k][j];
            }
            result[i][j] = sum;
        }
    }


    return 0;
}
