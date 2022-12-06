#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n],i, j, x, diff = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[i] = x;
    }

    for(i = 0; i <n; i++)
    {
        printf("%d - ", i+1);
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j]){}
            else
            {
                printf("%d ", arr[j]);
            }
        }
        printf("\n");
    }




    return 0;
}



