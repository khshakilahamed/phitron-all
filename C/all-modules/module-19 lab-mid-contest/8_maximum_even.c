#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i, j;
    int sumArray[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sumArray[i] = 0;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            int sum=0;
            if(i!=j && arr[i] != arr[j])
            {
                sum = arr[i] + arr[j];
                if(sum%2 == 0)
                {
                    sumArray[i] = sum;
                }
            }
        }
    }


    int max = sumArray[0];
    for(i=1; i<n; i++)
    {
        printf("%d ", sumArray[i]);
        if(max<sumArray[i])
            max = sumArray[i];
    }

    printf("%d\n", max);


    return 0;
}
