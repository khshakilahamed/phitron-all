#include<stdio.h>

int main()
{
    int n,sum = 0, w;
    printf("Enter the number of passengers: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&w);

        sum += w;
    }

    printf("Total sum of weight: %d", sum);


    return 0;
}
