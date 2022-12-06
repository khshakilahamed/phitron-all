#include<stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], secondMax = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] > max){
            secondMax = max;
            max = arr[i];
        }
    }

    printf("The second maximum value is: %d\n", secondMax);

    return 0;
}
