#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr_1[n], arr_2[n], i, j;

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_1[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_2[i]);
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr_1[j]>arr_1[j+1])
            {
                int temp = arr_1[j];
                arr_1[j] = arr_1[j+1];
                arr_1[j+1] = temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr_2[j]<arr_2[j+1])
            {
                int temp = arr_2[j];
                arr_2[j] = arr_2[j+1];
                arr_2[j+1] = temp;
            }
        }
    }



    for(i=0; i<n; i++)
    {
        printf("%d ",arr_1[i] - arr_2[i]);
    }



    return 0;
}
