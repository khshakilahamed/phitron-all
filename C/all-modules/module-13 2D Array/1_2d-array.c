#include<stdio.h>

int main()
{
    int row = 4, col=3;
    int a[row][col];
    for(int i = 0; i<=row-1; i++)
    {
        for(int j=0; j<=col-1; j++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    // print 2D array
    printf("Print 2D array-\n");
    for(int i = 0; i<=row-1; i++)
    {
        for(int j=0; j<=col-1; j++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }


    return 0;
}
