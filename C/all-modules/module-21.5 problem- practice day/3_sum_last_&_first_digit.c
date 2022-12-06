#include<stdio.h>

int result(int n);

int main()
{
    int n;
    scanf("%d", &n);

    int numbers[n], i;
    for(i = 0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int sum = 0;
    for(i = 0; i<n; i++)
    {
        sum += result(numbers[i]);
    }

    printf("Sum = %d\n", sum);


    return 0;
}

int result(int n)
{
    int first_digit, last_digit;
    first_digit = n/1000;
    last_digit = n%10;

    return first_digit+last_digit;
}
