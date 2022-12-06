#include<stdio.h>

int add_them(int n, int nums[])
{
    int sum = 0;
    int i;
    for(i=0; i<n; i++)
    {
        sum += nums[i];
    }

    return sum;
}

int main()
{
    int ara[] = {12, 15, 24, 29, 30, 2, 450, 2};

    int sum = add_them(8, ara);
    printf("The sum is %d\n", sum);


    return 0;
}
