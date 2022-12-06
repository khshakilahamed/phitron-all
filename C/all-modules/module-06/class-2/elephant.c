#include<stdio.h>

int main()
{
    int n,steps;
    scanf("%d", &n);

    // steps = (n/5) + (n%5 != 0)

    if(n % 5 != 0)
    {
        steps = n/5 + 1;
    }
    else
    {
        steps = n/5;
    }

    printf("%d", steps);


    return 0;
}
