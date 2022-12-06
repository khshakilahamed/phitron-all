#include<stdio.h>

int divisible_by_5(int a)
{
    if(a % 5 == 0)
        return 1;
    return 0;
}

int divisible_by_3(int a)
{
    if(a % 3 == 0)
        return 1;

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i =0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count_1, count_2, sum=0 ;
    for(int i =0; i<n; i++)
    {
        count_1 = divisible_by_5(arr[i]);
        count_2 = divisible_by_3(arr[i]);

        if(count_1 == 1 || count_2 == 1)
            sum++;
    }

    if(sum != 0)
        printf("%d\n", sum);
    else
    {
        sum = -1;
        printf("%d\n", sum);
    }


    return 0;
}
