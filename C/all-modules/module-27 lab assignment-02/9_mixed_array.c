#include<stdio.h>

int count_prime_numbers(int arr[], int n)
{
    int i, j, prime=0, count=0;

    for(i=0; i<n; i++)
    {
        for(j=2; j<arr[i]/2; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }
        if(count == 0)
            prime++;

        count=0;
    }

    return prime;
}


float average_of_evens(int arr[], int n)
{
    int evens = 0, sum=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evens++;
            sum += arr[i];
        }
    }

    float average = (float)sum/evens;

    return average;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i;

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int primeNumbers = count_prime_numbers(arr, n);
    float average = average_of_evens(arr, n);

    printf("Prime numbers: %d\n", primeNumbers);
    printf("Average of all even integers:  %0.2f\n", average);



    return 0;
}
