#include<stdio.h>

/*
1) Input nisi n(array er size)
2) n size er array ta input nisi
3) oi array theke largest element ta find kora
4) arr[largestElement+1] size er akta array declare korsi
5) arr[largestElement+1] size er array er prottek ta index ee 0 assign kore dewa.
6) 0 theke n times ekta loop chalaisi  and every index er  jonno ei
    operation ta -> arr[input[i] += 1; perform korsi
7) depends problem statement
*/

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int input[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &input[i]);
    }

    int largestValue = input[0];

    for(int i=1; i<n; i++)
    {
        if(input[i] > largestValue)
        {
            largestValue = input[i];
        }
    }

    int newArray[largestValue+1];
    for(int i = 0; i<=largestValue; i++)
    {
        newArray[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        newArray[input[i]] += 1;
    }
    int count = 0;
    for(int i = largestValue; i >= 0; i--)
    {
        if(newArray[i] == 1)
        {
            count++;
            if(count == 3)
            {
                printf("nth- largest value : %d\n", i);
                break;
            }
        }
    }

    return 0;
}
