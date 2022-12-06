/*
* Find the 3-rd larges number.


steps-
1. take input of an array size
2. take values of every index
3. find the largest number of the array

4. now, declare a new array with size newArr[largest+1]. here, largest values of the previous array.
5. assign value '0' for every index.
6. newArr[oldArr[i]] += 1;
7. now find the n-th largest number from the newArr[];

*/
#include<stdio.h>

int main()
{
    int n, i, count=0;
    printf("Enter the value of array size: ");
    scanf("%d", &n);

    int input[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);

    }

    int largest = input[0];

    for(i = 1; i < n; i++)
    {
        if(largest < input[i])
        {
            largest = input[i];
        }
    }

    // assigning new array with the largest value
    int arr[largest + 1];

    for(i = 0; i <= largest; i++)
    {
        // assigning value of every index as '0'
        arr[i] = 0;
    }

    for(i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }

    int duplicate = 0, unique = 0;
    for(i = largest; i >= 0; i--)
    {
        if(arr[i] == 1)
        {
            unique++;
        }
        else if(arr[i] >1)
        {
            duplicate++;
        }
    }

    printf("Total duplicate element found: %d\n", duplicate);
    printf("Total unique element found: %d\n", unique);

    return 0;
}

