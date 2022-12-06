#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n],i, j, x, sum = 0, flag = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);

    for(i = 0; i <n; i++)
    {
        for(j = 0; j<n; j++)
        {
            sum = arr[i] + arr[j];

            if(sum == m){
                flag++;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }





    return 0;
}




