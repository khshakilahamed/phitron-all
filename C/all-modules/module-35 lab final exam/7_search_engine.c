#include<stdio.h>

int main()
{
    int t, i=1;
    scanf("%d", &t);

    while(i<=t)
    {
        int n;
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
                break;
            }
        }

        if(flag)
            printf("Case %d: %d\n", i, flag);
        else
            printf("Case %d: Not Found\n", i);


        flag=0;

        i++;
    }


    return 0;
}
