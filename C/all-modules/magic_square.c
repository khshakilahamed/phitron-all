#include<stdio.h>

int main()
{
    int arr[3][3], sum_of_col=0, sum_of_row=0, sum_of_dia1 =0, sum_of_dia2=0, flag=0;
    int i, j;

    for(i = 0; i<3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int ;

    for(i = 0; i<3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i==j)
            {
                sum_of_dia1 = sum_of_dia1 + arr[i][j];
            }
            if(i+j == 3-1)
            {
                sum_of_dia2 = sum_of_dia2 + arr[i][j];
            }
        }
    }
    if(sum_of_dia1 != sum_of_dia2)
    {
        flag++;
    }
    else
    {
        for(i=0; i<3; i++)
        {
            sum_of_col = 0;
            sum_of_row = 0;

            for(j=0; j<3; j++)
            {
                sum_of_col += arr[i][j];
                sum_of_row += arr[j][i];
            }
            if((sum_of_col != sum_of_dia1) || (sum_of_row != sum_of_dia2))
            {
                flag++;
            }

        }
    }

    if(flag == 0)
    {
        printf("Magic Square Matrix");
    }
    else
    {
        printf("Not a Magic Square Matrix");
    }


    return 0;
}
