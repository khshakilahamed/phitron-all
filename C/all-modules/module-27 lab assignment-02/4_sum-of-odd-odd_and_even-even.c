#include<stdio.h>

int sum_of_odd_and_even(int arr[], int n)
{
    int sum = 0, i, j;

    for(i=0; i<n; i++)
    {
        if(((i+1) % 2==0 && arr[i] % 2 == 0) || ((i+1) % 2 !=0 && arr[i] % 2 != 0))
            sum = sum + arr[i] + (i+1);
    }

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++)
        scanf("%d", &arr[i]);


    int sum = sum_of_odd_and_even(arr, n);

    printf("%d\n", sum);


    return 0;
}
