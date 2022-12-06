#include<stdio.h>

int main()
{
    int N;
    int arr[100];
    int i, even_count = 0, odd_count = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < N; i++){
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("The number of events = %d \n", even_count);
    printf("The number of odds = %d \n", odd_count);


    return 0;
}

