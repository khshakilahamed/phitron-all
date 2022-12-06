#include<stdio.h>

int main()
{
    int n = 8, i, j;
    int ara[8] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    int sorted_ara[8];
    int temp;
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(ara[j] > ara[j+1])
            {
                temp=ara[j+1];
                ara[j+1]=ara[j];
                ara[j]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", ara[i]);
    }


    return 0;
}
