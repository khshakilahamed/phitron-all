#include<stdio.h>

int calculate_median(int n, int arr[]);

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("\nEnter the values of array: ");

    int arr[n], i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    float median_value = calculate_median(n, arr);

    printf("\nMedian value is %0.0f\n", median_value);

    return 0;
}


int calculate_median(int n, int arr[])
{
    int i, j;
    int temp;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    float median;

    printf("Sorted Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    int value = n/2;

    if(n%2 == 0)
    {
        median = (float)(arr[value-1] + arr[value])/2;

        return median;
    }

    else
    {
        median = arr[value];
        return median;
    }
}
