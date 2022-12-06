#include<stdio.h>

int main()
{
    int m[3][3], i, j;

    printf("Enter the value of 3*3 matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nThe transpose matrix is-\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", m[j][i]);
        }
        printf("\n");
    }




    return 0;
}
