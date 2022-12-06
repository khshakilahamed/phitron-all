#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int i = 0;
    while(i<t)
    {
        int n, maxN=101, i;
        scanf("%d", &n);

        int arr[n];
        for(i=0; i<n;i++)
        {
            scanf("%d", &arr[i]);
        }

        int newArry[maxN];

        for(i=0; i<maxN; i++)
        {
            newArry[i]=0;
        }

        for(i = 0; i<n; i++)
        {
            newArry[arr[i]] += 1;
        }

        int index=0;

        for(i = 0; i<maxN; i++)
        {
            if(newArry[i] == 1)
            {
                index = i;
                break;
            }
        }

        printf("%d\n", index);



        i++;
    }

    return 0;
}
