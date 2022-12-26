
#include<stdio.h>

int main()
{

        int n, i;
        scanf("%d", &n);

        int arr[n], j, k, search_value, flag;
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }

        scanf("%d", &search_value);

        for(j=0; j<n; j++)
        {
            if(search_value == arr[j])
            {
                flag = j+1;
            }
        }

        if(flag >= 1)
            printf(" %d\n", flag);
        else
            printf("Not Found\n");




    return 0;
}
